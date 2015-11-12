

#include "PdAudioProcessorEditor.h"


PdAudioProcessorEditor::PdAudioProcessorEditor (PdAudioProcessor& p)
: AudioProcessorEditor (p)

{

    setVisible(true);
    p.addChangeListener(this);
    showedCanvas = -1;
    
    
}


void PdAudioProcessorEditor::build(){
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
PdAudioProcessorEditor::~PdAudioProcessorEditor()
{
    PdAudioProcessor * p = (PdAudioProcessor*)&processor;
    p->removeChangeListener(this);
    
}

void PdAudioProcessorEditor::setCanvasVisible(int idx){
    if(idx>=PdCanvas.size())return;
    for(auto & c:PdCanvas){
        c->setVisible(false);
    }
    PdCanvas[idx]->setVisible(true);
    
    showedCanvas = idx;
}

void PdAudioProcessorEditor::paint (Graphics& g)
{
//    g.fillAll (Colours::white);
}

void PdAudioProcessorEditor::resized()
{
    
    AudioProcessorEditor::resized();
    
    PdAudioProcessor * p = (PdAudioProcessor*)&processor;
    int idx = 0;
//    DBG( "resizing GUI " << juce_Components.size());
    
    
    Rectangle<int> area = p->patchRect;
//    DBG("patch" << area.toString());
    
    setCanvasVisible(0);
    
}


void PdAudioProcessorEditor::updatePatch (){
    PdAudioProcessor* p =  (PdAudioProcessor*)&processor;
    
    if(p!=NULL && p->patchfile.exists()){
        
        // set size
        p->patchRect.setY(headerRect.getBottom());
        Rectangle<int> total = p->patchRect.getUnion(headerRect);
        setSize (total.getWidth(),total.getHeight());
        DBG( "size : " << total.toString()<<" / " <<p->patchRect.toString() );
        
        
        p->updateProcessorParameters();
        
        rebuildGUIParams(p);
        
        
        PdAudioProcessorEditor::resized();
        repaint();
    }
    
}

void PdAudioProcessorEditor::changeListenerCallback (ChangeBroadcaster* source){
    PdAudioProcessor* p=dynamic_cast<PdAudioProcessor*>(source);
    if( p){
        updatePatch();
        p->updateProcessorParameters();
        repaint();
    }
}


void PdAudioProcessorEditor::rebuildGUIParams(PdAudioProcessor * p){

    
    int idx = 0;
    Rectangle<int> area = p->patchRect;
    
    
    for(auto &cnv:PdCanvas){
        cnv->rebuildGUIParams(p);
    }
    
    

    
    
}


