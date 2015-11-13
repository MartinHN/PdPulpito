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
#include "PdParameter.h"

class PdParamGetter {
    public :

    void readPatch(File & patchFile);
    void getParameterDescsFromPatch(File & patchfile);

//    Array<int> connectedToOutlet(int objNum,int outNum);
    
    
    
    class PulpParameterDesc: public juce::Rectangle<float>{
    public:
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
            BANG
            
            
        };
        Type type;
        
        
        Rectangle<float> labelRect;
        bool hasLabel;
        int labelSize;
        String labelName;
        StringArray elements;
        
        Colour backColour;
        Colour mainColour;
        
        
        int guiNum;
        int processorIdx;
    };
    
    
    
    PulpParameterDesc * getDescForIdx(int idx);
    int getTotalParameterCount();
    
    Array<int> GUINumParams;
    int getProcessorStartIdxForGUI(int guiNum);
    int getNumGUI();
    int getNumParamforGUI(int guiNum);
    Rectangle<int> getBoundOfGui(int guiNum);
    
    
    
    
    
    
    
    
    
    
protected:
    
    
    Array<Array<StringArray > > parsedString;
    int localParamCount = 0;
    Colour getPdColour(int c);
    Array<Rectangle<int> > guiSizes;
    Array<File> guiFiles;
    OwnedArray<PulpParameterDesc> pulpParameterDescs;
    
    static int dollarZero;
    
    
private:
    File subPatchExists(String sub);
    Array<StringArray>  parseText(StringArray destLines,bool isRootGUI);
    void getParamsFromText(Array<StringArray> g,int guiIdx,Rectangle<int> region=Rectangle<int>(0,0),Point < int > offset=Point<int>(0,0));
};
#endif /* defined(__Pd_Pulp__PdParamGetter__) */
