//
//  SendToggle.h
//  Pd Pulp
//
//  Created by martin hermant on 14/10/15.
//
//

#ifndef __Pd_Pulp__SendToggle__
#define __Pd_Pulp__SendToggle__

#include "LabelComponent.h"

class SendToggle : public LabelComponent,public Button::Listener{
public:
    SendToggle(int index,PdAudioProcessor & p):LabelComponent(index,p){
        ToggleButton * tb = new ToggleButton();
        addAndMakeVisible(component = tb);
        setSize (100, 130);
        getToggle()->addListener(this);

    }
    ~SendToggle(){};
    ToggleButton* getToggle(){return (ToggleButton*) component.get();}
    void buttonClicked (Button* b){
        if (b == getToggle())
            processor.juce::AudioProcessor::setParameterNotifyingHost(index, b->getToggleState());
    };
};

#endif /* defined(__Pd_Pulp__SendToggle__) */
