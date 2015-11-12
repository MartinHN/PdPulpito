

#ifndef __JUCE_HEADER_E639DC74856C943A__
#define __JUCE_HEADER_E639DC74856C943A__


#include "JuceHeader.h"
#include "LabelComponent.h"




class SendSlider  : public LabelComponent,public SliderListener
{
public:
    
    enum type{
        ROTARY=0,
        HSL,
        VSL
    };
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
        getSlider()->setTextBoxStyle (Slider::TextBoxAbove,//TextEntryBoxPosition newPosition,
                                      true,//bool isReadOnly,
                                      10,//int textEntryBoxWidth,
                                      10//int textEntryBoxHeight
                                      );
        
        setSize (100, 130);
        
    }
    SendSlider (int index, AudioProcessor& processor,type t)
    : LabelComponent(index,processor)
    
    {
        
        
        addAndMakeVisible (component = new Slider ("slider"));
        valueLabel = new Label();
        addAndMakeVisible(valueLabel);
        
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
        
        
        
        getSlider()->addListener (this);
        
        
        setSize (100, 130);
        
    }
    ~SendSlider(){};
    
    void lookAndFeelChanged()override{
    getSlider()->setTextBoxIsEditable(false);
        getSlider()->lookAndFeelChanged();
    }
    
    void timerCallback(){getSlider()->setValue(processor.getParameter(index), NotificationType::dontSendNotification);};
    
    void resizeComponent(){
        getSlider()->setTextBoxStyle (Slider::TextBoxAbove, true, component->getWidth() , component->getHeight());
    
    };
    void sliderValueChanged (Slider* sliderThatWasMoved){
        if (sliderThatWasMoved == getSlider()){
            processor.setParameterNotifyingHost(index, sliderThatWasMoved->getValue());
            //            sliderThatWasMoved->setValue(processor.getParameter(index), NotificationType::dontSendNotification);
            
        }
    }
    
void setRange(float min,float max){
    float range = abs(max-min);
    int po = log10(range) - 3;
    float step = pow(10,po);
    getSlider()->setRange(min,max,step);}
    
private:
    
    Slider* getSlider(){return (Slider*) component.get();}
    
    ScopedPointer<Label> valueLabel;

    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (SendSlider)
};


#endif
