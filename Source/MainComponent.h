

#ifndef __JUCE_HEADER_9002020A4DD09B20__
#define __JUCE_HEADER_9002020A4DD09B20__


#include "JuceHeader.h"
#include "PdAudioProcessor.h"
#include "PdAudioProcessorEditor.h"
#include "LookNfeel.h"
#include "TUIO/TuioClient.h"




class MainComponent  : public AudioProcessorEditor,
                       public Timer,
                       public ButtonListener

{
public:

    MainComponent (PdAudioProcessor& processor);
    ~MainComponent();



    void paint (Graphics& g);
    void resized();
    void buttonClicked (Button* buttonThatWasClicked);

    

private:

    void timerCallback();
    TUIO::TuioClient TUIOClient;

    PdAudioProcessorEditor pdEditor;
    ScopedPointer<TextButton> findButton;
    ScopedPointer<Label> pathField;
    ScopedPointer<TextButton> reloadButton;
    ScopedPointer<TextButton> editButton;
    ScopedPointer<Label> statusField;
    ScopedPointer<Label> label;
    ScopedPointer<Label> label2;

    ScopedPointer<LookNFeel> lookNFeel;
    
    ScopedPointer<ResizableCornerComponent> resizer;
    ComponentBoundsConstrainer resizeLimits;

    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainComponent)
};


#endif   // __JUCE_HEADER_9002020A4DD09B20__
