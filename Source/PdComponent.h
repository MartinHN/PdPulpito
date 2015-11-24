

#ifndef __JUCE_HEADER_E639DC74856C933A__
#define __JUCE_HEADER_E639DC74856C933A__


#include "JuceHeader.h"
#include "PdAudioProcessor.h"
#include "PdParamGetter.h"




class PdComponent  : public Component,public Timer
{
public:
    //==============================================================================
    PdComponent (PulpParameterDesc * p,PdAudioProcessor * processor);
    ~PdComponent();
    
    
    void paint (Graphics& g);
    void resized();
    virtual void resizeComponent() {};
    void setName(const String&  s) override;
    void setBackColour(Colour b){
        *backColour = b;
    };
    void setLabelVisible(bool v);
    virtual void setValue(float v,NotificationType notif) {};
    
    
    ScopedPointer<Colour> backColour;
    Point<float> labelRelPos;
    float labelSize = 15;
    PdParameter * getPdParameter(){return dynamic_cast<PdParameter*> (processor->getParameters()[paramDesc->processorIdx]);};
    void setValueFromGUI(float v);

protected:

    int index;
    PdAudioProcessor* processor;
    PulpParameterDesc *paramDesc;

    
    //==============================================================================
    ScopedPointer<Component> component;
    ScopedPointer<Label> label;
    
    void timerCallback();
    
    
    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (PdComponent)
};


#endif   // __JUCE_HEADER_E639DC74856C943A__
