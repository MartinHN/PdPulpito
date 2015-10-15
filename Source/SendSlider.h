

#ifndef __JUCE_HEADER_E639DC74856C943A__
#define __JUCE_HEADER_E639DC74856C943A__


#include "JuceHeader.h"
#include "LabelComponent.h"




class SendSlider  : public LabelComponent,public SliderListener
{
public:
    //==============================================================================
    SendSlider (int index, AudioProcessor& processor)
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

        
        setSize (100, 130);

    }
    ~SendSlider(){};

    void timerCallback(){getSlider()->setValue(processor.getParameter(index), NotificationType::dontSendNotification);};

    void resizeComponent(){};
    void sliderValueChanged (Slider* sliderThatWasMoved){
        if (sliderThatWasMoved == getSlider()){
         processor.setParameterNotifyingHost(index, sliderThatWasMoved->getValue());
//            sliderThatWasMoved->setValue(processor.getParameter(index), NotificationType::dontSendNotification);
            
        }
    }

    void setRange(float min,float max){getSlider()->setRange(min,max);}

private:

    Slider* getSlider(){return (Slider*) component.get();}
    


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (SendSlider)
};


#endif
