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
    
    PdParameter (float defaultParameterValue, const String& paramName,float min=0,float max=1)
    : defaultValue (defaultParameterValue),
    value (defaultParameterValue),
    name (paramName),min(min),max(max)
    {
    }
    
    float getValue() const override
    {
        return value;
    }
    float getTrueValue(){
        return value*(max-min) + min;
    }
    void setStringType(bool t){stringType=t;}
    bool isStringType(){return stringType;}
    
    String getStringValue(){return stringValue[value];}
    
    void setStringValue(StringArray &s){stringValue=s;}
    
    bool hasToObserve(){
        bool _c = updated;
        updated = false;
        return _c;
    }
    bool hasChanged(){
        bool _c = changed;
        changed = false;
        return _c;
    }
    void setValue (float newValue) override
    {   updated = true;
        float oldv = value;
        value = newValue;
        changed = oldv!=value;
    }
    void setTrueValue(float v){
        updated = true;
        float oldv = value;
        value = (v-min)/(max-min);
        changed = oldv!=value;
    }
    void setMinMax(float min,float max){
        min = min;
        max = max;
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
    float min,max;
    bool volatile updated ;
    bool volatile changed;
    String name;
    bool stringType=false;
    StringArray stringValue;
};


#endif  // FLOATPARAMETER_H_INCLUDED
