

#ifndef __JUCE_HEADER_E639DC74856C943A__
#define __JUCE_HEADER_E639DC74856C943A__


#include "JuceHeader.h"
#include "LabelComponent.h"




class SendSlider  : public LabelComponent,public SliderListener,public Timer
{
public:
    
    enum type{
        ROTARY=0,
        HSL,
        VSL
    };
    //==============================================================================
    SendSlider (int index, PdAudioProcessor& processor)
    : LabelComponent(index,processor)
    
    {
        
        
        addAndMakeVisible (component = new Slider ("slider"));
        
        getSlider()->setSliderStyle (Slider::RotaryVerticalDrag);
        getSlider()->setTextBoxStyle (Slider::TextBoxBelow, false, 80, 12);
        getSlider()->setColour (Slider::thumbColourId, Colour (0xff5c5c5c));
        getSlider()->setColour (Slider::rotarySliderFillColourId, Colour (0x7fdddddd));
        getSlider()->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66e6e6e6));
        getSlider()->setColour (Slider::textBoxHighlightColourId, Colour (0x40a6a6a6));
        getSlider()->setColour(juce::Slider::textBoxBackgroundColourId, juce::Colours::transparentWhite);
        getSlider()->setColour(juce::Slider::textBoxOutlineColourId, juce::Colours::transparentWhite);
        getSlider()->addListener (this);
        getSlider()->setTextBoxStyle (Slider::TextBoxAbove,//TextEntryBoxPosition newPosition,
                                      true,//bool isReadOnly,
                                      10,//int textEntryBoxWidth,
                                      10//int textEntryBoxHeight
                                      );
        
        setSize (100, 130);
        startTimer(100);
        
    }
    SendSlider (int index, PdAudioProcessor& processor,type t)
    : LabelComponent(index,processor)
    
    {
        
        
        addAndMakeVisible (component = new Slider ("slider"));
        
        
        switch(t){
            case ROTARY:
                getSlider()->setSliderStyle (Slider::RotaryVerticalDrag);
                getSlider()->setTextBoxStyle (Slider::TextBoxAbove, true, 80, 12);
                getSlider()->setColour (Slider::thumbColourId, Colour (0xff5c5c5c));
                getSlider()->setColour (Slider::rotarySliderFillColourId, Colour (0x7fdddddd));
                getSlider()->setColour (Slider::rotarySliderOutlineColourId, Colour (0x66e6e6e6));
                
                break;
            case VSL:
                getSlider()->setSliderStyle (Slider::LinearVertical);
                getSlider()->setTextBoxStyle (Slider::TextBoxAbove, true, 80, 12);
                getSlider()->setColour (Slider::thumbColourId, Colour (0xff5c5c5c));
                break;
            case HSL:
                getSlider()->setSliderStyle (Slider::LinearHorizontal);
                getSlider()->setTextBoxStyle (Slider::TextBoxAbove, true, 80, 12);
                getSlider()->setColour (Slider::thumbColourId, Colour (0xff5c5c5c));
                
                break;
            default:
                jassertfalse;
                break;
                
                
        }
        
        
        
        getSlider()->setColour (Slider::textBoxHighlightColourId, Colour (0x40a6a6a6));
        getSlider()->setColour(juce::Slider::textBoxBackgroundColourId, juce::Colours::transparentWhite);
        getSlider()->setColour(juce::Slider::textBoxOutlineColourId, juce::Colours::transparentWhite);
        getSlider()->setColour(juce::Slider::textBoxTextColourId, Colours::black);
        
        
        getSlider()->addListener (this);
        
        
        setSize (100, 130);
        startTimer(100);
        
    }
    ~SendSlider(){};
    
    void lookAndFeelChanged()override{
    getSlider()->setTextBoxIsEditable(false);
    getSlider()->lookAndFeelChanged();
}


// from DAW
void timerCallback(){

    if(!getSlider()->isMouseButtonDown()){

        getSlider()->setValue(getPdParameter()->getTrueValue() ,NotificationType::dontSendNotification);
        if (getPdParameter()->hasChanged())
        {
            startTimer (1000 / 50);
        }
        else
        {
            startTimer (jmin (1000 / 3, getTimerInterval() + 10));
        }
        
        getSlider()->repaint();
    }
};

void resizeComponent(){
    getSlider()->setTextBoxStyle (Slider::TextBoxAbove, true, component->getWidth() , component->getHeight());
    getSlider()->lookAndFeelChanged();
    
};


// fromGUI
void sliderValueChanged (Slider* sliderThatWasMoved){
    if (sliderThatWasMoved == getSlider()){
        getPdParameter()->setTrueValue(getSlider()->getValue());
        getPdParameter()->setValueNotifyingHost(getPdParameter()->getValue());

        
    }
}

void setRange(float min,float max){
    float range = abs(max-min);
    int po = log10(range) - 3;
    float step = pow(10,po);
    getSlider()->setRange(min,max,step);}



Slider* getSlider(){return (Slider*) component.get();}

//==============================================================================
JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (SendSlider)
};


#endif
