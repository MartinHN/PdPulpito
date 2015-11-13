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

#include "SendSlider.h"
#include "SendToggle.h"
#include "PdAudioProcessor.h"

class PdGUICanvas : public AudioProcessorEditor{
public:
    
    
    PdGUICanvas(AudioProcessor * pin ,int guiNum):AudioProcessorEditor(pin),guiNum(guiNum){

    };
    
    
    
    void rebuildGUIParams(AudioProcessor * pin){
        
        for(auto & c:juce_Components){
            removeChildComponent(c);
        }
        juce_Components.clear();
        
        setBounds(paramGetter()->getBoundOfGui(guiNum));
        
        PdAudioProcessor* p = (PdAudioProcessor*)pin;
        
        int startidx = paramGetter()->getProcessorStartIdxForGUI(guiNum);
        int endIdx = startidx + paramGetter()->getNumParamforGUI(guiNum);
        for(int i= startidx ; i < endIdx ; i++){
            PdParamGetter::PulpParameterDesc * param = paramGetter()->getDescForIdx(i);
            LabelComponent *c=nullptr;
            
            
            if(param->type == PdParamGetter::PulpParameterDesc::KNOB ){
                c =new SendSlider(param->processorIdx,*p,SendSlider::ROTARY);
                ((SendSlider*)c)->setRange(param->min, param->max);
                addAndMakeVisible(c);
                ((SendSlider*)c)->getSlider()->setColour(Slider::rotarySliderFillColourId,param->mainColour);
//                ((SendSlider*)c)->getSlider()->setColour(Slider::rotarySliderOutlineColourId,param->backColour);
                ((SendSlider*)c)->lookAndFeelChanged();
                
            }
            else if ( param->type == PdParamGetter::PulpParameterDesc::VSL ){
                c =new SendSlider(param->processorIdx,*p,SendSlider::VSL);
                ((SendSlider*)c)->setRange(param->min, param->max);
                ((SendSlider*)c)->getSlider()->setColour(Slider::trackColourId, param->backColour);
                ((SendSlider*)c)->getSlider()->setColour(Slider::thumbColourId, param->mainColour);
                addAndMakeVisible(c);
                ((SendSlider*)c)->lookAndFeelChanged();
                
            }
            else if(  param->type == PdParamGetter::PulpParameterDesc::HSL ){
                c =new SendSlider(param->processorIdx,*p,SendSlider::HSL);
                ((SendSlider*)c)->setRange(param->min, param->max);
                ((SendSlider*)c)->getSlider()->setColour(Slider::trackColourId, param->backColour);
                ((SendSlider*)c)->getSlider()->setColour(Slider::thumbColourId, param->mainColour);
                addAndMakeVisible(c);
                ((SendSlider*)c)->lookAndFeelChanged();
                
            }
            else if( param->type == PdParamGetter::PulpParameterDesc::NUMBOX ){
                c =new SendSlider(param->processorIdx,*p,SendSlider::ROTARY);
                ((SendSlider*)c)->setRange(param->min, param->max);
                ((SendSlider*)c)->getSlider()->setColour(Slider::trackColourId, param->backColour);
                ((SendSlider*)c)->getSlider()->setColour(Slider::thumbColourId, param->mainColour);
                addAndMakeVisible(c);
                ((SendSlider*)c)->lookAndFeelChanged();
            }
            else if(param->type == PdParamGetter::PulpParameterDesc::TOGGLE){
                c =new SendToggle(param->processorIdx,*p);
                addAndMakeVisible(c);
                ((SendToggle*)c)->lookAndFeelChanged();
                
            }
            else if(param->type == PdParamGetter::PulpParameterDesc::CNV){
                c =new LabelComponent(param->processorIdx,*p);
                c->setBackColour(param->backColour);

                addAndMakeVisible(c);
                ((LabelComponent*)c)->lookAndFeelChanged();
                
            }
            if(c!=nullptr){
                
                c->labelSize = param->labelSize;
                
                c->setName(param->labelName);
                p->setParameterName(param->processorIdx, param->name);
                juce_Components.add(c);
                
                c->setBounds (
                              getWidth() * param->getX(),
                              getHeight()* param->getY(),
                              getWidth() * param->getWidth() ,
                              getHeight()* param->getHeight()
                              );
                
               
            }
            else{
                DBG( "no viable parameters for "<<param->name);;;
                
            }
        }
        resized();
 
    }
    
    
    
    
    
    
    void resized(){

        
        if(juce_Components.size()==0){
            return;
        }
        
        int idx = paramGetter()->getProcessorStartIdxForGUI(guiNum);
        for(int i= idx ; i < paramGetter()->getNumParamforGUI(guiNum) ; i++){
            PdParamGetter::PulpParameterDesc * param = paramGetter()->getDescForIdx(idx);
            LabelComponent * c = ((LabelComponent*)juce_Components[idx]);
            if(c!=nullptr){
                c->labelRelPos.setXY( getWidth() * param->labelRect.getX() ,
                                      getHeight()*(param->labelRect.getY()) - 4
                                     );
                c->setBounds (
                              getWidth() * param->getX() ,
                              getHeight()* param->getY(),
                              getWidth() * param->getWidth() ,
                              getHeight()* param->getHeight()
                              )
                ;
                c->LabelComponent::resized();
                
                
                //        DBG( " resizing UI : " << c->getName() <<  " : " <<
                //            ((SendSlider*)c)->labelRelPos.toString() << " / "
                //            << c->getBounds().toString() );;
            }
            idx++;
        }
    }
    
    
    int guiNum =-1;
    OwnedArray<Component> juce_Components;
    PdParamGetter * paramGetter(){
        return dynamic_cast<PdParamGetter*>(&processor);
    }
    
    
    
    
    
    
};
#endif /* defined(__PdPulpito__PdGUICanvas__) */
