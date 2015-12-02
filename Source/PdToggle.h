//
//  PdSlider.h
//  Pd Pulp
//
//  Created by martin hermant on 14/10/15.
//
//

#ifndef __Pd_Pulp__PdSlider__
#define __Pd_Pulp__PdSlider__

#include "PdComponent.h"

class PdToggle : public PdComponent,public Button::Listener{
public:
    PdToggle(PdParameter * p,bool bang):PdComponent(p),isBang(bang){
        ToggleButton * tb = new ToggleButton();
        component = tb;
        addAndMakeVisible(component);
        setSize (100, 130);
        getToggle()->addListener(this);
        if(isBang){
            fTime = new flashTimer(this);
        }
        
    }
    ~PdToggle(){
//        DBG("destroyToggle");
    };
    
    
    void setValue(float f,NotificationType n) override{
    getToggle()->setToggleState(f>0, n);
    
}
void setValueFromGUI(float v) override{
PdComponent::setValueFromGUI(v);
if(isBang && v>0){
    fTime->startTimer(200);
}
}

ToggleButton* getToggle(){return (ToggleButton*) component.get();}
void buttonClicked (Button* b){
    if (b == getToggle())
        setValueFromGUI(b->getToggleState());
};
bool isBang;
class flashTimer:public Timer{
public:
    flashTimer(PdToggle * t):toggle(t){
        
    };
    void timerCallback()override {
        if(toggle)toggle->setValue(0, dontSendNotification);
    }
    PdToggle * toggle;
};
ScopedPointer<flashTimer>  fTime;
};

#endif /* defined(__Pd_Pulp__PdSlider__) */
