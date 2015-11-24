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
#include "PdParamGetter.h"


class PdParameter : public AudioProcessorParameter
{
public:
    
    PdParameter (float defaultParameterValue, PulpParameterDesc * desc):
    defaultValue (defaultParameterValue),
    value (defaultParameterValue),
    name (desc->name),
    min(desc->min),
    max(desc->max),
    processorIdx(desc->processorIdx)
    {
    }
    
    float getValue() const override                         {return value;}
    float getTrueValue()                                    {return value*(max-min) + min;}
    float getDefaultValue() const override                  {return defaultValue;}
    String getName (int maximumStringLength)const override  {return name;}
    int getIdx()                                            {return processorIdx;}
    float getValueForText(const String& text)const override {return text.getFloatValue();}
    String getLabel() const                                 {return name;}
    
    
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
    void setMinMax(float min,float max)                     {min = min;max = max;}
    void setName (String n)                                 {name = n;}
    

    
    void serialize(XmlElement * xml){
        xml->setAttribute("index", (int) getParameterIndex());
        xml->setAttribute("name", getName(256));
        xml->setAttribute("value", (double) getValue());
    }
    
    void deSerialize(XmlElement * parameterElement)         {setName( parameterElement->getStringAttribute("name"));}
    

    
private:
    float defaultValue, value;
    float min,max;
    int processorIdx = -1;
    bool volatile updated ;
    bool volatile changed;
    String name;

};


#endif  // FLOATPARAMETER_H_INCLUDED
