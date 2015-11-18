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
    
    static int first = 0;
    
    if(first<2){
    setPatchFile(File(PATCH_PATH));
    }
    else{
    setPatchFile(File(PATCH_PATH2));
    }
    
    first ++;
    loadFromGUI();

}

PdAudioProcessor::~PdAudioProcessor()
{
    pd = nullptr;
    

}

//==============================================================================
void PdAudioProcessor::setParameterName(int index, String name)
{
    PdParameter* p = pdParameters.getUnchecked(index);
    p->setName(name);
}


void PdAudioProcessor::loadFromGUI(){
    PdParamGetter::getParameterDescsFromPatch(patchfile);
    setParametersFromDescs();
    updateProcessorParameters();
}



void PdAudioProcessor::setParametersFromDescs(){
    // hack to allow to reload parameters on the go
    // allow to add new or replace param as the host may need to keep same pointers
    
    pdParameters.clear();
    
    for(int i = 0; i < pulpParameterDescs.size() ; i++){
        if(maximumParameterCount<=i){
            PdParameter* p = new PdParameter (0, (pulpParameterDescs[i]->name));
            pdParameters.add(p);
            maximumParameterCount ++;
        }
        else if(i<pdParameters.size()){
            pdParameters[i]->setName((pulpParameterDescs[i]->name));
            pdParameters[i]->setValue(0);
        }
        else{
            DBG("parameter not found " << pulpParameterDescs[i]->name << " count : " << maximumParameterCount);
        }
        
    }
    
}


void PdAudioProcessor::updateProcessorParameters(){

    int idx = 0;
    for(auto & p:pdParameters){
        
        if(idx>=getNumParameters()){
            addParameter(p);
        }
        else{
            setParameter(idx, p->getValue());
        }
        idx++;
        
    }
}



const String PdAudioProcessor::getName() const
{
    return PdParamGetter::getPdRootName();
}

const String PdAudioProcessor::getInputChannelName (int channelIndex) const
{
    return String (channelIndex + 1);
}

const String PdAudioProcessor::getOutputChannelName (int channelIndex) const
{
    return String (channelIndex + 1);
}

bool PdAudioProcessor::isInputChannelStereoPair (int index) const
{
    return true;
}

bool PdAudioProcessor::isOutputChannelStereoPair (int index) const
{
    return true;
}

bool PdAudioProcessor::acceptsMidi() const
{
#if JucePlugin_WantsMidiInput
    return true;
#else
    return false;
#endif
}

bool PdAudioProcessor::producesMidi() const
{
#if JucePlugin_ProducesMidiOutput
    return true;
#else
    return false;
#endif
}

bool PdAudioProcessor::silenceInProducesSilenceOut() const
{
    return false;
}

double PdAudioProcessor::getTailLengthSeconds() const
{
    return 0.0;
}

int PdAudioProcessor::getNumPrograms()
{
    return 1;   // NB: some hosts don't cope very well if you tell them there are 0 programs,
    // so this should be at least 1, even if you're not really implementing programs.
}

int PdAudioProcessor::getCurrentProgram()
{
    return 0;
}

void PdAudioProcessor::setCurrentProgram (int index)
{
}

const String PdAudioProcessor::getProgramName (int index)
{
    return String();
}

void PdAudioProcessor::changeProgramName (int index, const String& newName)
{
}

//==============================================================================
void PdAudioProcessor::prepareToPlay (double sampleRate, int samplesPerBlock)
{
    // Use this method as the place to do any pre-playback
    // initialisation that you need..
//    needsToReopenPatch = sampleRate;
    reloadPdPatch(sampleRate);
    
    
}

void PdAudioProcessor::releaseResources()
{
    // When playback stops, you can use this as an opportunity to free up any
    // spare memory, etc.
    if (pd != nullptr)
    {
//        pd->computeAudio (false);
        pd->closePatch (patch);
    }
    
    pd = nullptr;
    pdInBuffer.free();
    pdOutBuffer.free();
}


void PdAudioProcessor::processBlock (AudioSampleBuffer& buffer, MidiBuffer& midiMessages)
{
    int instance = -1;

    if(patchfile.getFullPathName() == PATCH_PATH){
        instance = 0;
    }
    else{
        instance = 1;
    }
    
    if(needsToReopenPatch>=0){
            reloadPdPatch(needsToReopenPatch);
            sendChangeMessage();
            needsToReopenPatch = -2;
    }
    
//    pd->setMainContext();
    clearMidiBuffer(buffer.getNumSamples());
    
    
    // In case we have more outputs than inputs, this code clears any output channels that didn't contain input data, (because these aren't guaranteed to be empty - they may contain garbage).
    // I've added this to avoid people getting screaming feedback when they first compile the plugin, but obviously you don't need to this code if your algorithm already fills all the output channels.
    for (int i = getNumInputChannels(); i < getNumOutputChannels(); ++i)
        buffer.clear (i, 0, buffer.getNumSamples());
    
    int numChannels = jmin (getNumInputChannels(), getNumOutputChannels());
    int len = buffer.getNumSamples();
    
    
    for (int i=0; i<pdParameters.size(); i++) {
        PdParameter* parameter = pdParameters[i];
        if(parameter->hasToObserve())
            pd->sendFloat(parameter->getName(300).toStdString(), parameter->getValue());
    }
    
    MidiMessage message;
    MidiBuffer::Iterator it (midiMessages);
    int samplePosition = buffer.getNumSamples();
    
    
    while (it.getNextEvent (message, samplePosition))
    {
        DBG("in" << message.getNoteNumber() );//<< " , " << message.getFloatVelocity() << " c " << message.getChannel() <<  "n" << samplePosition);
        
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
    
    midiMessages = getMidiBuffer();
    
    
    //   send daw info if needed
    sendDawInfo();
    
}

void PdAudioProcessor::sendDawInfo(){
    if(pd){
        
        getPlayHead()->getCurrentPosition(currentPositionInfo);
        if(dawInfo.tempo != currentPositionInfo.bpm){
            dawInfo.tempo = currentPositionInfo.bpm;
            pd->sendFloat("pulp_tempo",dawInfo.tempo);
            DBG("set bpm : " << dawInfo.tempo);
        }
        int newBeat = (int)(currentPositionInfo.ppqPosition*currentPositionInfo.timeSigNumerator);
        if(dawInfo.beat != newBeat){
            dawInfo.beat = newBeat;
            pd->sendFloat("pulp_beat",dawInfo.beat);
//            DBG("ppq " << dawInfo.beat );;
        }
    }
}

//==============================================================================
bool PdAudioProcessor::hasEditor() const
{
    return true; // (change this to false if you choose to not supply an editor)
}

AudioProcessorEditor* PdAudioProcessor::createEditor()
{
    return new MainComponent(*this);
}

//==============================================================================
void PdAudioProcessor::getStateInformation (MemoryBlock& destData)
{
    // You should use this method to store your parameters in the memory block.
    // You could do that either as raw data, or use the XML or ValueTree classes
    // as intermediaries to make it easy to save and load complex data.
    
    // STORE / SAVE
    
    XmlElement xml(getName().replace(" ", "-"));

    
    // parameters
    XmlElement* parameterListElement = new XmlElement("parameterList");
    
    for(size_t i = 0; i < pdParameters.size(); ++i) {
        
        XmlElement* parameterElement = new XmlElement("parameter");
        pdParameters[i]->serialize(parameterElement);
        parameterListElement->addChildElement(parameterElement);
    }
    xml.addChildElement(parameterListElement);
    
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
    
    if(canRestore){
    ScopedPointer<XmlElement> xml(getXmlFromBinary(data, sizeInBytes));
    if(xml != 0 && xml->hasTagName(getName().replace(" ", "-"))) {
        
        MemoryOutputStream stream;
        xml->writeToStream(stream, "<?xml version=\"1.0\"?>");

        forEachXmlChildElement (*xml, child)
        {
            DBG(" - load : " << child->getTagName() );;

            if(child->hasTagName("parameterList")) {
                
                forEachXmlChildElement (*child, parameterElement) {

                    // TODO : change index based retrieval
                    // no need atm because of pd patches are bound in the begining
                    int index = parameterElement->getIntAttribute("index");
                    if(index<pdParameters.size()){
                        DBG("loading param " << parameterElement->getStringAttribute("name"));
                       PdParameter* p = pdParameters.getUnchecked(index);
                        p->deSerialize(parameterElement);
                        
                        setParameter(p->getParameterIndex(), (float) p->getValue());
                        
                    }
                    else{
                        DBG("DAW saved old Parameter" );;
                    }
                    
                    
                }
            }
        }
    }
    }
}

void PdAudioProcessor::reloadPdPatch (double sampleRate)
{
    DBG("reloading Patch" );
    
    if (sampleRate) {
        cachedSampleRate = sampleRate;
    } else {
        sampleRate = cachedSampleRate;
    }
    
    if (pd) {
//        pd->computeAudio(false);
        pd->closePatch(patch);
    }
    else{
        
        pd = new pd::PdBase;
    }
    pd->setReceiver(this);
    pd->setMidiReceiver(this);
    pd->init (getNumInputChannels(), getNumOutputChannels(), sampleRate,false);
    
    
    int numChannels = jmin (getNumInputChannels(), getNumOutputChannels());
    pdInBuffer.calloc (pd->blockSize() * numChannels);
    pdOutBuffer.calloc (pd->blockSize() * numChannels);
    
    
    if (!patchfile.exists()) {
        
        if (patchfile.getFullPathName().toStdString() != "") {
            status = "File does not exist";
        }
        
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




void PdAudioProcessor::setPatchFile(File file)
{
    patchfile = file;
}

File PdAudioProcessor::getPatchFile()
{
    return patchfile;
}

//==============================================================================
// This creates new instances of the plugin..
AudioProcessor* JUCE_CALLTYPE createPluginFilter()
{
    return new PdAudioProcessor();
}
