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
    PdToggle(PulpParameterDesc * p,PdAudioProcessor * proc):PdComponent(p,proc){
        ToggleButton * tb = new ToggleButton();
        addAndMakeVisible(component = tb);
        setSize (100, 130);
        getToggle()->addListener(this);

    }
    ~PdToggle(){};
    
    
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
