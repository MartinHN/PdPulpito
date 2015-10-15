

#ifndef __JUCE_HEADER_DFA254F056F7859__
#define __JUCE_HEADER_DFA254F056F7859__


#include "JuceHeader.h"
#include "PdAudioProcessor.h"


#include "SendSlider.h"
#include "SendToggle.h"
#include "PdParamGetter.h"

class PdAudioProcessorEditor  : public AudioProcessorEditor
{
public:

    PdAudioProcessorEditor (PureDataAudioProcessor& p);
    ~PdAudioProcessorEditor();


    void updatePatch ();
    void rebuildGUIParams(PureDataAudioProcessor * p);


    void paint (Graphics& g);
    void resized();

    Rectangle<int> headerRect;

private:


    OwnedArray<Component>juce_Components;
    

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (PdAudioProcessorEditor)
};

#endif   // __JUCE_HEADER_DFA254F056F7859__
