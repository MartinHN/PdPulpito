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
    Array<int> connectedToOutlet(int objNum,int outNum);
    
    
    
    class PulpParameterDesc: public juce::Rectangle<float>{
    public:
        String name;
        float min;
        float max;
        enum Type{
            KNOB= 0,
            NUMBOX,
            TOGGLE,
            POPUP,
            CNV,
            BANG,
            SLIDER
        };
        Type type;
        
        
        Rectangle<float> labelRect;
        Rectangle<float> getEnclosing(){return getUnion(labelRect);}
        bool hasLabel;
        int labelSize;
        String labelName;
        StringArray elements;
    };
    
    Array<PulpParameterDesc> pulpParameterDescs;
    
    Array<PdParameter*> pdParameters;
    Rectangle<int> patchRect;
    File guiFile;
    
    Array<StringArray > patchString;
    
};
#endif /* defined(__Pd_Pulp__PdParamGetter__) */
