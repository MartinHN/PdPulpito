/*
 ==============================================================================
 
 This file was auto-generated by the Introjucer!
 
 It contains the basic framework code for a JUCE plugin processor.
 
 ==============================================================================
 */
#include "PdAudioProcessor.h"
#include "MainComponent.h"
#include "Config.h"



//==============================================================================
PdAudioProcessor::PdAudioProcessor()
{
    
    cachedSampleRate = 44100;
    isPdPatchLoaded = false;
    
    static int first = 0;
    //    if(first<2){
    //        setPatchFile(File(PATCH_PATH));
    //    }
    //    else{
    //        setPatchFile(File(PATCH_PATH2));
    //    }
    first ++;
    
    //        loadFromGUI();
    pdTimer = new PdTimer(this);
    patchOpener = new PatchOpener(this);
    addChangeListener(patchOpener);
    
    
}

PdAudioProcessor::~PdAudioProcessor()
{
    pdTimer->stopTimer();
     removeChangeListener(patchOpener);
    // audioparameters are handled by host so delete only pd internals
    for(int i = 0 ; i < pdParameters.size() ; i++){
        if(!pdParameters[i]->isAudioParameter()){
            delete  pdParameters[i];
        }
    }
    pdParameters.clear();
    pd = nullptr;
    
}

//==============================================================================
void PdAudioProcessor::setParameterName(int index, String name)
{
    if(index>=0){
        PdParameter* p = pdParameters.getUnchecked(index);
        p->setName(name);
    }
}


void PdAudioProcessor::loadFromGUI(){
    PdParamGetter::getParamFromPd(pd);
    setParametersFromDescs();
    updateProcessorParameters();
    for(auto s:pulpParameterDescs){
        if(s->recieveName!="empty"){
            pd->subscribe(s->recieveName.toStdString());
            
        }
    }
    
}



void PdAudioProcessor::setParametersFromDescs(){
    
    // hack to allow to reload parameters on the go
    // allow to add new or replace param as the host may need to keep same pointers
    DBG3("new params",pulpParameterDescs.size(),maximumParameterCount);
    
//    pdParameters.clear();
//    maximumParameterCount = 0;
    for(int i = 0; i < pulpParameterDescs.size() ; i++){
        
        if(i>=maximumParameterCount){
            PdParameter* p = new PdParameter (pulpParameterDescs[i]);
            pdParameters.add(p);
            maximumParameterCount ++;
        }
        else if(i<pdParameters.size()){
            pdParameters[i]->setFromDesc(pulpParameterDescs[i]);
            
            //                pdParameters[i]->setValue(0);
        }
        else{
            DBG("parameter not found " << pulpParameterDescs[i]->sendName << " count : " << maximumParameterCount);
        }
    }
    //    for(int i = pulpParameterDescs.size() ; i < pdParameters.size() ; i++){
    //        pdParameters[i]->
    //    }
    // pdParameters.resize(pulpParameterDescs.size());
    
    
}


void PdAudioProcessor::updateProcessorParameters(){
    
    
    
    for(auto & p:pdParameters){
        if(p->isAudioParameter()){
            int idx = p->getProcessorIdx();
            jassert(idx>=0);
            if(idx>=getNumParameters()){
                addParameter(p);
                DBG3("adding processor p : " , idx , p->getName());
            }
            else{
                setParameter(idx, p->getValue());
                DBG3("setting processor p : " , idx , p->getName());
            }
            
        }
        
    }
    
    
}







//==============================================================================
void PdAudioProcessor::prepareToPlay (double sampleRate, int samplesPerBlock)
{
    // Use this method as the place to do any pre-playback
    // initialisation that you need..
    cachedSampleRate = sampleRate;
    openNewPatch(File(PATCH_PATH));
    
    
    
}

void PdAudioProcessor::releaseResources()
{
    // When playback stops, you can use this as an opportunity to free up any
    // spare memory, etc.
    pdTimer->stopTimer();
    if (pd != nullptr)
    {
        //        pd->computeAudio (false);
        pd->closePatch (patch);
    }
    
    pd = nullptr;
    pdInBuffer.free();
    pdOutBuffer.free();
}


void PdAudioProcessor::doOpenNewPatch(){
    
    if(!isPdPatchLoaded && patchfile.exists()){
        
        reloadPdPatch();
        PdParamGetter::dollarZero = patch.dollarZero();
        loadFromGUI();
        waitForUIToLoad =true;
        if(getActiveEditor()==nullptr){
            isPdPatchLoaded = true;
            waitForUIToLoad = false;
        }
        
        //        t_canvas * t = canvas_getcurrent();
        //        t_gobj * git = t->gl_list;
        //        for(;git!=NULL ; git = git->next; )
        
    }
}
void PdAudioProcessor::openNewPatch(juce::File file , bool immediate){
    if(file.exists()){
        setPatchFile(file);
    }
    
    pdTimer->stopTimer();
    isPdPatchLoaded = false;
    if(immediate || MessageManager::getInstance()->isThisTheMessageThread()){

        sendSynchronousChangeMessage();
    }
    else{
        sendChangeMessage();
    }
    
}


void PdAudioProcessor::sendChangedParameters(){
    for (int i=0; i<pdParameters.size(); i++) {
        PdParameter* parameter = pdParameters[i];
        if(parameter->hasToObserve()){
            String pname = parameter->getName(70);
            if(pname!="empty" && pname!="nos"){
                if(parameter->getType() == PulpParameterDesc::Type::POPUP){
                    std::string val = parameter->getDesc()->elements.getReference(parameter->getTrueValue()).toStdString();
                    pd->sendSymbol(pname.toStdString(), val);
                }
                else if(parameter->getType() == PulpParameterDesc::Type::BANG && parameter->getValue()>0){
                    pd->sendBang(pname.toStdString());
                }
                else{
                    //                    DBG3("sending",pname.toStdString(), parameter->getTrueValue());
                    pd->sendFloat(pname.toStdString(), parameter->getTrueValue());
                }
            }
        }
    }
    
}
void PdAudioProcessor::processBlock (AudioSampleBuffer& buffer, MidiBuffer& midiMessages)
{
    //    int instance = -1;
    
    //    if(patchfile.getFullPathName() == PATCH_PATH){
    //        instance = 0;
    //    }
    //    else{
    //        instance = 1;
    //    }
    
    if(isPdPatchLoaded){
        if(!pdTimer->isTimerRunning()){
            pdTimer->startTimer(10);
        }
        //    pd->setMainContext();
        clearMidiBuffer(buffer.getNumSamples());
        
        
        
        
        int numChannels = jmin (getNumInputChannels(), getNumOutputChannels());
        int len = buffer.getNumSamples();
        
        
        //        sendChangedParameters();
        MidiMessage message;
        MidiBuffer::Iterator it (midiMessages);
        int samplePosition = buffer.getNumSamples();
        
        
        while (it.getNextEvent (message, samplePosition))
        {
            //        DBG("in" << message.getNoteNumber() );//<< " , " << message.getFloatVelocity() << " c " << message.getChannel() <<  "n" << samplePosition);
            
            if (message.isNoteOn (true)) {
                pd->sendNoteOn (message.getChannel(), message.getNoteNumber(), message.getVelocity());
            }
            if (message.isNoteOff (true)) {
                pd->sendNoteOn (message.getChannel(), message.getNoteNumber(), 0);
            }
        }
        
        
        
        //output recieved
        
        
        int idx = 0;
        while (len > 0)
        {
            int max = jmin (len, pd->blockSize());
            
            /* interleave audio */
            
            // TODO : While loop per tick with less copy operations (i.e here + processfloat)
            {
                float* dstBuffer = pdInBuffer.getData();
                for (int i = 0; i < max; ++i)
                {
                    for (int channelIndex = 0; channelIndex < numChannels; ++channelIndex)
                        *dstBuffer++ = buffer.getReadPointer(channelIndex) [idx + i];
                }
            }
            
            pd->processFloat (1, pdInBuffer.getData(), pdOutBuffer.getData());
            
            /* write-back */
            {
                const float* srcBuffer = pdOutBuffer.getData();
                for (int i = 0; i < max; ++i)
                {
                    for (int channelIndex = 0; channelIndex < numChannels; ++channelIndex)
                        buffer.getWritePointer (channelIndex) [idx + i] = *srcBuffer++;
                }
            }
            
            idx += max;
            len -= max;
        }
        
        //   send daw info if needed
        sendDawInfo();
        
        
        midiMessages.swapWith( getMidiBuffer() );
        
        
    }
    else{
        // In case we have more outputs than inputs, this code clears any output channels that didn't contain input data, (because these aren't guaranteed to be empty - they may contain garbage).
        // I've added this to avoid people getting screaming feedback when they first compile the plugin, but obviously you don't need to this code if your algorithm already fills all the output channels.
        for (int i = getNumInputChannels(); i < getNumOutputChannels(); ++i)
            buffer.clear (i, 0, buffer.getNumSamples());
    }
    
    
}

void PdAudioProcessor::sendDawInfo(){
    if(pd){
        
        getPlayHead()->getCurrentPosition(currentPositionInfo);
        if(dawInfo.tempo != currentPositionInfo.bpm){
            String s = String(dollarZero)+"-pulp_tempo";
            dawInfo.tempo = currentPositionInfo.bpm;
            pd->sendFloat(s.toStdString(),dawInfo.tempo);
            DBG("set bpm : " << dawInfo.tempo);
        }
        int newBeat = (int)(currentPositionInfo.ppqPosition*currentPositionInfo.timeSigNumerator);
        //        DBG("ppq " <<currentPositionInfo.ppqPosition <<","<< currentPositionInfo.timeInSeconds << "," << dawInfo.beat );;
        if(dawInfo.beat != newBeat){
            dawInfo.beat = newBeat;
            String s = String(dollarZero)+"-pulp_beat";
            pd->sendFloat(s.toStdString(),dawInfo.beat);
            
        }
    }
}



//==============================================================================
void PdAudioProcessor::getStateInformation (MemoryBlock& destData)
{
    // You should use this method to store your parameters in the memory block.
    // You could do that either as raw data, or use the XML or ValueTree classes
    // as intermediaries to make it easy to save and load complex data.
    
    // STORE / SAVE
    
    String name = "PdPulpito";//getName().replace(" ", "-");
    XmlElement xml(name);
    
    
    // parameters
    XmlElement* parameterListElement = new XmlElement("parameterList");
    
    for(size_t i = 0; i < pdParameters.size(); ++i) {
        
        XmlElement* parameterElement = new XmlElement("parameter");
        pdParameters[i]->serialize(parameterElement);
        parameterListElement->addChildElement(parameterElement);
    }
    xml.addChildElement(parameterListElement);
    XmlElement * meta = new XmlElement("meta");
    meta->setAttribute("patchPath",patchfile.getFullPathName());
    meta->setAttribute("lastModificationTime",String(getLastModificationTime().toMilliseconds()));
    xml.addChildElement(meta);
    //    MemoryOutputStream stream;
    //    xml.writeToStream(stream, "");
    //DBG("save [" << stream.toString() << "] " );;
    
    copyXmlToBinary(xml, destData);
}

void PdAudioProcessor::setStateInformation (const void* data, int sizeInBytes)
{
    // You should use this method to restore your parameters from this memory block,
    // whose contents will have been created by the getStateInformation() call.
    
    // RESTORE / LOAD
    String name = "PdPulpito";//getName().replace(" ", "-");
    
    ScopedPointer<XmlElement> xml(getXmlFromBinary(data, sizeInBytes));
    bool needsToReopenPatch = false;;
    if(xml != 0 && xml->hasTagName(name)) {
        
        MemoryOutputStream stream;
        xml->writeToStream(stream, "<?xml version=\"1.0\"?>");
        forEachXmlChildElementWithTagName(*xml, child, "meta"){
            int64 milliseconds = child->getStringAttribute("lastModificationTime").getLargeIntValue();
            String pathToLoad = child->getStringAttribute("patchPath");
            
            
            
            setPatchFile(pathToLoad);
            if(getLastModificationTime().toMilliseconds()!=milliseconds){
                canRestore = false;
                status = "patch was Modified since last Time";
                DBG3(status,getLastModificationTime().toMilliseconds(),milliseconds);
                needsToReopenPatch = false;
                return;
            }
            else{
                
                needsToReopenPatch = true;
                
            }
            
        }
        
        if(needsToReopenPatch){
            openNewPatch(File(),true);
        }
        forEachXmlChildElement (*xml, child)
        {
            DBG(" - load : " << child->getTagName() );;
            
            if(child->hasTagName("parameterList")) {
                
                forEachXmlChildElement (*child, parameterElement) {
                    
                    // TODO : change index based retrieval to safer?
                    
                    int objIndex = parameterElement->getIntAttribute("index");
                    if( objIndex<pdParameters.size()){
                        
                        PdParameter* p = pdParameters.getUnchecked(objIndex);
                        p->deSerialize(parameterElement);
                        if(p->isAudioParameter()){
                            DBG3("loading param " , parameterElement->getStringAttribute("name"), parameterElement->getDoubleAttribute("value") );
                            setParameter(p->getParameterIndex(), (float) p->getValue());
                        }
                        
                        
                    }
                    else{
                        
                        DBG("DAW saved old Parameter : not supported" );;
                        return;
                    }
                    
                    
                }
            }
        }
        
    }
    
}


bool PdAudioProcessor::hasNewFilesSince(Time t){
    return t>getLastPdGUIModTime() && t>File(patchfile).getLastModificationTime();
    
}

Time PdAudioProcessor::getLastModificationTime(){
    Time t1 = getLastPdGUIModTime();
    Time t2 = File(patchfile).getLastModificationTime();
    return jmax(t1,t2);
}

void PdAudioProcessor::reloadPdPatch ()
{
    DBG("reloading Patch" );
    
    
    
    if (pd) {
        //        pd->computeAudio(false);
        pd->closePatch(patch);
        pd->unsubscribeAll();
    }
    else{
        
        pd = new pd::PdBase;
    }
    pd->init (getNumInputChannels(), getNumOutputChannels(), cachedSampleRate,false);
    pd->setReceiver(this);
    pd->setMidiReceiver(this);
    
    
    
    int numChannels = jmin (getNumInputChannels(), getNumOutputChannels());
    pdInBuffer.calloc (pd->blockSize() * numChannels);
    pdOutBuffer.calloc (pd->blockSize() * numChannels);
    
    if (!patchfile.exists()) {
        if (patchfile.getFullPathName().toStdString() != "") {status = "File does not exist";}
        return;
    }
    if (patchfile.isDirectory()) {
        status = "You selected a directory";
        return;
    }
    
    patch = pd->openPatch (patchfile.getFileName().toStdString(), patchfile.getParentDirectory().getFullPathName().toStdString());
    
    if (patch.isValid()) {
        pd->computeAudio (true);
        status = "Patch loaded successfully";
    } else {
        status = "Selected patch is not valid, sorry";
    }
    
    // clear info to send it again on next process block
    dawInfo.clear();
    
    
}

void PdAudioProcessor::receiveFloat(const std::string& dest, float num)
{
    if(getActiveEditor()!=nullptr && dest!="empty"){
        MainComponent * mainEditor =dynamic_cast<MainComponent*>(getActiveEditor()) ;
        if(mainEditor->pdEditor.isLoaded){
            for(auto & c:mainEditor->pdEditor.pdCanvas){
                for(auto & cc:c->pdComponents){
                    if(cc->getRecieveName()== dest){
                        cc->setValueFromPd(num);
                    }
                }
            }
        }
    }
};


void PdAudioProcessor::print(const std::string& message) {
    if(getActiveEditor()!=nullptr){
        
        MainComponent * mainEditor =dynamic_cast<MainComponent*>(getActiveEditor()) ;
        mainEditor->addPdLog(message);
    }
};




void PdAudioProcessor::setPatchFile(File file)          {patchfile = file;}

File PdAudioProcessor::getPatchFile()                   {return patchfile;}

AudioProcessorEditor* PdAudioProcessor::createEditor()  {return new MainComponent(*this);}

//==============================================================================
// This creates new instances of the plugin..
AudioProcessor* JUCE_CALLTYPE createPluginFilter()
{
    return new PdAudioProcessor();
}



