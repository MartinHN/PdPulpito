/* =========================================================================================

   This is an auto-generated file: Any edits you make may be overwritten!

*/

#ifndef BINARYDATA_H_28065612_INCLUDED
#define BINARYDATA_H_28065612_INCLUDED

namespace BinaryData
{
    extern const char*   build_counter;
    const int            build_counterSize = 127;

    extern const char*   pdlibnotes_txt;
    const int            pdlibnotes_txtSize = 2069;

    extern const char*   getridof_baddeps;
    const int            getridof_baddepsSize = 875;

    extern const char*   notes_txt;
    const int            notes_txtSize = 2940;

    extern const char*   curve_gp;
    const int            curve_gpSize = 276;

    extern const char*   notes_txt2;
    const int            notes_txt2Size = 2508;

    extern const char*   README_txt;
    const int            README_txtSize = 3901;

    extern const char*   acinclude_m4;
    const int            acinclude_m4Size = 5390;

    extern const char*   alias;
    const int            aliasSize = 154;

    extern const char*   bootstrap_sh;
    const int            bootstrap_shSize = 103;

    extern const char*   configure;
    const int            configureSize = 108;

    extern const char*   makealias_sh;
    const int            makealias_shSize = 1567;

    extern const char*   strip_objects;
    const int            strip_objectsSize = 248;

    extern const char*   AUTHORS;
    const int            AUTHORSSize = 322;

    extern const char*   autogen_sh;
    const int            autogen_shSize = 3494;

    extern const char*   BUGS_txt;
    const int            BUGS_txtSize = 351;

    extern const char*   ChangeLog;
    const int            ChangeLogSize = 933;

    extern const char*   config_guess;
    const int            config_guessSize = 44826;

    extern const char*   config_h_in;
    const int            config_h_inSize = 3713;

    extern const char*   config_sub;
    const int            config_subSize = 35454;

    extern const char*   configure_ac;
    const int            configure_acSize = 4105;

    extern const char*   depcomp;
    const int            depcompSize = 20334;

    extern const char*   INSTALL;
    const int            INSTALLSize = 15578;

    extern const char*   installsh;
    const int            installshSize = 13998;

    extern const char*   LICENSE_txt;
    const int            LICENSE_txtSize = 15220;

    extern const char*   Makefile_am;
    const int            Makefile_amSize = 312;

    extern const char*   Makefile_in;
    const int            Makefile_inSize = 26258;

    extern const char*   missing;
    const int            missingSize = 10346;

    extern const char*   pdzexy_info;
    const int            pdzexy_infoSize = 291;

    extern const char*   README_txt2;
    const int            README_txt2Size = 5669;

    extern const char*   SConscript;
    const int            SConscriptSize = 481;

    extern const char*   z_install_bat;
    const int            z_install_batSize = 1675;

    extern const char*   zexymeta_pd_in;
    const int            zexymeta_pd_inSize = 9630;

    // Points to the start of a list of resource names.
    extern const char* namedResourceList[];

    // Number of elements in the namedResourceList array.
    const int namedResourceListSize = 33;

    // If you provide the name of one of the binary resource variables above, this function will
    // return the corresponding data and its size (or a null pointer if the name isn't found).
    const char* getNamedResource (const char* resourceNameUTF8, int& dataSizeInBytes) throw();
}

#endif
