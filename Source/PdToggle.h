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
    PdToggle(PdParameter * p):PdComponent(p){
        ToggleButton * tb = new ToggleButton();
        component = tb;
        addAndMakeVisible(component);
        setSize (100, 130);
        getToggle()->addListener(this);

    }
    ~PdToggle(){
        DBG("destroyToggle");
    };
    
    
    void setValue(float f,NotificationType n) override{
        getToggle()->setToggleState(f>0, n);
    }
    
    ToggleButton* getToggle(){return (ToggleButton*) component.get();}
    void buttonClicked (Button* b){
        if (b == getToggle())
            setValueFromGUI(b->getToggleState());
    };
};

#endif /* defined(__Pd_Pulp__PdSlider__) */
