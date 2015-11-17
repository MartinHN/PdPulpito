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

    // Points to the start of a list of resource names.
    extern const char* namedResourceList[];

    // Number of elements in the namedResourceList array.
    const int namedResourceListSize = 13;

    // If you provide the name of one of the binary resource variables above, this function will
    // return the corresponding data and its size (or a null pointer if the name isn't found).
    const char* getNamedResource (const char* resourceNameUTF8, int& dataSizeInBytes) throw();
}

#endif
