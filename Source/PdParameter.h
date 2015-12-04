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
    
    PdParameter ( PulpParameterDesc * desc):
    defaultValue (desc->defaultV),
    value (desc->defaultV),
    desc(desc),
    sendName (desc->sendName),
    recieveName(desc->recieveName),
    min(desc->min),
    max(desc->max),
    processorIdx(desc->processorIdx)
    {
    }
    

    float getValue() const override                         {return value;}
    float getTrueValue()                                    {return value*(max-min) + min;}
    float getDefaultValue() const override                  {return value;}
    String getName (int maximumStringLength = 70)const override  {return sendName;}
    String getRecieveName()                                    {return recieveName;}
    
    int getIdx()                                            {return processorIdx;}
    float getValueForText(const String& text)const override {return text.getFloatValue();}
    String getLabel() const                                 {return sendName;}
    
    bool isAudioParameter(){return desc->isAudioParameter;}
    int getProcessorIdx() { return desc->processorIdx;}
    
    
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
    
    
    void setFromDesc(PulpParameterDesc * _desc){
//        jassert(processorIdx == desc->processorIdx);
        sendName =_desc->sendName;
        recieveName = _desc->recieveName;
        min = _desc->min;
        max = _desc->max;
        defaultValue = _desc->defaultV;
        processorIdx = _desc->processorIdx;
        desc = _desc;
        
        
    }
    
    
    void setValue (float newValue) override
    {   updated = true;
        float oldv = value;
        value = newValue;
        if(getType()==PulpParameterDesc::Type::BANG){
            value = 0;
        }
        changed = oldv!=value;
    }
    void setTrueValue(float v,bool notifyPd){
        updated = notifyPd ;
        float oldv = value;
        if(getType()==PulpParameterDesc::Type::BANG){
            value = 0;
        }
        value = (v-min)/(max-min);
        changed = notifyPd && (oldv!=value);
    }
    void setMinMax(float min,float max)                     {min = min;max = max;}
    void setName (String n)                                 {sendName = n;}
    
    void setChanged(bool v){changed = v;};
    
    void serialize(XmlElement * xml){
        xml->setAttribute("index", (int) getDesc()->pdObjectIdx);
        xml->setAttribute("name", getName(256));
        xml->setAttribute("value", (double) getTrueValue());

    }
    
    void deSerialize(XmlElement * parameterElement)         {setName( parameterElement->getStringAttribute("name"));setTrueValue(parameterElement->getDoubleAttribute("value"),true);setChanged(true);}
    
    PulpParameterDesc::Type getType(){return desc->type;}

    float min,max;
    PulpParameterDesc * getDesc(){return desc;};
private:
    float defaultValue, value;
    
    int processorIdx = -1;
    bool volatile updated ;
    bool volatile changed;
    String sendName,recieveName;
    PulpParameterDesc * desc;

};


#endif  // FLOATPARAMETER_H_INCLUDED
