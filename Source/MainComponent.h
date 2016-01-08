

#ifndef __JUCE_HEADER_9002020A4DD09B20__
#define __JUCE_HEADER_9002020A4DD09B20__


#include "JuceHeader.h"
#include "PdAudioProcessor.h"
#include "PdAudioProcessorEditor.h"
#include "LookNfeel.h"
#include "TUIO/TuioClient.h"
#include "TUIO/TuioListener.h"
#include "TUIO/TUIOComponent.h"
#include "PulpConfigUI.h"

using namespace TUIO;

class MainComponent  : public AudioProcessorEditor,

                    public TUIOComponent,
                    public KeyListener,
                    public ChangeListener,
                    public ChangeBroadcaster

{
public:

    MainComponent (PdAudioProcessor& processor);
    ~MainComponent();



    void paint (Graphics& g);
    void resized();
    bool keyPressed (const KeyPress& key,
                     Component* originatingComponent) ;
    void ToggleConfigVisibility(bool config,bool console);
    void changeListenerCallback (ChangeBroadcaster* source);
    void    addPdLog(std::string  message);
    std::string log;

    
//    class LogTimer : public Timer{
//        void timerCallback();
//    };
//    LogTimer logTimer;
private:

    friend PdAudioProcessor;
    
    
    PulpConfigUI pulpConfigUI;
    PdAudioProcessorEditor pdEditor;
    TextEditor pulpConsole;
    Font consoleFont;


    ScopedPointer<LookNFeel> lookNFeel;
    
//    ScopedPointer<ResizableCornerComponent> resizer;
//    ComponentBoundsConstrainer resizeLimits;

    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainComponent)
};


#endif   // __JUCE_HEADER_9002020A4DD09B20__
