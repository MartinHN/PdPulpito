//
//  PdParamGetter.h
//  Pd Pulp
//
//  Created by martin hermant on 13/10/15.
//
//

#ifndef __Pd_Pulp__PdParamGetter__
#define __Pd_Pulp__PdParamGetter__

#include "../JuceLibraryCode/JuceHeader.h"



class PulpParameterDesc; // see at end of file

class PdParamGetter {
    public :

    void getParameterDescsFromPatch(File & patchfile);

//    Array<int> connectedToOutlet(int objNum,int outNum);
    
    
    

    
    
    
    PulpParameterDesc * getObjectForIdx(int idx);
    int getTotalObjectCount();
    
    PulpParameterDesc * getParamForIdx(int idx);
    int getTotalParameterCount();
    
    
    Array<int> GUINumParams;
    Array<int> GUINumObjects;
    int getProcessorStartIdxForGUI(int guiNum);
    int getNumGUI();
    int getNumObjectsForGUI(int guiNum);
    Rectangle<int> getBoundOfGui(int guiNum);
    String    PdRootName;
    String getPdRootName() const {if(PdRootName==""){return "emptyPulpito";}return PdRootName;}
    
    
    
    bool isMoreRecentThan(juce::Time t) {for ( auto & f : guiFiles){if(f.getLastModificationTime()>t)return true;}return false;};
    Time getLastPdGUIModTime()          {Time res = guiFiles[0].getLastModificationTime();
                                        for ( auto & f : guiFiles){Time t =f.getLastModificationTime(); if(t>res)res=t;}
                                        return res;}
    
    
    
    
protected:
    
    String resolveDollarzero(String & c);
    Array<Array<StringArray > > parsedString;
    int localParamCount = 0,localObjectCount=0;
    Colour getPdColour(int c);
    Array<Rectangle<int> > guiSizes;
    Array<File> guiFiles;
    OwnedArray<PulpParameterDesc> pulpParameterDescs;
    Array<PulpParameterDesc * > audioParameters;
    int dollarZero;
    
    
private:
    File subPatchExists(String sub);
    Array<StringArray>  parseText(StringArray destLines,bool isRootGUI,bool ignoresubpatches = true);
    void getParamsFromText(Array<StringArray> g,int guiIdx,Rectangle<int> region=Rectangle<int>(0,0),Point < int > offset=Point<int>(0,0));
};



// class that holds info from pd file format , later transformed into pdparameter and pdComponents
class PulpParameterDesc: public juce::Rectangle<float>{
public:
    PulpParameterDesc(){
        min = 0;
        max = 1;
        name = "empty";
    }
    
    String name;
    float min;
    float max;
    enum Type{
        KNOB= 0,
        HSL,
        VSL,
        NUMBOX,
        TOGGLE,
        POPUP,
        CNV,
        BANG,
        HRADIO,
        VRADIO
    };
    Type type;
    
    
    Rectangle<float> labelRect;
    bool hasLabel;
    int labelSize;
    String labelName;
    
    bool isAudioParameter(){return (type!= CNV);}
    
    // container for variable Size objects
    StringArray elements;
    
    
    Colour backColour;
    Colour mainColour;
    
    int guiNum;
    int processorIdx;
    int pdObjectIdx;
};


#endif /* defined(__Pd_Pulp__PdParamGetter__) */
