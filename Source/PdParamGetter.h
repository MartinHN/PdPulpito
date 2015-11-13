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
        Rectangle<float> getEnclosing(){return getUnion(labelRect);}
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
    
    
    Array<Array<StringArray > > patchString;
    int localParamCount = 0;
    Colour getPdColour(int c);
    Array<Rectangle<int> > guiSizes;
    Array<File> guiFile;
    OwnedArray<PulpParameterDesc> pulpParameterDescs;
    
};
#endif /* defined(__Pd_Pulp__PdParamGetter__) */
