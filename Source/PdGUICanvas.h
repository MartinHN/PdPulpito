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
#include "PdPopup.h"
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

        

        for(int i = 0 ; i < p->pdParameters.size() ; i++){

            PdComponent *c=nullptr;
            PdParameter * param = p->pdParameters[i];
            
            
            if(param->getType() == PulpParameterDesc::KNOB ){
                c =new PdSlider(param,PdSlider::ROTARY);
                ((PdSlider*)c)->setRange(param->min, param->max);
                addAndMakeVisible(c);
                ((PdSlider*)c)->getSlider()->setColour(Slider::rotarySliderFillColourId,param->getDesc()->mainColour);
//                ((PdSlider*)c)->getSlider()->setColour(Slider::rotarySliderOutlineColourId,param->backColour);
                ((PdSlider*)c)->lookAndFeelChanged();
                
            }
            else if ( param->getType() == PulpParameterDesc::VSL ){
                c =new PdSlider(param,PdSlider::VSL);
                ((PdSlider*)c)->setRange(param->min, param->max);
                ((PdSlider*)c)->getSlider()->setColour(Slider::trackColourId, param->getDesc()->backColour);
                ((PdSlider*)c)->getSlider()->setColour(Slider::thumbColourId, param->getDesc()->mainColour);
                addAndMakeVisible(c);
                ((PdSlider*)c)->lookAndFeelChanged();
                
            }
            else if(  param->getType() == PulpParameterDesc::HSL ){
                c =new PdSlider(param,PdSlider::HSL);
                ((PdSlider*)c)->setRange(param->min, param->max);
                ((PdSlider*)c)->getSlider()->setColour(Slider::trackColourId, param->getDesc()->backColour);
                ((PdSlider*)c)->getSlider()->setColour(Slider::thumbColourId, param->getDesc()->mainColour);
                addAndMakeVisible(c);
                ((PdSlider*)c)->lookAndFeelChanged();
                
            }
            else if( param->getType() == PulpParameterDesc::NUMBOX ){
                c =new PdSlider(param,PdSlider::ROTARY);
                ((PdSlider*)c)->setRange(param->min, param->max);
                ((PdSlider*)c)->getSlider()->setColour(Slider::trackColourId, param->getDesc()->backColour);
                ((PdSlider*)c)->getSlider()->setColour(Slider::thumbColourId, param->getDesc()->mainColour);
                addAndMakeVisible(c);
                ((PdSlider*)c)->lookAndFeelChanged();
            }
            else if(param->getType() == PulpParameterDesc::TOGGLE || param->getType() ==PulpParameterDesc::BANG){
                c =new PdToggle(param,param->getType() ==PulpParameterDesc::BANG);
                addAndMakeVisible(c);
                ((PdSlider*)c)->lookAndFeelChanged();
                
            }
            else if( param->getType() == PulpParameterDesc::VRADIO ){
                c =new PdRadio(param,param->getDesc()->elements.size(),PdRadio::VERTICAL);
                addAndMakeVisible(c);
                ((PdSlider*)c)->lookAndFeelChanged();
                
            }
            else if( param->getType() == PulpParameterDesc::HRADIO ){
                c =new PdRadio(param,param->getDesc()->elements.size(),PdRadio::HORIZONTAL);
                addAndMakeVisible(c);
                ((PdSlider*)c)->lookAndFeelChanged();
                
            }
            else if(param->getType() == PulpParameterDesc::CNV){
                c =new PdComponent(param);
                c->setBackColour(param->getDesc()->backColour);

                addAndMakeVisible(c);
                ((PdComponent*)c)->lookAndFeelChanged();
                
            }
            else if(param->getType() == PulpParameterDesc::POPUP){
                c =new PdPopup(param);
                c->setBackColour(param->getDesc()->backColour);
                addAndMakeVisible(c);
                ((PdComponent*)c)->lookAndFeelChanged();
                
            }
            
            
            
            if(c!=nullptr){
                c->setValue(param->getValue(), dontSendNotification);
                c->labelSize = param->getDesc()->labelSize;
                
                c->setName(param->getDesc()->labelName);
                c->setLabelVisible(param->getDesc()->hasLabel);
                p->setParameterName(i, param->getDesc()->sendName);
                pdComponents.add(c);
                
                c->setBounds (
                              getWidth() * param->getDesc()->getX(),
                              getHeight()* param->getDesc()->getY(),
                              getWidth() * param->getDesc()->getWidth() ,
                              getHeight()* param->getDesc()->getHeight()
                              );
                
               
            }
            else{
                delete c;

                DBG( "no viable parameters for "<<param->getDesc()->sendName);
                // only accept drawable component
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
