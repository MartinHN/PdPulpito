
#include "PdAudioProcessor.h"


#include "PdComponent.h"


//==============================================================================
PdComponent::PdComponent (PdParameter * pdParam)
:pdParam(pdParam),

processor(processor)

{
    
    label = new Label ("label",
                       TRANS("Label"));
    
    addAndMakeVisible (label);
    
    label->setFont (Font (15.00f, Font::plain));
    label->setJustificationType (Justification::centred);
    label->setEditable (false, false, false);
    label->setColour (Label::backgroundColourId, Colour (0x00404040));
    label->setColour (Label::textColourId, Colour (0xffc4c4c4));
    label->setColour (TextEditor::textColourId, Colour (0xffe9e9e9));
    label->setColour (TextEditor::backgroundColourId, Colour (0x00343434));
    label->setInterceptsMouseClicks(false,false);
    setInterceptsMouseClicks(false,true);
    
    
    setSize (100, 130);
    index = pdParam->getProcessorIdx();
    if(index!=-1){
        String labelText(pdParam->getName(70));
        setName(labelText);
    }
    label->setJustificationType(juce::Justification::left);
    
    
    setPaintingIsUnclipped(true);
    
    label->setSize(200, 20);
    backColour = new Colour(Colours::black.withAlpha(0.0f));
    
    
    
    if(getPdParameter()!=nullptr)startTimer(1000/5);
    
    
    addChangeListener(this);
    
}

PdComponent::~PdComponent()
{
    
    
    component = nullptr;
    label = nullptr;
    
}
void PdComponent::setName(const juce::String &s){
    Component::setName(s);
    label->setText(s, dontSendNotification);
};

//==============================================================================
void PdComponent::paint (Graphics& g)
{
    
    
    
    Path back;
    back.addRectangle(getLocalBounds());
    
    g.setColour(*backColour);
    g.fillPath(back);
    g.setColour(Colours::white);
    //    g.drawRect(label->getBounds());
    //        g.fillAll(juce::Colours::red);
    
}



void PdComponent::resized()
{
    
    label->setTopLeftPosition(labelRelPos.getX(),
                              labelRelPos.getY() );
    Font nF = label->getFont();
    nF.setHeight(labelSize);
    label->setFont(nF);
    label->setBounds(label->getBounds().withHeight(labelSize));
    if(component){
        component->setBounds(getLocalBounds());
        resizeComponent();
        component->toBehind(label);
    }
    
}

void PdComponent::setLabelVisible(bool v){
    
    label->setVisible(v);
    
}



void PdComponent::setValueFromGUI(float v){
    
    
    // notify pd
    getPdParameter()->setTrueValue(v,true);
    
    // notify host if needed
    if(isAudioParameter()){
    getPdParameter()->setValueNotifyingHost(getPdParameter()->getValue());
    }
}

// triger change message from audio thread to new GUI Value
void PdComponent::setValueFromPd(float v){
    pdValue = v;
    sendChangeMessage();
}
void PdComponent::changeListenerCallback (ChangeBroadcaster* source) {
    if(getPdParameter()){
        // we dont need to notify Pd
        getPdParameter()->setTrueValue(pdValue,false);
        
        // set component Value and notify host
        setValue(pdValue,NotificationType::sendNotification);
        
    }
    else{
        DBG("WTF");
    }
}

// from DAW
void PdComponent::timerCallback(){
    
    //    if(!getSlider()->isMouseButtonDown()){
    
//    if (isAudioParameter() && getPdParameter()!=nullptr && getPdParameter()->hasChanged())
//    {
//        // don't notify host as it comes from himself
//        setValue(getPdParameter()->getTrueValue() ,NotificationType::dontSendNotification);
//        startTimer (1000 / 10);
//        repaint();
//    }
//    else
//    {
//        startTimer (jmin (1000 / 3, getTimerInterval() + 10));
//    }
    
    
    //    }
};






