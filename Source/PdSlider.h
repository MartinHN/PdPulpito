

#ifndef __JUCE_HEADER_E639DC74856C943A__
#define __JUCE_HEADER_E639DC74856C943A__


#include "JuceHeader.h"
#include "PdComponent.h"




class PdSlider  : public PdComponent,public SliderListener
{
public:
    
    enum type{
        ROTARY=0,
        HSL,
        VSL
    };
    //==============================================================================

    PdSlider (PdParameter * p,type t):PdComponent(p)
    
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
        getSlider()->setColour(juce::Slider::textBoxTextColourId, Colours::white);
        
        
        getSlider()->addListener (this);
        
        
        setSize (100, 130);
        
        
    }
    ~PdSlider(){getSlider()->removeListener(this);};
    
    void lookAndFeelChanged()override{
    getSlider()->setTextBoxIsEditable(false);
    getSlider()->lookAndFeelChanged();
}




void resizeComponent(){
    getSlider()->setTextBoxStyle (Slider::TextBoxAbove, true, component->getWidth() , component->getHeight());
    getSlider()->lookAndFeelChanged();
    
};


// fromGUI
void sliderValueChanged (Slider* sliderThatWasMoved) override{
    if (sliderThatWasMoved == getSlider()){
        setValueFromGUI(sliderThatWasMoved->getValue());
    }
}

void setValue(float v,NotificationType notif)override {
        getSlider()->setValue(v,notif);
}

void setRange(float min,float max){
    float range = abs(max-min);
    int po = log10(range) - 3;
    float step = pow(10,po);
    getSlider()->setRange(min,max,step);}



Slider* getSlider(){return (Slider*) component.get();}

//==============================================================================
JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (PdSlider)
};


#endif
