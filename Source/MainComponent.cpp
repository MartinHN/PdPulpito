



#include "MainComponent.h"



//==============================================================================
MainComponent::MainComponent (PdAudioProcessor& processor)
:    AudioProcessorEditor(processor),
TUIOComponent(this),
pdEditor(processor),
pulpConfigUI(&processor)
{
    
    lookNFeel = new LookNFeel();
    setLookAndFeel(lookNFeel);
    addAndMakeVisible(pulpConfigUI);
    
    
//    logTimer.startTimer(300);
    
    
    
    addAndMakeVisible(pdEditor);
    pdEditor.buildCanvas();
    pdEditor.updatePatch();
    addKeyListener(this);
    
    
    pulpConsole.setReadOnly(true);
    pulpConsole.setMultiLine(true);
    pulpConsole.setScrollToShowCursor(true);
    pulpConsole.setSize(400, 500);
    consoleFont.setHeight(10);
    pulpConsole.setFont(consoleFont);
    addAndMakeVisible(pulpConsole);
    //    addAndMakeVisible (resizer = new ResizableCornerComponent (this, &resizeLimits));
    //    resizeLimits.setSizeLimits (150, 150, 1000, 1000);
    //    setSize (500, 385);
    resized();
    addChangeListener(this);
    
    
    
    
    
    
}

MainComponent::~MainComponent()
{
    
    
    
    
    
}

//==============================================================================
void MainComponent::paint (Graphics& g)
{
    
    
    g.fillAll (Colour (0xff303030));
    
}

void MainComponent::resized()
{
    int rightMostWithoutConsole = jmax(pdEditor.getWidth(),(pulpConfigUI.isVisible()?pulpConfigUI.getWidth():0));
    int width = rightMostWithoutConsole + (pulpConsole.isVisible()?pulpConsole.getWidth():0);
    
    
    
    pdEditor.setTopLeftPosition(0,    pulpConfigUI.isVisible()?pulpConfigUI.getBottom() + 10:10);
    
    
    
    pulpConsole.setBounds(rightMostWithoutConsole, 10, pulpConsole.getWidth(), getBottom());
    
    setSize(width, pdEditor.getBottom());
    //                       editButton->getRight() + 10,300);
    
    
}


void MainComponent::addPdLog(String message){
    static int maxLogSize = 300;
    DBG(message);
    log.addLines(message);
            if(log.size()>maxLogSize){
                log.removeRange(0, log.size()-maxLogSize);
            }
    ChangeBroadcaster::sendChangeMessage();
    
}
void MainComponent::changeListenerCallback(juce::ChangeBroadcaster *source){
    static int maxLogSize = 300;
    
    if(source == this ){

//        if(log.size()>maxLogSize){
//            log.removeRange(0, log.size()-maxLogSize);
//        }

//        insertTextAtCaret
        pulpConsole.moveCaretToEnd();
        
        pulpConsole.insertTextAtCaret(log.joinIntoString("\n") + "\n");

        log.clear();
        if(!pulpConsole.isMouseButtonDown()){
            
        }
    }
}


void MainComponent::ToggleConfigVisibility(bool config,bool console){
    
    if(config){pulpConfigUI.setVisible(!pulpConfigUI.isVisible());}
    if(console){pulpConsole.setVisible(!pulpConsole.isVisible());}
    if(config || console)resized();
    
}



bool MainComponent::keyPressed (const KeyPress& key,
                                Component* originatingComponent) {
    
    int c = key.getKeyCode();
    static KeyPress cKey = KeyPress::createFromDescription("CMD + c"),
                    rKey= KeyPress::createFromDescription("CMD + r"),
                    lKey= KeyPress::createFromDescription("CMD + SHIFT + l");
    

    ToggleConfigVisibility(key==cKey,key==rKey);
    
    if(key == lKey){
        pulpConsole.clear();
    
    }
    return true;
}
