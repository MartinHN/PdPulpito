

#ifndef __JUCE_HEADER_DFA254F056F7859__
#define __JUCE_HEADER_DFA254F056F7859__


#include "JuceHeader.h"
//#include "PdAudioProcessor.h"

#include "PdParamGetter.h"
#include "PdGUICanvas.h"

class PdAudioProcessorEditor  : public AudioProcessorEditor,
                                public ChangeListener
{
public:

    PdAudioProcessorEditor (PdAudioProcessor& p);
    ~PdAudioProcessorEditor();

    void buildCanvas();
    void updatePatch ();
    void rebuildGUIParams(PdAudioProcessor * p);
    void setCanvasVisible(int idx);

    void paint (Graphics& g);
    void resized();
    // if processor change sub pd patch ,rebuild graphics
    void changeListenerCallback (ChangeBroadcaster* source) override;

    

private:

    ScopedPointer<TabbedButtonBar> tabBar;
    OwnedArray<PdGUICanvas>PdCanvas;
    int showedCanvas;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (PdAudioProcessorEditor)
};

#endif   // __JUCE_HEADER_DFA254F056F7859__
