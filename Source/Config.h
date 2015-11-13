//
//  Config.h
//  Pd Pulp
//
//  Created by martin hermant on 14/10/15.
//
//

#ifndef Pd_Pulp_Config_h
#define Pd_Pulp_Config_h

#define PATCH_PATH "/Users/mhermant/Documents/Work/Dev/PD_patches/pdPulpTst/tst1/simpleout1.pd"
#define PATCH_PATH2 "/Users/mhermant/Documents/Work/Dev/PD_patches/pdPulpTst/tst2/simpleout2.pd"
#define PD_CONSOLE
#include "../JuceLibraryCode/AppConfig.h"
#include "../JuceLibraryCode/modules/juce_core/system/juce_PlatformDefs.h"



#define DBG(x) std::cout << x << std::endl;
#define DBG2(x,y) std::cout << x << "," << y << std::endl;
#define DBG3(x,y,z) std::cout << x << "," << y << "," << z << std::endl;
#define DBG4(x,y,z,t) std::cout << x << "," << y << "," << z << "," << t <<  std::endl;

#endif
