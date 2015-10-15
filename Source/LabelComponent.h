

#ifndef __JUCE_HEADER_E639DC74856C933A__
#define __JUCE_HEADER_E639DC74856C933A__


#include "JuceHeader.h"



class LabelComponent  : public Component,
public LabelListener
{
public:
    //==============================================================================
    LabelComponent (int index, AudioProcessor& processor);
    ~LabelComponent();
    
    
    void paint (Graphics& g);
    void resized();
    virtual void resizeComponent() {};
    void setName(const String&  s) override{
    Component::setName(s);
    label->setText(s, dontSendNotification);
    };
    

    void labelTextChanged (Label* labelThatHasChanged);
    
    
    
    Point<float> labelRelPos;
    float labelSize = 15;
protected:

    int index;
    AudioProcessor& processor;

    
    //==============================================================================
    ScopedPointer<Component> component;
    ScopedPointer<Label> label;
    
    
    
    
    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (LabelComponent)
};


#endif   // __JUCE_HEADER_E639DC74856C943A__
