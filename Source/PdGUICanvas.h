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
        
        setBounds(paramGetter()->patchRect);
        int idx = paramGetter()->getProcessorStartIdxForGUI(guiNum);
        PdAudioProcessor* p = (PdAudioProcessor*)pin;
        
        Array<PdParamGetter::PulpParameterDesc> descs = paramGetter()->getDescForGui(guiNum);
        for(auto & param:descs){
            LabelComponent *c=nullptr;
            
            
            if(param.type == PdParamGetter::PulpParameterDesc::KNOB ){
                c =new SendSlider(param.processorIdx,*p,SendSlider::ROTARY);
                ((SendSlider*)c)->setRange(param.min, param.max);
                
            }
            else if ( param.type == PdParamGetter::PulpParameterDesc::VSL ){
                c =new SendSlider(param.processorIdx,*p,SendSlider::VSL);
                ((SendSlider*)c)->setRange(param.min, param.max);
                
            }
            else if(  param.type == PdParamGetter::PulpParameterDesc::HSL ){
                c =new SendSlider(param.processorIdx,*p,SendSlider::HSL);
                ((SendSlider*)c)->setRange(param.min, param.max);
                
            }
            else if( param.type == PdParamGetter::PulpParameterDesc::NUMBOX ){
                c =new SendSlider(param.processorIdx,*p,SendSlider::ROTARY);
                ((SendSlider*)c)->setRange(param.min, param.max);
            }
            else if(param.type == PdParamGetter::PulpParameterDesc::TOGGLE){
                c =new SendToggle(param.processorIdx,*p);
                
            }
            if(c!=nullptr){
                
                c->labelSize = param.labelSize;
                c->setName(param.labelName);
                p->setParameterName(param.processorIdx, param.name);
                juce_Components.add(c);
                Rectangle<int> area = paramGetter()->patchRect;
                c->setBounds (
                              getWidth() * param.getX(),
                              getHeight()* param.getY(),
                              getWidth() * param.getWidth() ,
                              getHeight()* param.getHeight()
                              );
                
                idx++;
            }
            else{
                DBG( "no viable parameters for "<<param.name);;;
                
            }
        }
        
        for(auto & c:juce_Components){
            
            addAndMakeVisible(c);
        }
    }
    
    
    
    
    
    
    void resized(){

        
        if(juce_Components.size()==0){
            return;
        }
        
        Array<PdParamGetter::PulpParameterDesc> descs = paramGetter()->getDescForGui(guiNum);
        int idx =0;
        for(auto & param:descs){
            Rectangle<float> b = param;
            LabelComponent * c = ((LabelComponent*)juce_Components[idx]);
            if(c!=nullptr){
                c->labelRelPos.setXY( getWidth() * param.labelRect.getX() ,
                                      getHeight() *param.labelRect.getY()
                                     );
                c->setBounds (
                              getWidth() * b.getX() ,
                              getHeight()* b.getY(),
                              getWidth() * b.getWidth() ,
                              getHeight()* b.getHeight()
                              )
                ;
                
                
                
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
        return (PdParamGetter*)&processor;
    }
    
    
    
    
    
    
};
#endif /* defined(__PdPulpito__PdGUICanvas__) */
