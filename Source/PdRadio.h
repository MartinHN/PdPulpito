//
//  PdRadio.h
//  PdPulpito
//
//  Created by martin hermant on 23/11/15.
//
//

#ifndef PdPulpito_PdRadio_h
#define PdPulpito_PdRadio_h

#include "PdComponent.h"

class PdRadio : public PdComponent,public Button::Listener{
public:
    
    enum Orientation{
        VERTICAL,
        HORIZONTAL
    };
    
    PdRadio(PulpParameterDesc * p,PdAudioProcessor * proc,int size,Orientation o):PdComponent(p,proc){
        component = new Component;
        addAndMakeVisible(component);
        static int radioGroupId = 0;
        radioGroupId++;
        for(int i = 0 ; i < size ; i++){
            ToggleButton * tb = new ToggleButton(String(i));
            component->addAndMakeVisible(tb);
            setSize (100, 130);
            tb->addListener(this);
            tb->setRadioGroupId (radioGroupId, dontSendNotification);
        }
        orientation = o;
    }
    ~PdRadio(){};
    
    
    ToggleButton* getToggle(int num){return (ToggleButton*) component->getChildComponent(num);}
    void buttonClicked (Button* b){
        if(b->getToggleState()){
            int num = component->getIndexOfChildComponent(b);
            if (num>=0)
                setValueFromGUI(num);//processor.AudioProcessor::setParameterNotifyingHost(index, num);
        }
    };
    
    void resizeComponent(){
        int num = component->getNumChildComponents();
        Point<float> step (orientation==VERTICAL?0:getWidth()/num,
                           orientation==HORIZONTAL?0:getHeight()/num);
        
        Point<float> curP (0,0);
        for(int i = 0 ; i <num ; i++){
            component->getChildComponent(i)->setBounds(curP.x, curP.y, orientation==HORIZONTAL?step.x:getWidth(), orientation==VERTICAL?step.y:getHeight());
            curP+=step;
            
        }
        
    };
    
    
    void setValue(float v, NotificationType notif) override{
    if(v < getNumChildComponents()){
        getToggle((int)v )->setToggleState(true, notif);
    }
}

Orientation orientation;


};


#endif
