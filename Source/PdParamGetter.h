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
    void setParametersFromDescs();
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
        
        int guiNum;
        int processorIdx;
    };
    
    
    Array<PulpParameterDesc> getDescForGui(int num);
    int getProcessorStartIdxForGUI(int guiNum);
    int getNumGUI();

    Array<PulpParameterDesc> pulpParameterDescs;
    
    Array<PdParameter*> pdParameters;
    Rectangle<int> patchRect;
    Array<File> guiFile;
    
    int localParamCount = 0;
    
    Array<Array<StringArray > > patchString;
    
};
#endif /* defined(__Pd_Pulp__PdParamGetter__) */
