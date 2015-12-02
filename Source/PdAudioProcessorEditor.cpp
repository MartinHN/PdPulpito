

#include "PdAudioProcessorEditor.h"


PdAudioProcessorEditor::PdAudioProcessorEditor (PdAudioProcessor& p)
: AudioProcessorEditor (p)

{

    setVisible(true);
    p.addChangeListener(this);
    showedCanvas = -1;
    pdProcessor = &p;
}


PdAudioProcessorEditor::~PdAudioProcessorEditor()
{
    PdAudioProcessor * p = (PdAudioProcessor*)&processor;
    p->removeChangeListener(this);
    
}



void PdAudioProcessorEditor::buildCanvas(){
    pdCanvas.clear();
    int num = (dynamic_cast<PdParamGetter*>(&processor))->getNumGUI();
    for(int i = 0; i < num;i++){
        pdCanvas.add(new PdGUICanvas(getPdProcessor(),i));
    }
    for(auto & c:pdCanvas){
        addChildComponent(c);
    }
    setCanvasVisible(0);
}


void PdAudioProcessorEditor::setCanvasVisible(int idx){
    if(idx>=pdCanvas.size())return;
    for(auto & c:pdCanvas){
        c->setVisible(false);
    }
    pdCanvas[idx]->setVisible(true);
    
    showedCanvas = idx;
    setSize(pdCanvas[idx]->getWidth(),pdCanvas[idx]->getHeight());
    DBG2(pdCanvas[idx]->getWidth(),pdCanvas[idx]->getHeight());
    getParentComponent()->setBounds(getBounds().getUnion(getParentComponent()->getBounds()));
}

void PdAudioProcessorEditor::paint (Graphics& g)
{
//    g.fillAll (Colours::grey);
}

void PdAudioProcessorEditor::resized()
{
    
    AudioProcessorEditor::resized();
    setCanvasVisible(0);
    
}


void PdAudioProcessorEditor::updatePatch (){
    PdAudioProcessor* p =  (PdAudioProcessor*)&processor;
    
    if(p!=NULL && p->patchfile.exists()){
        p->updateProcessorParameters();
        rebuildGUIParams(p);
        PdAudioProcessorEditor::resized();
        repaint();
    }
    
}

void PdAudioProcessorEditor::changeListenerCallback (ChangeBroadcaster* source){
    PdAudioProcessor* p=dynamic_cast<PdAudioProcessor*>(source);
    if( p){
        isLoaded = false;
        buildCanvas();
        updatePatch();
        p->updateProcessorParameters();
        getParentComponent()->resized();
        repaint();
        isLoaded = true;
    }
}


void PdAudioProcessorEditor::rebuildGUIParams(PdAudioProcessor * p){
    for(auto &cnv:pdCanvas){
        cnv->rebuildGUIParams(p);
    }
}


