//
//  Config.h
//  Pd Pulp
//
//  Created by martin hermant on 14/10/15.
//
//

#ifndef Pd_Pulp_Config_h
#define Pd_Pulp_Config_h

//#define PATCH_PATH "/Users/mhermant/Documents/Work/Dev/PD_patches/pdPulpTst/midiout.pd"
#define PATCH_PATH File::getSpecialLocation(File::SpecialLocationType::userHomeDirectory).getFullPathName() + "/Documents/mididrums_w2_6_demo/advanced_w2_6_demo.pd"
//#define PATCH_PATH "/Users/mhermant/Documents/Work/Dev/PD_patches/Markov/DEMO-ISMIR_all.pd"
#define PATCH_PATH2  PATCH_PATH //"~/Dev/PdPulpito/testFiles/2/simple2.pd"
#define PD_CONSOLE
#include "../JuceLibraryCode/AppConfig.h"
//#include "../JuceLibraryCode/modules/juce_core/system/juce_PlatformDefs.h"

#define ENABLE_DBG 1
#if ENABLE_DBG
#define DBG(x) std::cout << x << std::endl;
#define DBGN(x) std::cout << x ;
#define DBG2(x,y) std::cout << x << "," << y << std::endl;
#define DBG3(x,y,z) std::cout << x << "," << y << "," << z << std::endl;
#define DBG4(x,y,z,t) std::cout << x << "," << y << "," << z << "," << t <<  std::endl;
#else
#define DBG(x)
#define DBGN(x)
#define DBG2(x,y)
#define DBG3(x,y,z)
#define DBG4(x,y,z,t)
#endif

#endif
