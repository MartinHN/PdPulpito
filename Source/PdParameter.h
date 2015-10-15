/*
  ==============================================================================

    FloatParameter.h
    Created: 3 Jul 2015 3:53:57pm
    Author:  Karl

  ==============================================================================
*/

#ifndef FLOATPARAMETER_H_INCLUDED
#define FLOATPARAMETER_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"

class PdParameter : public AudioProcessorParameter
{
public:
    
    PdParameter (float defaultParameterValue, const String& paramName)
    : defaultValue (defaultParameterValue),
    value (defaultParameterValue),
    name (paramName)
    {
    }
    
    float getValue() const override
    {
        return value;
    }
    void setStringType(bool t){stringType=t;}
    bool isStringType(){return stringType;}
    
    String getStringValue(){return stringValue[value];}
    
    void setStringValue(StringArray &s){stringValue=s;}
    
    bool hasToObserve(){
        bool _c = changed;
        changed = false;
        return _c;
    }
    void setValue (float newValue) override
    {   changed = true;
        value = newValue;
    }
    
    float getDefaultValue() const override
    {
        return defaultValue;
    }
    
    String getName (int maximumStringLength) const override
    {
        return name;
    }
    
    void setName (String n)
    {
        name = n;
    }
    
    String getLabel() const override
    {
        return String();
    }
    
    float getValueForText (const String& text) const override
    {
        return text.getFloatValue();
    }
    
    void serialize(XmlElement * xml){
        xml->setAttribute("index", (int) getParameterIndex());
        xml->setAttribute("name", getName(256));
        xml->setAttribute("value", (double) getValue());
    }
    
    void deSerialize(XmlElement * parameterElement){
        setName( parameterElement->getStringAttribute("name"));
        

    }
    
private:
    float defaultValue, value;
    bool changed ;
    String name;
    bool stringType=false;
    StringArray stringValue;
};


#endif  // FLOATPARAMETER_H_INCLUDED
