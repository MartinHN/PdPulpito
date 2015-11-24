



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
    
    
    startTimer(25);
    
    
    
    addAndMakeVisible(pdEditor);
    pdEditor.buildCanvas();
    pdEditor.updatePatch();
    addKeyListener(this);
    
    
    pulpConsole.setReadOnly(true);
    pulpConsole.setMultiLine(true);
    pulpConsole.setScrollToShowCursor(true);
    pulpConsole.setSize(400, 500);
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
    log.addLines(message);
    
    ChangeBroadcaster::sendChangeMessage();
    
}
void MainComponent::changeListenerCallback(juce::ChangeBroadcaster *source){
    if(source == this){
        
        if(log.size()>1000){
            log.removeRange(0, log.size()-1000);
        }
        pulpConsole.setText(log.joinIntoString("\n"));
        pulpConsole.moveCaretToEnd();
    }
}


void MainComponent::ToggleConfigVisibility(bool config,bool console){
    
    if(config){pulpConfigUI.setVisible(!pulpConfigUI.isVisible());}
    if(console){pulpConsole.setVisible(!pulpConsole.isVisible());}
    if(config || console)resized();
    
}

void MainComponent::timerCallback()
{
    //    PdAudioProcessor& p = (PdAudioProcessor&) pdEditor.processor;
    //    statusField->setText(p.status, dontSendNotification);
}

bool MainComponent::keyPressed (const KeyPress& key,
                                Component* originatingComponent) {
    
    juce_wchar c = key.getTextCharacter();
    
    ToggleConfigVisibility(c=='c',c=='r');
    
}
