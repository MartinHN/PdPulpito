//
//  PdGUICanvas.h
//  PdPulpito
//
//  Created by martin hermant on 12/11/15.
//
//

#ifndef __PdPulpito__PdGUICanvas__
#define __PdPulpito__PdGUICanvas__

#include <iostream>
#include "JuceHeader.h"
#include "PdParamGetter.h"

#include "PdToggle.h"
#include "PdSlider.h"
#include "PdRadio.h"
#include "PdAudioProcessor.h"

class PdGUICanvas : public AudioProcessorEditor{
public:
    
    
    PdGUICanvas(PdAudioProcessor * pin ,int guiNum):AudioProcessorEditor(pin),guiNum(guiNum){

    };
    
    
    
    void rebuildGUIParams(AudioProcessor * pin){
        
        for(auto & c:pdComponents){
            removeChildComponent(c);
        }
        pdComponents.clear();
        
        setBounds(paramGetter()->getBoundOfGui(guiNum));
        
        PdAudioProcessor* p = dynamic_cast<PdAudioProcessor*>(pin);

        
        int startidx = paramGetter()->getProcessorStartIdxForGUI(guiNum);
        int endIdx = startidx + paramGetter()->getNumObjectsForGUI(guiNum);
        for(int i= startidx ; i < endIdx ; i++){
            PulpParameterDesc * param = paramGetter()->getObjectForIdx(i);
            PdComponent *c=nullptr;
            
            
            if(param->type == PulpParameterDesc::KNOB ){
                c =new PdSlider(param,p,PdSlider::ROTARY);
                ((PdSlider*)c)->setRange(param->min, param->max);
                addAndMakeVisible(c);
                ((PdSlider*)c)->getSlider()->setColour(Slider::rotarySliderFillColourId,param->mainColour);
//                ((PdSlider*)c)->getSlider()->setColour(Slider::rotarySliderOutlineColourId,param->backColour);
                ((PdSlider*)c)->lookAndFeelChanged();
                
            }
            else if ( param->type == PulpParameterDesc::VSL ){
                c =new PdSlider(param,p,PdSlider::VSL);
                ((PdSlider*)c)->setRange(param->min, param->max);
                ((PdSlider*)c)->getSlider()->setColour(Slider::trackColourId, param->backColour);
                ((PdSlider*)c)->getSlider()->setColour(Slider::thumbColourId, param->mainColour);
                addAndMakeVisible(c);
                ((PdSlider*)c)->lookAndFeelChanged();
                
            }
            else if(  param->type == PulpParameterDesc::HSL ){
                c =new PdSlider(param,p,PdSlider::HSL);
                ((PdSlider*)c)->setRange(param->min, param->max);
                ((PdSlider*)c)->getSlider()->setColour(Slider::trackColourId, param->backColour);
                ((PdSlider*)c)->getSlider()->setColour(Slider::thumbColourId, param->mainColour);
                addAndMakeVisible(c);
                ((PdSlider*)c)->lookAndFeelChanged();
                
            }
            else if( param->type == PulpParameterDesc::NUMBOX ){
                c =new PdSlider(param,p,PdSlider::ROTARY);
                ((PdSlider*)c)->setRange(param->min, param->max);
                ((PdSlider*)c)->getSlider()->setColour(Slider::trackColourId, param->backColour);
                ((PdSlider*)c)->getSlider()->setColour(Slider::thumbColourId, param->mainColour);
                addAndMakeVisible(c);
                ((PdSlider*)c)->lookAndFeelChanged();
            }
            else if(param->type == PulpParameterDesc::TOGGLE || param->type ==PulpParameterDesc::BANG){
                c =new PdToggle(param,p);
                addAndMakeVisible(c);
                ((PdSlider*)c)->lookAndFeelChanged();
                
            }
            else if( param->type == PulpParameterDesc::VRADIO ){
                c =new PdRadio(param,p,param->elements.size(),PdRadio::VERTICAL);
                addAndMakeVisible(c);
                ((PdSlider*)c)->lookAndFeelChanged();
                
            }
            else if( param->type == PulpParameterDesc::HRADIO ){
                c =new PdRadio(param,p,param->elements.size(),PdRadio::HORIZONTAL);
                addAndMakeVisible(c);
                ((PdSlider*)c)->lookAndFeelChanged();
                
            }
            else if(param->type == PulpParameterDesc::CNV){
                c =new PdComponent(param,p);
                c->setBackColour(param->backColour);

                addAndMakeVisible(c);
                ((PdComponent*)c)->lookAndFeelChanged();
                
            }
            if(c!=nullptr){
                
                c->labelSize = param->labelSize;
                
                c->setName(param->labelName);
                c->setLabelVisible(param->hasLabel);
                p->setParameterName(param->processorIdx, param->sendName);
                pdComponents.add(c);
                
                c->setBounds (
                              getWidth() * param->getX(),
                              getHeight()* param->getY(),
                              getWidth() * param->getWidth() ,
                              getHeight()* param->getHeight()
                              );
                
               
            }
            else{
                delete c;

                DBG( "no viable parameters for "<<param->sendName);
                // for now, only accept drawed component
                jassertfalse;
                
            }
        }
        resized();
 
    }
    
    
    
    
    
    
    void resized(){

        
        if(pdComponents.size()==0){
            return;
        }
        
        int idx = paramGetter()->getProcessorStartIdxForGUI(guiNum);
        for(int i= idx ; i < paramGetter()->getNumObjectsForGUI(guiNum) ; i++){
            PulpParameterDesc * param = paramGetter()->getObjectForIdx(idx);
            PdComponent * c = ((PdComponent*)pdComponents[idx]);
            if(c!=nullptr){
                c->labelRelPos.setXY( getWidth() * param->labelRect.getX() ,
                                      getHeight()*(param->labelRect.getY()) - 4
                                     );
                c->setBounds (
                              getWidth() * param->getX() ,
                              getHeight()* param->getY(),
                              getWidth() * param->getWidth() ,
                              getHeight()* param->getHeight()
                              );
                c->PdComponent::resized();
            }
            idx++;
        }
    }
    
    
    int guiNum =-1;
    OwnedArray<PdComponent> pdComponents;
    PdParamGetter * paramGetter(){
        return dynamic_cast<PdParamGetter*>(&processor);
    }
    
    
    
    
    
    
};
#endif /* defined(__PdPulpito__PdGUICanvas__) */
