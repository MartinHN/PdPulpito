

#ifndef __JUCE_HEADER_E639DC74856C933A__
#define __JUCE_HEADER_E639DC74856C933A__


#include "JuceHeader.h"
#include "PdAudioProcessor.h"



class LabelComponent  : public Component
{
public:
    //==============================================================================
    LabelComponent (int index, PdAudioProcessor& processor);
    ~LabelComponent();
    
    
    void paint (Graphics& g);
    void resized();
    virtual void resizeComponent() {};
    void setName(const String&  s) override;
    void setBackColour(Colour b){
        *backColour = b;
    };
    void setLabelVisible(bool v);
    
    
    ScopedPointer<Colour> backColour;
    Point<float> labelRelPos;
    float labelSize = 15;
    PdParameter * getPdParameter(){return processor.pdParameters[index];};
protected:

    int index;
    PdAudioProcessor& processor;

    
    //==============================================================================
    ScopedPointer<Component> component;
    ScopedPointer<Label> label;
    
    
    
    
    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (LabelComponent)
};


#endif   // __JUCE_HEADER_E639DC74856C943A__
