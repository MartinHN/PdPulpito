

#include "PdAudioProcessorEditor.h"


PdAudioProcessorEditor::PdAudioProcessorEditor (PdAudioProcessor& p)
: AudioProcessorEditor (p)

{

    setVisible(true);
    p.addChangeListener(this);
    showedCanvas = -1;
    
    
}


PdAudioProcessorEditor::~PdAudioProcessorEditor()
{
    PdAudioProcessor * p = (PdAudioProcessor*)&processor;
    p->removeChangeListener(this);
    
}



void PdAudioProcessorEditor::buildCanvas(){
    PdCanvas.clear();
    int num = (dynamic_cast<PdParamGetter*>(&processor))->getNumGUI();
    for(int i = 0; i < num;i++){
        PdCanvas.add(new PdGUICanvas(&processor,i));
    }
    for(auto & c:PdCanvas){
        addChildComponent(c);
    }
    setCanvasVisible(0);
}


void PdAudioProcessorEditor::setCanvasVisible(int idx){
    if(idx>=PdCanvas.size())return;
    for(auto & c:PdCanvas){
        c->setVisible(false);
    }
    PdCanvas[idx]->setVisible(true);
    
    showedCanvas = idx;
    setSize(PdCanvas[idx]->getWidth(),PdCanvas[idx]->getHeight());
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
        buildCanvas();
        updatePatch();
        p->updateProcessorParameters();
        repaint();
    }
}


void PdAudioProcessorEditor::rebuildGUIParams(PdAudioProcessor * p){
    for(auto &cnv:PdCanvas){
        cnv->rebuildGUIParams(p);
    }
}


