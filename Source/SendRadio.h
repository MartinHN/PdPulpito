//
//  SendRadio.h
//  PdPulpito
//
//  Created by martin hermant on 23/11/15.
//
//

#ifndef PdPulpito_SendRadio_h
#define PdPulpito_SendRadio_h

#include "LabelComponent.h"

class SendRadio : public LabelComponent,public Button::Listener{
public:
    
    enum Orientation{
        VERTICAL,
        HORIZONTAL
    };
    
    SendRadio(int index,AudioProcessor & p,int size,Orientation o):LabelComponent(index,p){
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
    ~SendRadio(){};
    
    
    ToggleButton* getToggle(int num){return (ToggleButton*) component.get();}
    void buttonClicked (Button* b){
        if(b->getToggleState()){
        int num = component->getIndexOfChildComponent(b);
        if (num>=0)
            processor.setParameterNotifyingHost(index, num);
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
    
    
    Orientation orientation;
    
    
};


#endif
