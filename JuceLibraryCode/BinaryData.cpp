/* ==================================== JUCER_BINARY_RESOURCE ====================================

   This is an auto-generated file: Any edits you make may be overwritten!

*/

namespace BinaryData
{

//================== build_counter ==================
static const unsigned char temp_binary_data_0[] =
"#define CYCLONE_VERSION \"0.1\"\n"
"#define CYCLONE_RELEASE \"alpha\"\n"
"#define CYCLONE_BUILD 56\n"
"\n"
"#if 0\n"
"CYCLONE_SNAPSHOT = 0.1.56\n"
"#endif\n";

const char* build_counter = (const char*) temp_binary_data_0;

//================== pd-lib-notes.txt ==================
static const unsigned char temp_binary_data_1[] =
"modifications to Joseph A. Sarlo's code (formerly part of `pd-lib')\n"
"-------------------------------------------------------------------\n"
"\n"
"LATER: more testing, max-checking, resolving reentrancy, gc, etc.\n"
"\n"
"accum: only cosmetics\n"
"\n"
"bangbang:\n"
"- if argument > 2 the array is dynamically allocated\n"
"- if argument > 40 (max in max), a warning is printed\n"
"- accepts any message\n"
"\n"
"Bucket:\n"
"- arrays are dynamically allocated, no upper limit (max has no limit too)\n"
"- outlets output in right-to-left order\n"
"- added: 'set' method, 'l2r' and 'r2l' aliases\n"
"\n"
"buddy: coded from scratch\n"
"- using array of proxy objects (accepting any message)\n"
"- no upper limit for number of slots\n"
"\n"
"capture: coded from scratch\n"
"- text editor, savepanel\n"
"- any size\n"
"- circular buffering\n"
"\n"
"counter (rewritten entirely):\n"
"- using proxies to handle bangs and floats in other inlets than first\n"
"- new `engine', counter_dobang(), coded from scratch\n"
"- various adjustments of things that turned out to work differently in max,\n"
"  too many to list here (and probably more are required -- please let me know!)\n"
"\n"
"cycle:\n"
"- the array of outlets is dynamically allocated\n"
"- fixing cycle_list()'s bugs\n"
"- accepting (and sending) both floats and symbols, accepting anything\n"
"- 'thresh' and 'set' methods\n"
"- event-sensitive mode emulation (a temporary hack)\n"
"\n"
"Decode (rewritten entirely):\n"
"- if argument > 8 the array is dynamically allocated (with a warning)\n"
"- all outlets deliver after any action\n"
"- outlets output in right-to-left order\n"
"- while in all-off mode, input is stored, not ignored\n"
"- out-of-range input is clipped, not ignored\n"
"\n"
"Histo (rewritten entirely):\n"
"- creation argument added (size)\n"
"- the array is dynamically allocated, no upper limit (max has no limit too)\n"
"- check if input is in range, to prevent crashes :)\n"
"- 'bang' method\n"
"\n"
"iter:\n"
"- different method of memory allocation\n"
"- dripping both floats and symbols (max4 feature)\n"
"- 'anything' method\n"
"\n"
"match: coded from scratch\n"
"- matching stream of both floats and symbols (max4 feature)\n"
"- scanning all kinds of messages, not only separate floats\n"
"- recognizing overlapping patterns\n";

const char* pdlibnotes_txt = (const char*) temp_binary_data_1;

//================== getridof.baddeps ==================
static const unsigned char temp_binary_data_2[] =
"This is the list of all dependencies among miXed/shared objects.\n"
"Some are inevitable, but others can, and should be removed.\n"
"\n"
"unstable/fragile -> common/loud\n"
"unstable/fringe -> unstable/forky\n"
"unstable/loader -> common/os common/loud\n"
"common/props -> common/grow common/loud\n"
"common/vefl -> common/loud, unstable/fragile\n"
"common/messtree -> common/loud\n"
"common/qtree -> common/loud\n"
"common/binport -> common/lex\n"
"common/port -> common/loud, common/grow, common/binport,\n"
"\tunstable/forky, unstable/fragile, unstable/fringe\n"
"hammer/file -> common/os unstable/forky\n"
"sickle/sic -> common/loud\n"
"sickle/arsic -> common/loud, common/vefl, sickle/sic, unstable/fragile\n"
"toxy/plusbob -> common/loud\n"
"toxy/scriptlet -> common/loud, common/grow, common/props\n"
"xeq/squ* -> common/loud, common/dict, common/qtree, common/messtree,\n"
"\tcommon/mifi, xeq/squ*\n"
"vex/hyphen -> common/dict\n"
"vex/sofi -> vex/bifi\n";

const char* getridof_baddeps = (const char*) temp_binary_data_2;

//================== notes.txt ==================
static const unsigned char temp_binary_data_3[] =
"TODO for root and shared\n"
"  * fitter: abstraction-scoped, class-selective compatibility control\n"
"  * fitter: fittterstate map\n"
"  * hammerfile, hammergui: version control\n"
"\n"
"DONE for root and shared\n"
"\n"
"with cyclone alpha55\n"
"  * new module: messtree\n"
"  * qtree:\n"
"    . nodes of a custom tree may be caller-owned: a caller may pass 0 as\n"
"      nodesize to qtree_initcustom() and pass pre-allocated nodes to\n"
"      insert/multiinsert calls\n"
"    . new calls: qtree_override(), qtree_closestunder(), qtree_closestover()\n"
"    . all \"closest\" calls report a diff between key requested and key found\n"
"  * os: new calls (dummy under MSW, though): osdir_open(), osdir_setmode(),\n"
"    osdir_close(), osdir_rewind(), osdir_next(), osdir_isfile(), osdir_isdir()\n"
"  * loader: new calls, unstable_dirload_lib(), unstable_dirload_all()\n"
"  * fitter:\n"
"    . added \"test\" hook (as a first step towards a fittterstate map)\n"
"    . new calls: fitter_getfloat(), fitter_getsymbol()\n"
"  * fragile: new call fragile_class_getexterndir()\n"
"  * loud: loud_syserror() accepts a format string\n"
"  * support for building into subdirectory of the main bin directory\n"
"    (so that a library may automatically load all its plugin externals)\n"
"\n"
"with toxy alpha18\n"
"  * plusbob: stubifying t_plusbob, in order to minimize memory leak to 4 words\n"
"\n"
"with rafts prealpha1\n"
"  * new module: patchvalue\n"
"\n"
"with toxy alpha17\n"
"  * scriptlet: new call scriptlet_newalike()\n"
"\n"
"with cyclone alpha54 and toxy alpha16\n"
"  * props:\n"
"    . code cleanup\n"
"    . new calls: props_getfirst(), props_getnext(), props_diff(),\n"
"      props_clearall(), props_clearvalues()\n"
"    . props_add(): additional argument 'filter' (skip exact input-filter copies)\n"
"  * fragile: new call fragile_class_getnames()\n"
"  * hammereditor:\n"
"    . hammereditor_append() accepts unbalanced braces\n"
"    . defaults to dirty, if (older) tk misses edit command\n"
"\n"
"with cyclone alpha53\n"
"  * binport: added half-byte #symbol id\n"
"  * hammereditor:\n"
"    . fixed closing by window manager\n"
"    . dirty flag bound, shown and observed (unless in viewer mode)\n"
"    . title specification simplified and standardized\n"
"    . bug fix: incomplete transfer from editor\n"
"\n"
"with cyclone alpha52\n"
"  * fragile: class name resolution based on voluntary mutation and raising\n"
"  * fitter: mirroring removed\n"
"  * new module, os: opening files, parsing path\n"
"  * hammerpanel: two modes of -initialdir persistence\n"
"  * more mingw fixes\n"
"\n"
"with cyclone alpha51\n"
"  * new module, fitter: encapsulates compatibility support (formerly in maxmode)\n"
"  * fitter: per-class callback and mirroring interface to compatibility mode\n"
"  * mingw fixes\n"
"\n"
"with toxy alpha14\n"
"  * scriptlet: version control (verslet_ routines)\n"
"  * debug printout restricted to krzYszcz, sent to stderr\n"
"\n"
"with cyclone alpha50\n"
"  * bug fixes\n"
"    . hammertree crasher (affecting funbuff and offer)\n"
"    . MouseState/toxy clash\n"
"  * builds with gcc3 by default (no need to edit Makefile.common)\n"
"  * midi file code has been cleaned, now ready for using in qlist\n";

const char* notes_txt = (const char*) temp_binary_data_3;

//================== curve.gp ==================
static const unsigned char temp_binary_data_4[] =
"h(p) = (((p + 1e-20) * 1.2) ** .41) * .91\n"
"f(p) = h(p) / (1 - h(p))\n"
"g(x, p) = (exp(f(p) * x) - 1) / (exp(f(p)) - 1)\n"
"splot [0:1] [0:1] g(x, y)\n"
"pause -1\n"
"plot [0:1] g(.25, x), g(.5, x), g(.75, x)\n"
"pause -1\n"
"plot [0:1] g(x, 0), g(x, .25), g(x, .5), g(x, .75), g(x, 1)\n"
"print g(.5, 0)\n";

const char* curve_gp = (const char*) temp_binary_data_4;

//================== notes.txt ==================
static const unsigned char temp_binary_data_5[] =
"TODO for cyclone\n"
"  * add folder class, so people forget about using tot for that purpose\n"
"  * plug import into file/open\n"
"\n"
"DONE for cyclone\n"
"\n"
"alpha55\n"
"  * new class: overdrive~\n"
"  * seq:\n"
"    . new incompatible message 'tempo': 1-based coef, does not start playback\n"
"    . fix for double-to-float-pair calc in 'scoretime' and 'goto'\n"
"  * abs~: performance fix\n"
"  * slide~, rampsmooth~: bashing denormals\n"
"\n"
"alpha54\n"
"  * comment: fixing namespace bug, reducing traffic\n"
"  * testmess: optionally filling message with symbols (numbers in hex form\n"
"    or names of all registered classes)\n"
"\n"
"alpha53\n"
"  * matrix~: incompatible message 'set'\n"
"  * coll:\n"
"    . fixed descending order of 'sort' (a leaking sentinel bug)\n"
"    . ignoring negative indices in 'min' and 'max'\n"
"    . editor fixes (close by wm, dirty flag, title)\n"
"  * Table: reading from file, reading from editor, editor fixes\n"
"  * seq: editor fixes, editor bound to click (should bind to \"open\" too...)\n"
"  * prob, capture, capture~: viewer fixes\n"
"\n"
"alpha52\n"
"  * compatibility mode interface in maxmode object:\n"
"    messages 'set', 'get' (reply through the second outlet)\n"
"  * better handling of initial directory in open panels\n"
"  * relative path handling in 'cd' (library objects, seq, more to come)\n"
"  * remote reply to 'pwd' message of library objects (target argument required)\n"
"  * instead, left outlet of library objects sends return code from import\n"
"    (negative value indicates an error)\n"
"  * new class: matrix~\n"
"  * linedrive: more compatible in maxmode, bipolar otherwise\n"
"  * seq:\n"
"    . paused state fixes (state preserved in 'goto', proper delay in 'start')\n"
"    . 'goto' fix (works in idlemode)\n"
"    . more incompatible messages: 'scoretime', 'cd', 'pwd'\n"
"\n"
"alpha51\n"
"  * dummies loaded by maxmode, not cyclone\n"
"  * setting directory in creation argument replaced with 'cd' message\n"
"    to library objects (cyclone, maxmode, hammer and sickle)\n"
"  * 'pwd' message to library objects sends directory symbol to an outlet\n"
"  * creating cyclone and maxmode library objects possible without\n"
"    loading component libraries\n"
"  * prepend and Append:\n"
"    . bang handling, controlled by maxmode\n"
"    . restored max-like 'set' handling as default for objects with arguments\n"
"  * fix for parsing creation arguments in svf~\n"
"  * incompatible additions to seq: 'pause', 'continue', 'goto'\n"
"\n"
"alpha50\n"
"  * max-compatibility mode switch for cyclone\n"
"    . turned on by loading cyclone libs through \"-lib maxmode\"\n"
"    . affects max-compatibility of prepend and Append, controls\n"
"      compatibility warnings\n";

const char* notes_txt2 = (const char*) temp_binary_data_5;

//================== README.txt ==================
static const unsigned char temp_binary_data_6[] =
"http://suita.chopin.edu.pl/~czaja/miXed/externs/cyclone.html\n"
"\n"
"-------\n"
"cyclone\n"
"-------\n"
"\n"
"Cyclone is a library of PureData classes, bringing some level of compatibility\n"
"between Max/MSP and Pd environments.  Although being itself in the early stage\n"
"of development, it is meant to eventually become part of a much larger\n"
"project, aiming at unification and standardization of computer musician's\n"
"tools.\n"
"\n"
"In its current form, cyclone is mainly for people using both Max and Pd, and\n"
"thus wanting to develop cross-platform patches.  In this respect, cyclone has\n"
"much in common with Thomas Grill's flext, and flext-based externals.  See\n"
"Thomas' page.  While flext enables developing new cross-platform classes,\n"
"cyclone makes existing classes cross-platform.\n"
"\n"
"Cyclone also comes handy, somewhat, in the task of importing Max/MSP patches\n"
"into Pd.  Do not expect miracles, though, it is usually not an easy task.\n"
"\n"
"The entire cyclone library, which might be preloaded with either -lib cyclone\n"
"or -lib maxmode option, consists of:\n"
"\n"
" * the main hammer and sickle sub-libraries, containing Pd versions of,\n"
"   respectively, Max and MSP classes;\n"
"\n"
" * cyclone sub-library, taking care of loading hammer and sickle, and which\n"
"   itself contains: a small set of operators (!-, !/, ==~, !=~, <~, <=~, >~,\n"
"   >=~, !-~, !/~, %~, +=~); an importing mechanism provided by the cyclone\n"
"   class.\n"
"\n"
" * optional dummies sub-library, which contains a large set of dummy classes,\n"
"   serving as substitutions for Max/MSP classes not (yet) implemented in\n"
"   cyclone;\n"
"\n"
" * maxmode sub-library, which imposes strict compatibility mode, and loads all\n"
"   the other components, including dummies.\n"
"\n"
"The two main sub-libraries might be loaded separately, by using -lib hammer\n"
"and/or -lib sickle options.  There is also a possibility of loading any single\n"
"class from hammer or sickle library dynamically (this feature is only\n"
"available in the linux snapshot).\n"
"\n"
"Currently, the hammer part contains: accum, acos, active, anal, Append (more\n"
"info), asin, bangbang, bondo, Borax, Bucket, buddy, capture, cartopol, Clip,\n"
"coll, comment, cosh, counter, cycle, decide, Decode, drunk, flush, forward,\n"
"fromsymbol, funbuff, funnel, gate, grab, Histo, iter, match, maximum, mean,\n"
"midiflush, midiformat, midiparse, minimum, mousefilter, MouseState, mtr (more\n"
"info), next, offer, onebang, past, Peak, poltocar, prepend (more info), prob,\n"
"pv, seq (more info), sinh, speedlim, spell, split, spray, sprintf, substitute,\n"
"sustain, switch, Table (more info), tanh, thresh, TogEdge, tosymbol, Trough,\n"
"universal, urn, Uzi, xbendin, xbendout, xnotein, xnoteout, and zl.\n"
"\n"
"The sickle part contains: abs~, acos~, acosh~, allpass~, asin~, asinh~, atan~,\n"
"atan2~, atanh~, average~, avg~, bitand~, bitnot~, bitor~, bitshift~, bitxor~,\n"
"buffir~, capture~, cartopol~, change~, click~, Clip~, comb~, cosh~, cosx~,\n"
"count~, curve~, cycle~, delay~, delta~, deltaclip~, edge~, frameaccum~,\n"
"framedelta~, index~, kink~, Line~, linedrive, log~, lookup~, lores~, matrix~\n"
"(more info), maximum~, minimum~, minmax~, mstosamps~, onepole~, peakamp~,\n"
"peek~, phasewrap~, pink~, play~, poke~, poltocar~, pong~, pow~, rampsmooth~,\n"
"rand~, record~, reson~, sah~, sampstoms~, Scope~, sinh~, sinx~, slide~,\n"
"Snapshot~, spike~, svf~, tanh~, tanx~, train~, trapezoid~, triangle~,\n"
"vectral~, wave~, and zerox~.\n"
"\n"
"Cyclone comes without any documentation.  All the included patches were\n"
"created merely for testing.\n"
"\n"
"Caveats:\n"
"\n"
"* The binaries provided in this snapshot release are not expected to run\n"
"  inside of a pre-0.36 version of Pd, without prior recompiling.\n"
"\n"
"* If a single -lib cyclone startup option is used, cyclone in turn loads its\n"
"  two main components: hammer and sickle.  If a single -lib maxmode startup\n"
"  option is used, all the remaining library components are going to be loaded:\n"
"  cyclone, hammer, sickle, and dummies.  In these cases, all the required\n"
"  libraries should be accessible by Pd.\n";

const char* README_txt = (const char*) temp_binary_data_6;

//================== acinclude.m4 ==================
static const unsigned char temp_binary_data_7[] =
"dnl Copyright (C) 2005-2006 IOhannes m zm\xf6lnig\n"
"dnl This file is free software; IOhannes m zm\xf6lnig\n"
"dnl gives unlimited permission to copy and/or distribute it,\n"
"dnl with or without modifications, as long as this notice is preserved.\n"
"\n"
"# AC_CHECK_CPPFLAGS(ADDITIONAL-CPPFLAGS, ACTION-IF-FOUND, ACTION-IF-NOT-FOUND)\n"
"#\n"
"# checks whether the $(C) compiler accepts the ADDITIONAL-CPPFLAGS\n"
"# if so, they are added to the CPPFLAGS\n"
"AC_DEFUN([AC_CHECK_CPPFLAGS],\n"
"[\n"
"  AC_MSG_CHECKING([whether $CPP accepts \"$1\"])\n"
"  temp_check_cppflags=\"${CPPFLAGS}\"\n"
"  CPPFLAGS=\"$1 ${CPPFLAGS}\"\n"
"  AC_PREPROC_IFELSE(\n"
"        [AC_LANG_SOURCE([[int main(void){return 0;}]])],\n"
"        [AC_MSG_RESULT([yes])],\n"
"        [AC_MSG_RESULT([no]); CPPFLAGS=\"${temp_check_cppflags}\"])\n"
"])# AC_CHECK_CPPFLAGS\n"
"\n"
"\n"
"\n"
"# AC_CHECK_CFLAGS(ADDITIONAL-CFLAGS, ACTION-IF-FOUND, ACTION-IF-NOT-FOUND)\n"
"#\n"
"# checks whether the $(C) compiler accepts the ADDITIONAL-CFLAGS\n"
"# if so, they are added to the CFLAGS\n"
"AC_DEFUN([AC_CHECK_CFLAGS],\n"
"[\n"
"  AC_MSG_CHECKING([whether $CC accepts \"$1\"])\n"
"cat > conftest.c << EOF\n"
"int main(){\n"
"  return 0;\n"
"}\n"
"EOF\n"
"if $CC $CFLAGS [$1] -o conftest.o conftest.c > /dev/null 2>&1\n"
"then\n"
"  AC_MSG_RESULT([yes])\n"
"  CFLAGS=\"${CFLAGS} [$1]\"\n"
"  AC_CHECK_CPPFLAGS([$1])\n"
"  [$2]\n"
"else\n"
"  AC_MSG_RESULT([no])\n"
"  [$3]\n"
"fi\n"
"])# AC_CHECK_CFLAGS\n"
"\n"
"# AC_CHECK_CXXFLAGS(ADDITIONAL-CXXFLAGS, ACTION-IF-FOUND, ACTION-IF-NOT-FOUND)\n"
"#\n"
"# checks whether the $(CXX) (c++) compiler accepts the ADDITIONAL-CXXFLAGS\n"
"# if so, they are added to the CXXFLAGS\n"
"AC_DEFUN([AC_CHECK_CXXFLAGS],\n"
"[\n"
"  AC_MSG_CHECKING([whether $CXX accepts \"$1\"])\n"
"cat > conftest.c++ << EOF\n"
"int main(){\n"
"  return 0;\n"
"}\n"
"EOF\n"
"if $CXX $CPPFLAGS $CXXFLAGS -o conftest.o conftest.c++ [$1] > /dev/null 2>&1\n"
"then\n"
"  AC_MSG_RESULT([yes])\n"
"  CXXFLAGS=\"${CXXFLAGS} [$1]\"\n"
"  AC_CHECK_CPPFLAGS([$1])\n"
"  [$2]\n"
"else\n"
"  AC_MSG_RESULT([no])\n"
"  [$3]\n"
"fi\n"
"])# AC_CHECK_CXXFLAGS\n"
"\n"
"# AC_CHECK_FRAMEWORK(FRAMEWORK, ACTION-IF-FOUND, ACTION-IF-NOT-FOUND)\n"
"#\n"
"#\n"
"AC_DEFUN([AC_CHECK_FRAMEWORK],\n"
"[\n"
"  AC_MSG_CHECKING([for \"$1\"-framework])\n"
"\n"
"  temp_check_ldflags_org=\"${LDFLAGS}\"\n"
"  LDFLAGS=\"-framework [$1] ${LDFLAGS}\"\n"
"\n"
"  AC_LINK_IFELSE([AC_LANG_PROGRAM([],[])], [temp_check_ldflags_success=\"yes\"],[temp_check_ldflags_success=\"no\"])\n"
"\n"
"  if test \"x$temp_check_ldflags_success\" = \"xyes\"; then\n"
"    AC_MSG_RESULT([yes])\n"
"    [$2]\n"
"  else\n"
"    AC_MSG_RESULT([no])\n"
"    LDFLAGS=\"$temp_check_ldflags_org\"\n"
"    [$3]\n"
"  fi\n"
"])# AC_CHECK_FRAMEWORK\n"
"\n"
"# AC_CHECK_LDFLAGS(ADDITIONAL-LDFLAGS, ACTION-IF-FOUND, ACTION-IF-NOT-FOUND)\n"
"#\n"
"# checks whether the $(LD) linker accepts the ADDITIONAL-LDFLAGS\n"
"# if so, they are added to the LDFLAGS\n"
"AC_DEFUN([AC_CHECK_LDFLAGS],\n"
"[\n"
"  AC_MSG_CHECKING([whether linker accepts \"$1\"])\n"
"  temp_check_ldflags_org=\"${LDFLAGS}\"\n"
"  LDFLAGS=\"$1 ${LDFLAGS}\"\n"
"\n"
"  AC_LINK_IFELSE([AC_LANG_PROGRAM([],[])], [temp_check_ldflags_success=\"yes\"],[temp_check_ldflags_success=\"no\"])\n"
"\n"
"  if test \"x$temp_check_ldflags_success\" = \"xyes\"; then\n"
"    AC_MSG_RESULT([yes])\n"
"    [$2]\n"
"  else\n"
"    AC_MSG_RESULT([no])\n"
"    LDFLAGS=\"$temp_check_ldflags_org\"\n"
"    [$3]\n"
"  fi\n"
"])# AC_CHECK_LDFLAGS\n"
"\n"
"\n"
"AC_DEFUN([AC_CHECK_FAT],\n"
"[\n"
"AC_ARG_ENABLE(fat-binary,\n"
"       [  --enable-fat-binary=ARCHS\n"
"                          build an Apple Multi Architecture Binary (MAB);\n"
"                          ARCHS is a comma-delimited list of architectures for\n"
"                          which to build; if ARCHS is omitted, then the package\n"
"                          will be built for all architectures supported by the\n"
"                          platform (e.g. \"ppc,i386\" for MacOS/X and Darwin; \n"
"                          if this option is disabled or omitted entirely, then\n"
"                          the package will be built only for the target \n"
"                          platform],\n"
"       [fat_binary=$enableval], [fat_binary=no])\n"
"if test \"$fat_binary\" != no; then\n"
"    AC_MSG_CHECKING([target architectures])\n"
"\n"
"    # Respect TARGET_ARCHS setting from environment if available.\n"
"    if test -z \"$TARGET_ARCHS\"; then\n"
"   \t# Respect ARCH given to --enable-fat-binary if present.\n"
"     if test \"$fat_binary\" != yes; then\n"
"\t    TARGET_ARCHS=`echo \"$fat_binary\" | tr ',' ' '`\n"
"     else\n"
"\t    # Choose a default set of architectures based upon platform.\n"
"      TARGET_ARCHS=\"ppc i386\"\n"
"     fi\n"
"    fi\n"
"    AC_MSG_RESULT([$TARGET_ARCHS])\n"
"\n"
"   define([Name],[translit([$1],[./-], [___])])\n"
"   # /usr/lib/arch_tool -archify_list $TARGET_ARCHS\n"
"   []Name=\"\"\n"
"   for archs in $TARGET_ARCHS \n"
"   do\n"
"    []Name=\"$[]Name -arch $archs\"\n"
"   done\n"
"\n"
"   if test \"x$[]Name\" != \"x\"; then\n"
"    AC_CHECK_CFLAGS($[]Name,,[]Name=\"\")\n"
"   fi\n"
"\n"
"   if test \"x$[]Name\" != \"x\"; then\n"
"    AC_CHECK_LDFLAGS($[]Name,,[]Name=\"\")\n"
"   fi\n"
"\n"
"   undefine([Name])\n"
"fi\n"
"])# AC_CHECK_FAT\n"
"\n"
"AC_DEFUN([AC_CHECK_SIMD],\n"
"[\n"
"AC_ARG_ENABLE(simd,\n"
"       [  --enable-simd=ARCHS\n"
"                          enable SIMD optimization;\n"
"                          valid arguments are: SSE2\n"
"       ],\n"
"       [simd=$enableval], [simd=no])\n"
"if test \"$simd\" != no; then\n"
"   AC_MSG_CHECKING([SIMD optimization])\n"
"\n"
"   # Respect SIMD given to --enable-simd if present.\n"
"   if test \"$simd\" != yes; then\n"
"\t    SIMD=`echo \"$simd\" | tr ',' ' '`\n"
"   else\n"
"\t    # Choose a default set of architectures based upon platform.\n"
"      SIMD=\"SSE2\"\n"
"   fi\n"
"   AC_MSG_RESULT([$SIMD])\n"
"\n"
"   for smd in $SIMD \n"
"   do\n"
"    case \"${smd}\" in\n"
"    SSE2|sse2)\n"
"      AC_CHECK_CFLAGS([-mfpmath=sse -msse])\n"
"    ;;\n"
"    *)\n"
"      AC_MSG_RESULT([unknown SIMD instructions: ${smd}])\n"
"    ;;\n"
"    esac\n"
"   done\n"
"fi\n"
"])# AC_CHECK_SIMD\n";

const char* acinclude_m4 = (const char*) temp_binary_data_7;

//================== alias ==================
static const unsigned char temp_binary_data_8[] =
"a2l\tany2list\n"
"demultiplex~\tdemux~\n"
"demultiplex\tdemux\n"
"drip\tunfold\n"
"list2int\tl2i\n"
"list2symbol\tl2s\n"
"lister\tl\n"
"lpt\tlp\n"
"multiplex~\tmux~\n"
"multiplex\tmux\n"
"symbol2list\ts2l\n";

const char* alias = (const char*) temp_binary_data_8;

//================== bootstrap.sh ==================
static const unsigned char temp_binary_data_9[] =
"#!/bin/sh\n"
"cd .. && ./autogen.sh\n"
"echo \"now run './configure'\n"
"for help on args run './configure --help'\"\n";

const char* bootstrap_sh = (const char*) temp_binary_data_9;

//================== configure ==================
static const unsigned char temp_binary_data_10[] =
"#!/bin/sh\n"
"\n"
"TOPDIR=..\n"
"\n"
"echo \"dummy configure... starting at top: ${TOPDIR}/\"\n"
"\n"
"cd ${TOPDIR}/\n"
"\n"
"\n"
"./configure $@\n";

const char* configure = (const char*) temp_binary_data_10;

//================== makealias.sh ==================
static const unsigned char temp_binary_data_11[] =
"#!/bin/sh\n"
"\n"
"EXTENSIONS=\".pd -help.pd .pd_linux .pd_darwin .pd_freebsd .dll .b_i386 .l_ia64 .l_i386 .d_fat .d_i386 .d_ppc .m_i386\" \n"
"\n"
"ALIASFILE=$1\n"
"shift\n"
"\n"
"if [ \"x$ALIASFILE\" = \"x-clean\" ]\n"
"then\n"
"  CLEANMODE=yes\n"
"  ALIASFILE=$1\n"
"  shift\n"
"else\n"
"  CLEANMODE=\n"
"fi\n"
"\n"
"\n"
"if [ -e \"${ALIASFILE}\" ]; then :; else\n"
" echo cannot find alias-file ${ALIASFILE}\n"
" exit 1\n"
"fi\n"
"\n"
"\n"
"debug() {\n"
" :\n"
"# echo $@\n"
"}\n"
"\n"
"do_makealias() {\n"
" local source\n"
" local dest\n"
"\n"
" source=$1\n"
" dest=$2\n"
"\n"
" if [ \"x${CLEANMODE}\" = \"xyes\" ]\n"
" then\n"
"   if [ -e \"${dest}\" ]; then\n"
"    debug \"removing alias ${dest}\"\n"
"    rm ${dest}\n"
"   else\n"
"     debug \"alias ${dest} does not exist\"\n"
"   fi\n"
" else\n"
"   debug \"aliasing ${source} to ${dest}\"\n"
"   if [ \"x${COPYMODE}\" = \"xyes\" ]\n"
"   then\n"
"    cp ${source} ${dest}\n"
"   else\n"
"    source=${source##*/}\n"
"    ln -s ${source} ${dest}\n"
"   fi\n"
" fi\n"
"}\n"
"\n"
"do_makealiases() {\n"
"  local dir\n"
"  local master\n"
"  local slave\n"
"  local extension\n"
"\n"
"  dir=$1\n"
"  master=$2\n"
"  shift; shift\n"
"\n"
"  if [ \"x${master}\" = \"x\" ]; then\n"
"  # no realname provided\n"
"    return\n"
"  fi\n"
"\n"
"  if [ \"x$@\" = \"x\" ]; then\n"
"  # no aliases provided...\n"
"    return\n"
"  fi\n"
"\n"
"  for extension in ${EXTENSIONS}\n"
"  do\n"
"#   echo \"checking aliases for ${dir}/${master}${extension}\"\n"
"   if [ -f \"${dir}/${master}${extension}\" ]\n"
"   then\n"
"     for slave in $@\n"
"     do\n"
"      do_makealias ${dir}/${master}${extension} ${dir}/${slave}${extension}\n"
"     done\n"
"   fi\n"
"  done\n"
"}\n"
"\n"
"for d in $@\n"
"do\n"
"  if [ -d \"$d\" ]\n"
"  then\n"
"    debug \"scanning directory $d for aliases\"\n"
"    cat ${ALIASFILE} | while read line\n"
"    do\n"
"     do_makealiases $d $line\n"
"    done\n"
"  else\n"
"    echo \"skipping non-directory $d\"\n"
"  fi\n"
"done\n"
"\n";

const char* makealias_sh = (const char*) temp_binary_data_11;

//================== strip_objects ==================
static const unsigned char temp_binary_data_12[] =
"#!/bin/sh\n"
"TMPFILE=/tmp/pdobjects\n"
"touch $TMPFILE\n"
"rm $TMPFILE\n"
"grep --no-filename class_new *.c | awk '{print $3}' >> $TMPFILE\n"
"for i in `cat $TMPFILE`; do i=${i##class_new(gensym(\\\"};  i=${i%%\\\"),}; echo $i ; done | sort -u\n"
"touch $TMPFILE\n"
"rm $TMPFILE\n";

const char* strip_objects = (const char*) temp_binary_data_12;

//================== AUTHORS ==================
static const unsigned char temp_binary_data_13[] =
"Copyright 1999-2011 IOhannes m zmoelnig <zmoelnig@iem.at>\n"
"\n"
"contributions:\n"
"Copyright 1998-2004 matt wright\n"
"Copyright 1999-2000 winfried ritsch\n"
"Copyright 1999      guenter geiger\n"
"Copyright 1996-1999 miller s puckette\n"
"Copyright 2005-2006 tim blechmann\n"
"Copyright 2009-2010 franz zotter\n"
"Copyright 1999-2011 zexy-contributors\n"
"\n"
"\n";

const char* AUTHORS = (const char*) temp_binary_data_13;

//================== autogen.sh ==================
static const unsigned char temp_binary_data_14[] =
"#!/bin/sh\n"
"\n"
"package=zexy\n"
"\n"
"\n"
"KERN=$(uname -s)\n"
"case \"${KERN}\" in\n"
" Darwin)\n"
"   PATH=/sw/bin:${PATH}\n"
"   ;;\n"
" *)\n"
"  ;;\n"
"esac\n"
"\n"
"echo PATH: $PATH\n"
"\n"
"\n"
"AUTORECONF=$(which autoreconf)\n"
"\n"
"AUTOHEADER=$(which autoheader)\n"
"AUTOMAKE=$(which automake)\n"
"ACLOCAL=$(which aclocal)\n"
"LIBTOOL=$(which libtool)\n"
"LIBTOOLIZE=$(which libtoolize)\n"
"AUTOCONF=$(which autoconf)\n"
"\n"
"case \"${KERN}\" in\n"
" MINGW*)\n"
"   AUTORECONF=\"\"\n"
"   ;;\n"
" *)\n"
"  ;;\n"
"esac\n"
"\n"
"\n"
"#check whether the system supports pushd/popd\n"
"if pushd . > /dev/null 2>&1\n"
"then\n"
" popd > /dev/null 2>&1\n"
"else\n"
"## some shells (namely dash) don't support pushd/popd\n"
"## here we provide some dummies\n"
"pushd () {\n"
" echo \"ignoring pushd to $@\"\n"
"}\n"
"\n"
"popd () {\n"
" echo \"ignoring popd ...\"\n"
"}\n"
"fi\n"
"\n"
"\n"
"autoconf_getsubdirs () {\n"
" if [ -e configure.ac ]; then\n"
" cat configure.ac | sed -e 's|#.*$||' | grep AC_CONFIG_SUBDIRS | \\\n"
"\tsed -e 's|^.*AC_CONFIG_SUBDIRS(\\[\\(.*\\)\\]).*$|\\1|'\n"
" fi\n"
"}\n"
"\n"
"runit () {\n"
"echo \"  $@\"\n"
"$@\n"
"}\n"
"\n"
"manual_autoreconf_doit () {\n"
" echo faking autoreconf for $1\n"
" pushd $1\n"
"\n"
"  runit $ACLOCAL -I . -I $BASEDIR/m4 || exit 1\n"
"\n"
"  runit $LIBTOOLIZE --automake -c || exit 1\n"
"\n"
"  runit $AUTOCONF || exit 1\n"
"\n"
"  if test -e configure.ac && grep AC_CONFIG_HEADER configure.ac > /dev/null 2>&1; then\n"
"   runit $AUTOHEADER --force || exit 1\n"
"  fi\n"
"\n"
"  if [ -e Makefile.am ]; then\n"
"   runit $AUTOMAKE --add-missing -c || exit 1\n"
"  fi\n"
" popd\n"
"}\n"
"\n"
"manual_autoreconf () {\n"
" echo faking autoreconf..\n"
" BASEDIR=${0%/*}\n"
" pushd $BASEDIR\n"
" BASEDIR=$(pwd)\n"
" popd\n"
"\n"
" if [ \"x${SUBDIRS}\" = \"x\" ]; then\n"
"  #SUBDIRS=autoconf_getsubdirs\n"
"\n"
"  SUBDIRS=\".\"\n"
" fi\n"
"\n"
"\n"
"# check for all the needed helpers\n"
" DIE=0\n"
"($AUTOCONF --version) < /dev/null > /dev/null 2>&1 || {\n"
"        echo\n"
"        echo \"You must have autoconf installed to compile $package.\"\n"
"        echo \"Download the appropriate package for your distribution,\"\n"
"        echo \"or get the source tarball at ftp://ftp.gnu.org/pub/gnu/\"\n"
"        DIE=1\n"
"}\n"
"\n"
"($AUTOMAKE --version) < /dev/null > /dev/null 2>&1 || {\n"
"        echo\n"
"        echo \"You must have automake installed to compile $package.\"\n"
"        echo \"Download the appropriate package for your system,\"\n"
"        echo \"or get the source from one of the GNU ftp sites\"\n"
"        echo \"listed in http://www.gnu.org/order/ftp.html\"\n"
"        DIE=1\n"
"}\n"
"\n"
"($ACLOCAL --version) < /dev/null > /dev/null 2>&1 || {\n"
"        echo\n"
"        echo \"You must have aclocal installed to compile $package.\"\n"
"        echo \"Download the appropriate package for your system,\"\n"
"        echo \"or get the source from one of the GNU ftp sites\"\n"
"        echo \"listed in http://www.gnu.org/order/ftp.html\"\n"
"        DIE=1\n"
"}\n"
"\n"
"($LIBTOOL --version) < /dev/null > /dev/null 2>&1 || {\n"
"        echo\n"
"        echo \"You must have libtool installed to compile $package.\"\n"
"        echo \"Download the appropriate package for your system,\"\n"
"        echo \"or get the source from one of the GNU ftp sites\"\n"
"        echo \"listed in http://www.gnu.org/order/ftp.html\"\n"
"        DIE=1\n"
"}\n"
"($LIBTOOLIZE --version) < /dev/null > /dev/null 2>&1 || {\n"
"        echo\n"
"        echo \"You must have libtoolize installed to compile $package.\"\n"
"        echo \"Download the appropriate package for your system,\"\n"
"        echo \"or get the source from one of the GNU ftp sites\"\n"
"        echo \"listed in http://www.gnu.org/order/ftp.html\"\n"
"        DIE=1\n"
"}\n"
"\n"
"if test \"$DIE\" -eq 1; then\n"
"        exit 1\n"
"fi\n"
"\n"
"for s in ${SUBDIRS}; do\n"
" manual_autoreconf_doit ${BASEDIR}/${s}\n"
"done\n"
"}\n"
"\n"
"\n"
"if test x$AUTORECONF != x; then\n"
"  echo running autoreconf ${AUTORECONF}\n"
"  $AUTORECONF --force --verbose --install \n"
"else\n"
"  echo not running autoreconf...\n"
"  manual_autoreconf\n"
"fi\n";

const char* autogen_sh = (const char*) temp_binary_data_14;

//================== BUGS.txt ==================
static const unsigned char temp_binary_data_15[] =
"[drip]\n"
"\t- sometimes crashes with small delays\n"
"\t. according to the backtrace this should be a memory corruption\n"
"\t. (actually the crashing patch was buggy by design and i haven't got a simple bug-patch yet)\n"
"        = UNREPRODUCIBLE\n"
"\n"
"[s2l]\n"
"\t- numerically looking sub-symbols are converted wrongly to floats: e.g. \"192.168.0.1\" -> 192,168\n"
"        + FIXED\n";

const char* BUGS_txt = (const char*) temp_binary_data_15;

//================== ChangeLog ==================
static const unsigned char temp_binary_data_16[] =
"zexy (2.2.6) UNRELEASED; urgency=low\n"
"\n"
"  * Fixes NULL-pointer access and file handle leaks\n"
"  * Fixes for autotools\n"
"  * Allow to build both single-object and multiobject binaries in one go\n"
"\t(just use \"--enable-library=both\")\n"
"\n"
" -- IOhannes m zmoelnig (gpg-key at iem) <zmoelnig@iem.at>  Tue, 17 Jan 2012 10:12:13 +0100\n"
"\n"
"zexy (2.2.5) RELEASED; urgency=low\n"
"\n"
"  * switched to autotools\n"
"  * generate ChangeLog with \"dch -c ChangeLog\"\n"
"\n"
" -- IOhannes m zmoelnig (gpg-key at iem) <zmoelnig@iem.at>  Thu, 29 Sep 2011 14:19:18 +0200\n"
"\n"
"zexy (2.2.4) RELEASED; urgency=low\n"
"\n"
"  * disable SIMD code by default (prevent crashes)\n"
"  * [msgfile] does not crash with [add2( on an emtpy buffer\n"
"  * [pack]/[unpack] now accept all messages (like their vanilla counterparts)\n"
"  * [limiter~] on-the-fly oversampling parameters (higher precision)\n"
"  * all code is now UTF-8\n"
"\n"
" -- IOhannes m zmoelnig (gpg-key at iem) <zmoelnig@iem.at>  Wed, 26 Sep 2011 21:20:20 +0200\n";

const char* ChangeLog = (const char*) temp_binary_data_16;

//================== config.guess ==================
static const unsigned char temp_binary_data_17[] =
{ 35,33,32,47,98,105,110,47,115,104,10,35,32,65,116,116,101,109,112,116,32,116,111,32,103,117,101,115,115,32,97,32,99,97,110,111,110,105,99,97,108,32,115,121,115,116,101,109,32,110,97,109,101,46,10,35,32,32,32,67,111,112,121,114,105,103,104,116,32,40,67,
41,32,49,57,57,50,44,32,49,57,57,51,44,32,49,57,57,52,44,32,49,57,57,53,44,32,49,57,57,54,44,32,49,57,57,55,44,32,49,57,57,56,44,32,49,57,57,57,44,10,35,32,32,32,50,48,48,48,44,32,50,48,48,49,44,32,50,48,48,50,44,32,50,48,48,51,44,32,50,48,48,52,44,32,
50,48,48,53,44,32,50,48,48,54,44,32,50,48,48,55,44,32,50,48,48,56,44,32,50,48,48,57,44,32,50,48,49,48,44,10,35,32,32,32,50,48,49,49,44,32,50,48,49,50,32,70,114,101,101,32,83,111,102,116,119,97,114,101,32,70,111,117,110,100,97,116,105,111,110,44,32,73,
110,99,46,10,10,116,105,109,101,115,116,97,109,112,61,39,50,48,49,50,45,48,50,45,49,48,39,10,10,35,32,84,104,105,115,32,102,105,108,101,32,105,115,32,102,114,101,101,32,115,111,102,116,119,97,114,101,59,32,121,111,117,32,99,97,110,32,114,101,100,105,
115,116,114,105,98,117,116,101,32,105,116,32,97,110,100,47,111,114,32,109,111,100,105,102,121,32,105,116,10,35,32,117,110,100,101,114,32,116,104,101,32,116,101,114,109,115,32,111,102,32,116,104,101,32,71,78,85,32,71,101,110,101,114,97,108,32,80,117,98,
108,105,99,32,76,105,99,101,110,115,101,32,97,115,32,112,117,98,108,105,115,104,101,100,32,98,121,10,35,32,116,104,101,32,70,114,101,101,32,83,111,102,116,119,97,114,101,32,70,111,117,110,100,97,116,105,111,110,59,32,101,105,116,104,101,114,32,118,101,
114,115,105,111,110,32,50,32,111,102,32,116,104,101,32,76,105,99,101,110,115,101,44,32,111,114,10,35,32,40,97,116,32,121,111,117,114,32,111,112,116,105,111,110,41,32,97,110,121,32,108,97,116,101,114,32,118,101,114,115,105,111,110,46,10,35,10,35,32,84,
104,105,115,32,112,114,111,103,114,97,109,32,105,115,32,100,105,115,116,114,105,98,117,116,101,100,32,105,110,32,116,104,101,32,104,111,112,101,32,116,104,97,116,32,105,116,32,119,105,108,108,32,98,101,32,117,115,101,102,117,108,44,32,98,117,116,10,35,
32,87,73,84,72,79,85,84,32,65,78,89,32,87,65,82,82,65,78,84,89,59,32,119,105,116,104,111,117,116,32,101,118,101,110,32,116,104,101,32,105,109,112,108,105,101,100,32,119,97,114,114,97,110,116,121,32,111,102,10,35,32,77,69,82,67,72,65,78,84,65,66,73,76,
73,84,89,32,111,114,32,70,73,84,78,69,83,83,32,70,79,82,32,65,32,80,65,82,84,73,67,85,76,65,82,32,80,85,82,80,79,83,69,46,32,32,83,101,101,32,116,104,101,32,71,78,85,10,35,32,71,101,110,101,114,97,108,32,80,117,98,108,105,99,32,76,105,99,101,110,115,
101,32,102,111,114,32,109,111,114,101,32,100,101,116,97,105,108,115,46,10,35,10,35,32,89,111,117,32,115,104,111,117,108,100,32,104,97,118,101,32,114,101,99,101,105,118,101,100,32,97,32,99,111,112,121,32,111,102,32,116,104,101,32,71,78,85,32,71,101,110,
101,114,97,108,32,80,117,98,108,105,99,32,76,105,99,101,110,115,101,10,35,32,97,108,111,110,103,32,119,105,116,104,32,116,104,105,115,32,112,114,111,103,114,97,109,59,32,105,102,32,110,111,116,44,32,115,101,101,32,60,104,116,116,112,58,47,47,119,119,
119,46,103,110,117,46,111,114,103,47,108,105,99,101,110,115,101,115,47,62,46,10,35,10,35,32,65,115,32,97,32,115,112,101,99,105,97,108,32,101,120,99,101,112,116,105,111,110,32,116,111,32,116,104,101,32,71,78,85,32,71,101,110,101,114,97,108,32,80,117,98,
108,105,99,32,76,105,99,101,110,115,101,44,32,105,102,32,121,111,117,10,35,32,100,105,115,116,114,105,98,117,116,101,32,116,104,105,115,32,102,105,108,101,32,97,115,32,112,97,114,116,32,111,102,32,97,32,112,114,111,103,114,97,109,32,116,104,97,116,32,
99,111,110,116,97,105,110,115,32,97,10,35,32,99,111,110,102,105,103,117,114,97,116,105,111,110,32,115,99,114,105,112,116,32,103,101,110,101,114,97,116,101,100,32,98,121,32,65,117,116,111,99,111,110,102,44,32,121,111,117,32,109,97,121,32,105,110,99,108,
117,100,101,32,105,116,32,117,110,100,101,114,10,35,32,116,104,101,32,115,97,109,101,32,100,105,115,116,114,105,98,117,116,105,111,110,32,116,101,114,109,115,32,116,104,97,116,32,121,111,117,32,117,115,101,32,102,111,114,32,116,104,101,32,114,101,115,
116,32,111,102,32,116,104,97,116,32,112,114,111,103,114,97,109,46,10,10,10,35,32,79,114,105,103,105,110,97,108,108,121,32,119,114,105,116,116,101,110,32,98,121,32,80,101,114,32,66,111,116,104,110,101,114,46,32,32,80,108,101,97,115,101,32,115,101,110,
100,32,112,97,116,99,104,101,115,32,40,99,111,110,116,101,120,116,10,35,32,100,105,102,102,32,102,111,114,109,97,116,41,32,116,111,32,60,99,111,110,102,105,103,45,112,97,116,99,104,101,115,64,103,110,117,46,111,114,103,62,32,97,110,100,32,105,110,99,
108,117,100,101,32,97,32,67,104,97,110,103,101,76,111,103,10,35,32,101,110,116,114,121,46,10,35,10,35,32,84,104,105,115,32,115,99,114,105,112,116,32,97,116,116,101,109,112,116,115,32,116,111,32,103,117,101,115,115,32,97,32,99,97,110,111,110,105,99,97,
108,32,115,121,115,116,101,109,32,110,97,109,101,32,115,105,109,105,108,97,114,32,116,111,10,35,32,99,111,110,102,105,103,46,115,117,98,46,32,32,73,102,32,105,116,32,115,117,99,99,101,101,100,115,44,32,105,116,32,112,114,105,110,116,115,32,116,104,101,
32,115,121,115,116,101,109,32,110,97,109,101,32,111,110,32,115,116,100,111,117,116,44,32,97,110,100,10,35,32,101,120,105,116,115,32,119,105,116,104,32,48,46,32,32,79,116,104,101,114,119,105,115,101,44,32,105,116,32,101,120,105,116,115,32,119,105,116,
104,32,49,46,10,35,10,35,32,89,111,117,32,99,97,110,32,103,101,116,32,116,104,101,32,108,97,116,101,115,116,32,118,101,114,115,105,111,110,32,111,102,32,116,104,105,115,32,115,99,114,105,112,116,32,102,114,111,109,58,10,35,32,104,116,116,112,58,47,47,
103,105,116,46,115,97,118,97,110,110,97,104,46,103,110,117,46,111,114,103,47,103,105,116,119,101,98,47,63,112,61,99,111,110,102,105,103,46,103,105,116,59,97,61,98,108,111,98,95,112,108,97,105,110,59,102,61,99,111,110,102,105,103,46,103,117,101,115,115,
59,104,98,61,72,69,65,68,10,10,109,101,61,96,101,99,104,111,32,34,36,48,34,32,124,32,115,101,100,32,45,101,32,39,115,44,46,42,47,44,44,39,96,10,10,117,115,97,103,101,61,34,92,10,85,115,97,103,101,58,32,36,48,32,91,79,80,84,73,79,78,93,10,10,79,117,116,
112,117,116,32,116,104,101,32,99,111,110,102,105,103,117,114,97,116,105,111,110,32,110,97,109,101,32,111,102,32,116,104,101,32,115,121,115,116,101,109,32,92,96,36,109,101,39,32,105,115,32,114,117,110,32,111,110,46,10,10,79,112,101,114,97,116,105,111,
110,32,109,111,100,101,115,58,10,32,32,45,104,44,32,45,45,104,101,108,112,32,32,32,32,32,32,32,32,32,112,114,105,110,116,32,116,104,105,115,32,104,101,108,112,44,32,116,104,101,110,32,101,120,105,116,10,32,32,45,116,44,32,45,45,116,105,109,101,45,115,
116,97,109,112,32,32,32,112,114,105,110,116,32,100,97,116,101,32,111,102,32,108,97,115,116,32,109,111,100,105,102,105,99,97,116,105,111,110,44,32,116,104,101,110,32,101,120,105,116,10,32,32,45,118,44,32,45,45,118,101,114,115,105,111,110,32,32,32,32,32,
32,112,114,105,110,116,32,118,101,114,115,105,111,110,32,110,117,109,98,101,114,44,32,116,104,101,110,32,101,120,105,116,10,10,82,101,112,111,114,116,32,98,117,103,115,32,97,110,100,32,112,97,116,99,104,101,115,32,116,111,32,60,99,111,110,102,105,103,
45,112,97,116,99,104,101,115,64,103,110,117,46,111,114,103,62,46,34,10,10,118,101,114,115,105,111,110,61,34,92,10,71,78,85,32,99,111,110,102,105,103,46,103,117,101,115,115,32,40,36,116,105,109,101,115,116,97,109,112,41,10,10,79,114,105,103,105,110,97,
108,108,121,32,119,114,105,116,116,101,110,32,98,121,32,80,101,114,32,66,111,116,104,110,101,114,46,10,67,111,112,121,114,105,103,104,116,32,40,67,41,32,49,57,57,50,44,32,49,57,57,51,44,32,49,57,57,52,44,32,49,57,57,53,44,32,49,57,57,54,44,32,49,57,57,
55,44,32,49,57,57,56,44,32,49,57,57,57,44,32,50,48,48,48,44,10,50,48,48,49,44,32,50,48,48,50,44,32,50,48,48,51,44,32,50,48,48,52,44,32,50,48,48,53,44,32,50,48,48,54,44,32,50,48,48,55,44,32,50,48,48,56,44,32,50,48,48,57,44,32,50,48,49,48,44,32,50,48,49,
49,44,32,50,48,49,50,10,70,114,101,101,32,83,111,102,116,119,97,114,101,32,70,111,117,110,100,97,116,105,111,110,44,32,73,110,99,46,10,10,84,104,105,115,32,105,115,32,102,114,101,101,32,115,111,102,116,119,97,114,101,59,32,115,101,101,32,116,104,101,
32,115,111,117,114,99,101,32,102,111,114,32,99,111,112,121,105,110,103,32,99,111,110,100,105,116,105,111,110,115,46,32,32,84,104,101,114,101,32,105,115,32,78,79,10,119,97,114,114,97,110,116,121,59,32,110,111,116,32,101,118,101,110,32,102,111,114,32,77,
69,82,67,72,65,78,84,65,66,73,76,73,84,89,32,111,114,32,70,73,84,78,69,83,83,32,70,79,82,32,65,32,80,65,82,84,73,67,85,76,65,82,32,80,85,82,80,79,83,69,46,34,10,10,104,101,108,112,61,34,10,84,114,121,32,92,96,36,109,101,32,45,45,104,101,108,112,39,32,
102,111,114,32,109,111,114,101,32,105,110,102,111,114,109,97,116,105,111,110,46,34,10,10,35,32,80,97,114,115,101,32,99,111,109,109,97,110,100,32,108,105,110,101,10,119,104,105,108,101,32,116,101,115,116,32,36,35,32,45,103,116,32,48,32,59,32,100,111,10,
32,32,99,97,115,101,32,36,49,32,105,110,10,32,32,32,32,45,45,116,105,109,101,45,115,116,97,109,112,32,124,32,45,45,116,105,109,101,42,32,124,32,45,116,32,41,10,32,32,32,32,32,32,32,101,99,104,111,32,34,36,116,105,109,101,115,116,97,109,112,34,32,59,32,
101,120,105,116,32,59,59,10,32,32,32,32,45,45,118,101,114,115,105,111,110,32,124,32,45,118,32,41,10,32,32,32,32,32,32,32,101,99,104,111,32,34,36,118,101,114,115,105,111,110,34,32,59,32,101,120,105,116,32,59,59,10,32,32,32,32,45,45,104,101,108,112,32,
124,32,45,45,104,42,32,124,32,45,104,32,41,10,32,32,32,32,32,32,32,101,99,104,111,32,34,36,117,115,97,103,101,34,59,32,101,120,105,116,32,59,59,10,32,32,32,32,45,45,32,41,32,32,32,32,32,35,32,83,116,111,112,32,111,112,116,105,111,110,32,112,114,111,99,
101,115,115,105,110,103,10,32,32,32,32,32,32,32,115,104,105,102,116,59,32,98,114,101,97,107,32,59,59,10,32,32,32,32,45,32,41,9,35,32,85,115,101,32,115,116,100,105,110,32,97,115,32,105,110,112,117,116,46,10,32,32,32,32,32,32,32,98,114,101,97,107,32,59,
59,10,32,32,32,32,45,42,32,41,10,32,32,32,32,32,32,32,101,99,104,111,32,34,36,109,101,58,32,105,110,118,97,108,105,100,32,111,112,116,105,111,110,32,36,49,36,104,101,108,112,34,32,62,38,50,10,32,32,32,32,32,32,32,101,120,105,116,32,49,32,59,59,10,32,
32,32,32,42,32,41,10,32,32,32,32,32,32,32,98,114,101,97,107,32,59,59,10,32,32,101,115,97,99,10,100,111,110,101,10,10,105,102,32,116,101,115,116,32,36,35,32,33,61,32,48,59,32,116,104,101,110,10,32,32,101,99,104,111,32,34,36,109,101,58,32,116,111,111,32,
109,97,110,121,32,97,114,103,117,109,101,110,116,115,36,104,101,108,112,34,32,62,38,50,10,32,32,101,120,105,116,32,49,10,102,105,10,10,116,114,97,112,32,39,101,120,105,116,32,49,39,32,49,32,50,32,49,53,10,10,35,32,67,67,95,70,79,82,95,66,85,73,76,68,
32,45,45,32,99,111,109,112,105,108,101,114,32,117,115,101,100,32,98,121,32,116,104,105,115,32,115,99,114,105,112,116,46,32,78,111,116,101,32,116,104,97,116,32,116,104,101,32,117,115,101,32,111,102,32,97,10,35,32,99,111,109,112,105,108,101,114,32,116,
111,32,97,105,100,32,105,110,32,115,121,115,116,101,109,32,100,101,116,101,99,116,105,111,110,32,105,115,32,100,105,115,99,111,117,114,97,103,101,100,32,97,115,32,105,116,32,114,101,113,117,105,114,101,115,10,35,32,116,101,109,112,111,114,97,114,121,
32,102,105,108,101,115,32,116,111,32,98,101,32,99,114,101,97,116,101,100,32,97,110,100,44,32,97,115,32,121,111,117,32,99,97,110,32,115,101,101,32,98,101,108,111,119,44,32,105,116,32,105,115,32,97,10,35,32,104,101,97,100,97,99,104,101,32,116,111,32,100,
101,97,108,32,119,105,116,104,32,105,110,32,97,32,112,111,114,116,97,98,108,101,32,102,97,115,104,105,111,110,46,10,10,35,32,72,105,115,116,111,114,105,99,97,108,108,121,44,32,96,67,67,95,70,79,82,95,66,85,73,76,68,39,32,117,115,101,100,32,116,111,32,
98,101,32,110,97,109,101,100,32,96,72,79,83,84,95,67,67,39,46,32,87,101,32,115,116,105,108,108,10,35,32,117,115,101,32,96,72,79,83,84,95,67,67,39,32,105,102,32,100,101,102,105,110,101,100,44,32,98,117,116,32,105,116,32,105,115,32,100,101,112,114,101,
99,97,116,101,100,46,10,10,35,32,80,111,114,116,97,98,108,101,32,116,109,112,32,100,105,114,101,99,116,111,114,121,32,99,114,101,97,116,105,111,110,32,105,110,115,112,105,114,101,100,32,98,121,32,116,104,101,32,65,117,116,111,99,111,110,102,32,116,101,
97,109,46,10,10,115,101,116,95,99,99,95,102,111,114,95,98,117,105,108,100,61,39,10,116,114,97,112,32,34,101,120,105,116,99,111,100,101,61,92,36,63,59,32,40,114,109,32,45,102,32,92,36,116,109,112,102,105,108,101,115,32,50,62,47,100,101,118,47,110,117,
108,108,59,32,114,109,100,105,114,32,92,36,116,109,112,32,50,62,47,100,101,118,47,110,117,108,108,41,32,38,38,32,101,120,105,116,32,92,36,101,120,105,116,99,111,100,101,34,32,48,32,59,10,116,114,97,112,32,34,114,109,32,45,102,32,92,36,116,109,112,102,
105,108,101,115,32,50,62,47,100,101,118,47,110,117,108,108,59,32,114,109,100,105,114,32,92,36,116,109,112,32,50,62,47,100,101,118,47,110,117,108,108,59,32,101,120,105,116,32,49,34,32,49,32,50,32,49,51,32,49,53,32,59,10,58,32,36,123,84,77,80,68,73,82,
61,47,116,109,112,125,32,59,10,32,123,32,116,109,112,61,96,40,117,109,97,115,107,32,48,55,55,32,38,38,32,109,107,116,101,109,112,32,45,100,32,34,36,84,77,80,68,73,82,47,99,103,88,88,88,88,88,88,34,41,32,50,62,47,100,101,118,47,110,117,108,108,96,32,38,
38,32,116,101,115,116,32,45,110,32,34,36,116,109,112,34,32,38,38,32,116,101,115,116,32,45,100,32,34,36,116,109,112,34,32,59,32,125,32,124,124,10,32,123,32,116,101,115,116,32,45,110,32,34,36,82,65,78,68,79,77,34,32,38,38,32,116,109,112,61,36,84,77,80,
68,73,82,47,99,103,36,36,45,36,82,65,78,68,79,77,32,38,38,32,40,117,109,97,115,107,32,48,55,55,32,38,38,32,109,107,100,105,114,32,36,116,109,112,41,32,59,32,125,32,124,124,10,32,123,32,116,109,112,61,36,84,77,80,68,73,82,47,99,103,45,36,36,32,38,38,32,
40,117,109,97,115,107,32,48,55,55,32,38,38,32,109,107,100,105,114,32,36,116,109,112,41,32,38,38,32,101,99,104,111,32,34,87,97,114,110,105,110,103,58,32,99,114,101,97,116,105,110,103,32,105,110,115,101,99,117,114,101,32,116,101,109,112,32,100,105,114,
101,99,116,111,114,121,34,32,62,38,50,32,59,32,125,32,124,124,10,32,123,32,101,99,104,111,32,34,36,109,101,58,32,99,97,110,110,111,116,32,99,114,101,97,116,101,32,97,32,116,101,109,112,111,114,97,114,121,32,100,105,114,101,99,116,111,114,121,32,105,110,
32,36,84,77,80,68,73,82,34,32,62,38,50,32,59,32,101,120,105,116,32,49,32,59,32,125,32,59,10,100,117,109,109,121,61,36,116,109,112,47,100,117,109,109,121,32,59,10,116,109,112,102,105,108,101,115,61,34,36,100,117,109,109,121,46,99,32,36,100,117,109,109,
121,46,111,32,36,100,117,109,109,121,46,114,101,108,32,36,100,117,109,109,121,34,32,59,10,99,97,115,101,32,36,67,67,95,70,79,82,95,66,85,73,76,68,44,36,72,79,83,84,95,67,67,44,36,67,67,32,105,110,10,32,44,44,41,32,32,32,32,101,99,104,111,32,34,105,110,
116,32,120,59,34,32,62,32,36,100,117,109,109,121,46,99,32,59,10,9,102,111,114,32,99,32,105,110,32,99,99,32,103,99,99,32,99,56,57,32,99,57,57,32,59,32,100,111,10,9,32,32,105,102,32,40,36,99,32,45,99,32,45,111,32,36,100,117,109,109,121,46,111,32,36,100,
117,109,109,121,46,99,41,32,62,47,100,101,118,47,110,117,108,108,32,50,62,38,49,32,59,32,116,104,101,110,10,9,32,32,32,32,32,67,67,95,70,79,82,95,66,85,73,76,68,61,34,36,99,34,59,32,98,114,101,97,107,32,59,10,9,32,32,102,105,32,59,10,9,100,111,110,101,
32,59,10,9,105,102,32,116,101,115,116,32,120,34,36,67,67,95,70,79,82,95,66,85,73,76,68,34,32,61,32,120,32,59,32,116,104,101,110,10,9,32,32,67,67,95,70,79,82,95,66,85,73,76,68,61,110,111,95,99,111,109,112,105,108,101,114,95,102,111,117,110,100,32,59,10,
9,102,105,10,9,59,59,10,32,44,44,42,41,32,32,32,67,67,95,70,79,82,95,66,85,73,76,68,61,36,67,67,32,59,59,10,32,44,42,44,42,41,32,32,67,67,95,70,79,82,95,66,85,73,76,68,61,36,72,79,83,84,95,67,67,32,59,59,10,101,115,97,99,32,59,32,115,101,116,95,99,99,
95,102,111,114,95,98,117,105,108,100,61,32,59,39,10,10,35,32,84,104,105,115,32,105,115,32,110,101,101,100,101,100,32,116,111,32,102,105,110,100,32,117,110,97,109,101,32,111,110,32,97,32,80,121,114,97,109,105,100,32,79,83,120,32,119,104,101,110,32,114,
117,110,32,105,110,32,116,104,101,32,66,83,68,32,117,110,105,118,101,114,115,101,46,10,35,32,40,103,104,97,122,105,64,110,111,99,46,114,117,116,103,101,114,115,46,101,100,117,32,49,57,57,52,45,48,56,45,50,52,41,10,105,102,32,40,116,101,115,116,32,45,
102,32,47,46,97,116,116,98,105,110,47,117,110,97,109,101,41,32,62,47,100,101,118,47,110,117,108,108,32,50,62,38,49,32,59,32,116,104,101,110,10,9,80,65,84,72,61,36,80,65,84,72,58,47,46,97,116,116,98,105,110,32,59,32,101,120,112,111,114,116,32,80,65,84,
72,10,102,105,10,10,85,78,65,77,69,95,77,65,67,72,73,78,69,61,96,40,117,110,97,109,101,32,45,109,41,32,50,62,47,100,101,118,47,110,117,108,108,96,32,124,124,32,85,78,65,77,69,95,77,65,67,72,73,78,69,61,117,110,107,110,111,119,110,10,85,78,65,77,69,95,
82,69,76,69,65,83,69,61,96,40,117,110,97,109,101,32,45,114,41,32,50,62,47,100,101,118,47,110,117,108,108,96,32,124,124,32,85,78,65,77,69,95,82,69,76,69,65,83,69,61,117,110,107,110,111,119,110,10,85,78,65,77,69,95,83,89,83,84,69,77,61,96,40,117,110,97,
109,101,32,45,115,41,32,50,62,47,100,101,118,47,110,117,108,108,96,32,32,124,124,32,85,78,65,77,69,95,83,89,83,84,69,77,61,117,110,107,110,111,119,110,10,85,78,65,77,69,95,86,69,82,83,73,79,78,61,96,40,117,110,97,109,101,32,45,118,41,32,50,62,47,100,
101,118,47,110,117,108,108,96,32,124,124,32,85,78,65,77,69,95,86,69,82,83,73,79,78,61,117,110,107,110,111,119,110,10,10,35,32,78,111,116,101,58,32,111,114,100,101,114,32,105,115,32,115,105,103,110,105,102,105,99,97,110,116,32,45,32,116,104,101,32,99,
97,115,101,32,98,114,97,110,99,104,101,115,32,97,114,101,32,110,111,116,32,101,120,99,108,117,115,105,118,101,46,10,10,99,97,115,101,32,34,36,123,85,78,65,77,69,95,77,65,67,72,73,78,69,125,58,36,123,85,78,65,77,69,95,83,89,83,84,69,77,125,58,36,123,85,
78,65,77,69,95,82,69,76,69,65,83,69,125,58,36,123,85,78,65,77,69,95,86,69,82,83,73,79,78,125,34,32,105,110,10,32,32,32,32,42,58,78,101,116,66,83,68,58,42,58,42,41,10,9,35,32,78,101,116,66,83,68,32,40,110,98,115,100,41,32,116,97,114,103,101,116,115,32,
115,104,111,117,108,100,32,40,119,104,101,114,101,32,97,112,112,108,105,99,97,98,108,101,41,32,109,97,116,99,104,32,111,110,101,32,111,114,10,9,35,32,109,111,114,101,32,111,102,32,116,104,101,32,116,117,112,108,101,115,58,32,42,45,42,45,110,101,116,98,
115,100,101,108,102,42,44,32,42,45,42,45,110,101,116,98,115,100,97,111,117,116,42,44,10,9,35,32,42,45,42,45,110,101,116,98,115,100,101,99,111,102,102,42,32,97,110,100,32,42,45,42,45,110,101,116,98,115,100,42,46,32,32,70,111,114,32,116,97,114,103,101,
116,115,32,116,104,97,116,32,114,101,99,101,110,116,108,121,10,9,35,32,115,119,105,116,99,104,101,100,32,116,111,32,69,76,70,44,32,42,45,42,45,110,101,116,98,115,100,42,32,119,111,117,108,100,32,115,101,108,101,99,116,32,116,104,101,32,111,108,100,10,
9,35,32,111,98,106,101,99,116,32,102,105,108,101,32,102,111,114,109,97,116,46,32,32,84,104,105,115,32,112,114,111,118,105,100,101,115,32,98,111,116,104,32,102,111,114,119,97,114,100,10,9,35,32,99,111,109,112,97,116,105,98,105,108,105,116,121,32,97,110,
100,32,97,32,99,111,110,115,105,115,116,101,110,116,32,109,101,99,104,97,110,105,115,109,32,102,111,114,32,115,101,108,101,99,116,105,110,103,32,116,104,101,10,9,35,32,111,98,106,101,99,116,32,102,105,108,101,32,102,111,114,109,97,116,46,10,9,35,10,9,
35,32,78,111,116,101,58,32,78,101,116,66,83,68,32,100,111,101,115,110,39,116,32,112,97,114,116,105,99,117,108,97,114,108,121,32,99,97,114,101,32,97,98,111,117,116,32,116,104,101,32,118,101,110,100,111,114,10,9,35,32,112,111,114,116,105,111,110,32,111,
102,32,116,104,101,32,110,97,109,101,46,32,32,87,101,32,97,108,119,97,121,115,32,115,101,116,32,105,116,32,116,111,32,34,117,110,107,110,111,119,110,34,46,10,9,115,121,115,99,116,108,61,34,115,121,115,99,116,108,32,45,110,32,104,119,46,109,97,99,104,
105,110,101,95,97,114,99,104,34,10,9,85,78,65,77,69,95,77,65,67,72,73,78,69,95,65,82,67,72,61,96,40,47,115,98,105,110,47,36,115,121,115,99,116,108,32,50,62,47,100,101,118,47,110,117,108,108,32,124,124,32,92,10,9,32,32,32,32,47,117,115,114,47,115,98,105,
110,47,36,115,121,115,99,116,108,32,50,62,47,100,101,118,47,110,117,108,108,32,124,124,32,101,99,104,111,32,117,110,107,110,111,119,110,41,96,10,9,99,97,115,101,32,34,36,123,85,78,65,77,69,95,77,65,67,72,73,78,69,95,65,82,67,72,125,34,32,105,110,10,9,
32,32,32,32,97,114,109,101,98,41,32,109,97,99,104,105,110,101,61,97,114,109,101,98,45,117,110,107,110,111,119,110,32,59,59,10,9,32,32,32,32,97,114,109,42,41,32,109,97,99,104,105,110,101,61,97,114,109,45,117,110,107,110,111,119,110,32,59,59,10,9,32,32,
32,32,115,104,51,101,108,41,32,109,97,99,104,105,110,101,61,115,104,108,45,117,110,107,110,111,119,110,32,59,59,10,9,32,32,32,32,115,104,51,101,98,41,32,109,97,99,104,105,110,101,61,115,104,45,117,110,107,110,111,119,110,32,59,59,10,9,32,32,32,32,115,
104,53,101,108,41,32,109,97,99,104,105,110,101,61,115,104,53,108,101,45,117,110,107,110,111,119,110,32,59,59,10,9,32,32,32,32,42,41,32,109,97,99,104,105,110,101,61,36,123,85,78,65,77,69,95,77,65,67,72,73,78,69,95,65,82,67,72,125,45,117,110,107,110,111,
119,110,32,59,59,10,9,101,115,97,99,10,9,35,32,84,104,101,32,79,112,101,114,97,116,105,110,103,32,83,121,115,116,101,109,32,105,110,99,108,117,100,105,110,103,32,111,98,106,101,99,116,32,102,111,114,109,97,116,44,32,105,102,32,105,116,32,104,97,115,32,
115,119,105,116,99,104,101,100,10,9,35,32,116,111,32,69,76,70,32,114,101,99,101,110,116,108,121,44,32,111,114,32,119,105,108,108,32,105,110,32,116,104,101,32,102,117,116,117,114,101,46,10,9,99,97,115,101,32,34,36,123,85,78,65,77,69,95,77,65,67,72,73,
78,69,95,65,82,67,72,125,34,32,105,110,10,9,32,32,32,32,97,114,109,42,124,105,51,56,54,124,109,54,56,107,124,110,115,51,50,107,124,115,104,51,42,124,115,112,97,114,99,124,118,97,120,41,10,9,9,101,118,97,108,32,36,115,101,116,95,99,99,95,102,111,114,95,
98,117,105,108,100,10,9,9,105,102,32,101,99,104,111,32,95,95,69,76,70,95,95,32,124,32,36,67,67,95,70,79,82,95,66,85,73,76,68,32,45,69,32,45,32,50,62,47,100,101,118,47,110,117,108,108,32,92,10,9,9,9,124,32,103,114,101,112,32,45,113,32,95,95,69,76,70,95,
95,10,9,9,116,104,101,110,10,9,9,32,32,32,32,35,32,79,110,99,101,32,97,108,108,32,117,116,105,108,105,116,105,101,115,32,99,97,110,32,98,101,32,69,67,79,70,70,32,40,110,101,116,98,115,100,101,99,111,102,102,41,32,111,114,32,97,46,111,117,116,32,40,110,
101,116,98,115,100,97,111,117,116,41,46,10,9,9,32,32,32,32,35,32,82,101,116,117,114,110,32,110,101,116,98,115,100,32,102,111,114,32,101,105,116,104,101,114,46,32,32,70,73,88,63,10,9,9,32,32,32,32,111,115,61,110,101,116,98,115,100,10,9,9,101,108,115,101,
10,9,9,32,32,32,32,111,115,61,110,101,116,98,115,100,101,108,102,10,9,9,102,105,10,9,9,59,59,10,9,32,32,32,32,42,41,10,9,9,111,115,61,110,101,116,98,115,100,10,9,9,59,59,10,9,101,115,97,99,10,9,35,32,84,104,101,32,79,83,32,114,101,108,101,97,115,101,
10,9,35,32,68,101,98,105,97,110,32,71,78,85,47,78,101,116,66,83,68,32,109,97,99,104,105,110,101,115,32,104,97,118,101,32,97,32,100,105,102,102,101,114,101,110,116,32,117,115,101,114,108,97,110,100,44,32,97,110,100,10,9,35,32,116,104,117,115,44,32,110,
101,101,100,32,97,32,100,105,115,116,105,110,99,116,32,116,114,105,112,108,101,116,46,32,72,111,119,101,118,101,114,44,32,116,104,101,121,32,100,111,32,110,111,116,32,110,101,101,100,10,9,35,32,107,101,114,110,101,108,32,118,101,114,115,105,111,110,32,
105,110,102,111,114,109,97,116,105,111,110,44,32,115,111,32,105,116,32,99,97,110,32,98,101,32,114,101,112,108,97,99,101,100,32,119,105,116,104,32,97,10,9,35,32,115,117,105,116,97,98,108,101,32,116,97,103,44,32,105,110,32,116,104,101,32,115,116,121,108,
101,32,111,102,32,108,105,110,117,120,45,103,110,117,46,10,9,99,97,115,101,32,34,36,123,85,78,65,77,69,95,86,69,82,83,73,79,78,125,34,32,105,110,10,9,32,32,32,32,68,101,98,105,97,110,42,41,10,9,9,114,101,108,101,97,115,101,61,39,45,103,110,117,39,10,
9,9,59,59,10,9,32,32,32,32,42,41,10,9,9,114,101,108,101,97,115,101,61,96,101,99,104,111,32,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,124,115,101,100,32,45,101,32,39,115,47,91,45,95,93,46,42,47,92,46,47,39,96,10,9,9,59,59,10,9,101,115,97,99,10,
9,35,32,83,105,110,99,101,32,67,80,85,95,84,89,80,69,45,77,65,78,85,70,65,67,84,85,82,69,82,45,75,69,82,78,69,76,45,79,80,69,82,65,84,73,78,71,95,83,89,83,84,69,77,58,10,9,35,32,99,111,110,116,97,105,110,115,32,114,101,100,117,110,100,97,110,116,32,105,
110,102,111,114,109,97,116,105,111,110,44,32,116,104,101,32,115,104,111,114,116,101,114,32,102,111,114,109,58,10,9,35,32,67,80,85,95,84,89,80,69,45,77,65,78,85,70,65,67,84,85,82,69,82,45,79,80,69,82,65,84,73,78,71,95,83,89,83,84,69,77,32,105,115,32,117,
115,101,100,46,10,9,101,99,104,111,32,34,36,123,109,97,99,104,105,110,101,125,45,36,123,111,115,125,36,123,114,101,108,101,97,115,101,125,34,10,9,101,120,105,116,32,59,59,10,32,32,32,32,42,58,79,112,101,110,66,83,68,58,42,58,42,41,10,9,85,78,65,77,69,
95,77,65,67,72,73,78,69,95,65,82,67,72,61,96,97,114,99,104,32,124,32,115,101,100,32,39,115,47,79,112,101,110,66,83,68,46,47,47,39,96,10,9,101,99,104,111,32,36,123,85,78,65,77,69,95,77,65,67,72,73,78,69,95,65,82,67,72,125,45,117,110,107,110,111,119,110,
45,111,112,101,110,98,115,100,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,10,9,101,120,105,116,32,59,59,10,32,32,32,32,42,58,101,107,107,111,66,83,68,58,42,58,42,41,10,9,101,99,104,111,32,36,123,85,78,65,77,69,95,77,65,67,72,73,78,69,125,45,117,
110,107,110,111,119,110,45,101,107,107,111,98,115,100,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,10,9,101,120,105,116,32,59,59,10,32,32,32,32,42,58,83,111,108,105,100,66,83,68,58,42,58,42,41,10,9,101,99,104,111,32,36,123,85,78,65,77,69,95,77,65,
67,72,73,78,69,125,45,117,110,107,110,111,119,110,45,115,111,108,105,100,98,115,100,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,10,9,101,120,105,116,32,59,59,10,32,32,32,32,109,97,99,112,112,99,58,77,105,114,66,83,68,58,42,58,42,41,10,9,101,99,
104,111,32,112,111,119,101,114,112,99,45,117,110,107,110,111,119,110,45,109,105,114,98,115,100,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,10,9,101,120,105,116,32,59,59,10,32,32,32,32,42,58,77,105,114,66,83,68,58,42,58,42,41,10,9,101,99,104,111,
32,36,123,85,78,65,77,69,95,77,65,67,72,73,78,69,125,45,117,110,107,110,111,119,110,45,109,105,114,98,115,100,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,10,9,101,120,105,116,32,59,59,10,32,32,32,32,97,108,112,104,97,58,79,83,70,49,58,42,58,42,
41,10,9,99,97,115,101,32,36,85,78,65,77,69,95,82,69,76,69,65,83,69,32,105,110,10,9,42,52,46,48,41,10,9,9,85,78,65,77,69,95,82,69,76,69,65,83,69,61,96,47,117,115,114,47,115,98,105,110,47,115,105,122,101,114,32,45,118,32,124,32,97,119,107,32,39,123,112,
114,105,110,116,32,36,51,125,39,96,10,9,9,59,59,10,9,42,53,46,42,41,10,9,9,85,78,65,77,69,95,82,69,76,69,65,83,69,61,96,47,117,115,114,47,115,98,105,110,47,115,105,122,101,114,32,45,118,32,124,32,97,119,107,32,39,123,112,114,105,110,116,32,36,52,125,
39,96,10,9,9,59,59,10,9,101,115,97,99,10,9,35,32,65,99,99,111,114,100,105,110,103,32,116,111,32,67,111,109,112,97,113,44,32,47,117,115,114,47,115,98,105,110,47,112,115,114,105,110,102,111,32,104,97,115,32,98,101,101,110,32,97,118,97,105,108,97,98,108,
101,32,111,110,10,9,35,32,79,83,70,47,49,32,97,110,100,32,84,114,117,54,52,32,115,121,115,116,101,109,115,32,112,114,111,100,117,99,101,100,32,115,105,110,99,101,32,49,57,57,53,46,32,32,73,32,104,111,112,101,32,116,104,97,116,10,9,35,32,99,111,118,101,
114,115,32,109,111,115,116,32,115,121,115,116,101,109,115,32,114,117,110,110,105,110,103,32,116,111,100,97,121,46,32,32,84,104,105,115,32,99,111,100,101,32,112,105,112,101,115,32,116,104,101,32,67,80,85,10,9,35,32,116,121,112,101,115,32,116,104,114,111,
117,103,104,32,104,101,97,100,32,45,110,32,49,44,32,115,111,32,119,101,32,111,110,108,121,32,100,101,116,101,99,116,32,116,104,101,32,116,121,112,101,32,111,102,32,67,80,85,32,48,46,10,9,65,76,80,72,65,95,67,80,85,95,84,89,80,69,61,96,47,117,115,114,
47,115,98,105,110,47,112,115,114,105,110,102,111,32,45,118,32,124,32,115,101,100,32,45,110,32,45,101,32,39,115,47,94,32,32,84,104,101,32,97,108,112,104,97,32,92,40,46,42,92,41,32,112,114,111,99,101,115,115,111,114,46,42,36,47,92,49,47,112,39,32,124,32,
104,101,97,100,32,45,110,32,49,96,10,9,99,97,115,101,32,34,36,65,76,80,72,65,95,67,80,85,95,84,89,80,69,34,32,105,110,10,9,32,32,32,32,34,69,86,52,32,40,50,49,48,54,52,41,34,41,10,9,9,85,78,65,77,69,95,77,65,67,72,73,78,69,61,34,97,108,112,104,97,34,
32,59,59,10,9,32,32,32,32,34,69,86,52,46,53,32,40,50,49,48,54,52,41,34,41,10,9,9,85,78,65,77,69,95,77,65,67,72,73,78,69,61,34,97,108,112,104,97,34,32,59,59,10,9,32,32,32,32,34,76,67,65,52,32,40,50,49,48,54,54,47,50,49,48,54,56,41,34,41,10,9,9,85,78,65,
77,69,95,77,65,67,72,73,78,69,61,34,97,108,112,104,97,34,32,59,59,10,9,32,32,32,32,34,69,86,53,32,40,50,49,49,54,52,41,34,41,10,9,9,85,78,65,77,69,95,77,65,67,72,73,78,69,61,34,97,108,112,104,97,101,118,53,34,32,59,59,10,9,32,32,32,32,34,69,86,53,46,
54,32,40,50,49,49,54,52,65,41,34,41,10,9,9,85,78,65,77,69,95,77,65,67,72,73,78,69,61,34,97,108,112,104,97,101,118,53,54,34,32,59,59,10,9,32,32,32,32,34,69,86,53,46,54,32,40,50,49,49,54,52,80,67,41,34,41,10,9,9,85,78,65,77,69,95,77,65,67,72,73,78,69,61,
34,97,108,112,104,97,112,99,97,53,54,34,32,59,59,10,9,32,32,32,32,34,69,86,53,46,55,32,40,50,49,49,54,52,80,67,41,34,41,10,9,9,85,78,65,77,69,95,77,65,67,72,73,78,69,61,34,97,108,112,104,97,112,99,97,53,55,34,32,59,59,10,9,32,32,32,32,34,69,86,54,32,
40,50,49,50,54,52,41,34,41,10,9,9,85,78,65,77,69,95,77,65,67,72,73,78,69,61,34,97,108,112,104,97,101,118,54,34,32,59,59,10,9,32,32,32,32,34,69,86,54,46,55,32,40,50,49,50,54,52,65,41,34,41,10,9,9,85,78,65,77,69,95,77,65,67,72,73,78,69,61,34,97,108,112,
104,97,101,118,54,55,34,32,59,59,10,9,32,32,32,32,34,69,86,54,46,56,67,66,32,40,50,49,50,54,52,67,41,34,41,10,9,9,85,78,65,77,69,95,77,65,67,72,73,78,69,61,34,97,108,112,104,97,101,118,54,56,34,32,59,59,10,9,32,32,32,32,34,69,86,54,46,56,65,76,32,40,
50,49,50,54,52,66,41,34,41,10,9,9,85,78,65,77,69,95,77,65,67,72,73,78,69,61,34,97,108,112,104,97,101,118,54,56,34,32,59,59,10,9,32,32,32,32,34,69,86,54,46,56,67,88,32,40,50,49,50,54,52,68,41,34,41,10,9,9,85,78,65,77,69,95,77,65,67,72,73,78,69,61,34,97,
108,112,104,97,101,118,54,56,34,32,59,59,10,9,32,32,32,32,34,69,86,54,46,57,65,32,40,50,49,50,54,52,47,69,86,54,57,65,41,34,41,10,9,9,85,78,65,77,69,95,77,65,67,72,73,78,69,61,34,97,108,112,104,97,101,118,54,57,34,32,59,59,10,9,32,32,32,32,34,69,86,55,
32,40,50,49,51,54,52,41,34,41,10,9,9,85,78,65,77,69,95,77,65,67,72,73,78,69,61,34,97,108,112,104,97,101,118,55,34,32,59,59,10,9,32,32,32,32,34,69,86,55,46,57,32,40,50,49,51,54,52,65,41,34,41,10,9,9,85,78,65,77,69,95,77,65,67,72,73,78,69,61,34,97,108,
112,104,97,101,118,55,57,34,32,59,59,10,9,101,115,97,99,10,9,35,32,65,32,80,110,46,110,32,118,101,114,115,105,111,110,32,105,115,32,97,32,112,97,116,99,104,101,100,32,118,101,114,115,105,111,110,46,10,9,35,32,65,32,86,110,46,110,32,118,101,114,115,105,
111,110,32,105,115,32,97,32,114,101,108,101,97,115,101,100,32,118,101,114,115,105,111,110,46,10,9,35,32,65,32,84,110,46,110,32,118,101,114,115,105,111,110,32,105,115,32,97,32,114,101,108,101,97,115,101,100,32,102,105,101,108,100,32,116,101,115,116,32,
118,101,114,115,105,111,110,46,10,9,35,32,65,32,88,110,46,110,32,118,101,114,115,105,111,110,32,105,115,32,97,110,32,117,110,114,101,108,101,97,115,101,100,32,101,120,112,101,114,105,109,101,110,116,97,108,32,98,97,115,101,108,101,118,101,108,46,10,9,
35,32,49,46,50,32,117,115,101,115,32,34,49,46,50,34,32,102,111,114,32,117,110,97,109,101,32,45,114,46,10,9,101,99,104,111,32,36,123,85,78,65,77,69,95,77,65,67,72,73,78,69,125,45,100,101,99,45,111,115,102,96,101,99,104,111,32,36,123,85,78,65,77,69,95,
82,69,76,69,65,83,69,125,32,124,32,115,101,100,32,45,101,32,39,115,47,94,91,80,86,84,88,93,47,47,39,32,124,32,116,114,32,39,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,39,32,39,97,98,99,100,101,102,103,104,105,106,107,
108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,39,96,10,9,35,32,82,101,115,101,116,32,69,88,73,84,32,116,114,97,112,32,98,101,102,111,114,101,32,101,120,105,116,105,110,103,32,116,111,32,97,118,111,105,100,32,115,112,117,114,105,111,117,
115,32,110,111,110,45,122,101,114,111,32,101,120,105,116,32,99,111,100,101,46,10,9,101,120,105,116,99,111,100,101,61,36,63,10,9,116,114,97,112,32,39,39,32,48,10,9,101,120,105,116,32,36,101,120,105,116,99,111,100,101,32,59,59,10,32,32,32,32,65,108,112,
104,97,92,32,42,58,87,105,110,100,111,119,115,95,78,84,42,58,42,41,10,9,35,32,72,111,119,32,100,111,32,119,101,32,107,110,111,119,32,105,116,39,115,32,73,110,116,101,114,105,120,32,114,97,116,104,101,114,32,116,104,97,110,32,116,104,101,32,103,101,110,
101,114,105,99,32,80,79,83,73,88,32,115,117,98,115,121,115,116,101,109,63,10,9,35,32,83,104,111,117,108,100,32,119,101,32,99,104,97,110,103,101,32,85,78,65,77,69,95,77,65,67,72,73,78,69,32,98,97,115,101,100,32,111,110,32,116,104,101,32,111,117,116,112,
117,116,32,111,102,32,117,110,97,109,101,32,105,110,115,116,101,97,100,10,9,35,32,111,102,32,116,104,101,32,115,112,101,99,105,102,105,99,32,65,108,112,104,97,32,109,111,100,101,108,63,10,9,101,99,104,111,32,97,108,112,104,97,45,112,99,45,105,110,116,
101,114,105,120,10,9,101,120,105,116,32,59,59,10,32,32,32,32,50,49,48,54,52,58,87,105,110,100,111,119,115,95,78,84,58,53,48,58,51,41,10,9,101,99,104,111,32,97,108,112,104,97,45,100,101,99,45,119,105,110,110,116,51,46,53,10,9,101,120,105,116,32,59,59,
10,32,32,32,32,65,109,105,103,97,42,58,85,78,73,88,95,83,121,115,116,101,109,95,86,58,52,46,48,58,42,41,10,9,101,99,104,111,32,109,54,56,107,45,117,110,107,110,111,119,110,45,115,121,115,118,52,10,9,101,120,105,116,32,59,59,10,32,32,32,32,42,58,91,65,
97,93,109,105,103,97,91,79,111,93,91,83,115,93,58,42,58,42,41,10,9,101,99,104,111,32,36,123,85,78,65,77,69,95,77,65,67,72,73,78,69,125,45,117,110,107,110,111,119,110,45,97,109,105,103,97,111,115,10,9,101,120,105,116,32,59,59,10,32,32,32,32,42,58,91,77,
109,93,111,114,112,104,91,79,111,93,91,83,115,93,58,42,58,42,41,10,9,101,99,104,111,32,36,123,85,78,65,77,69,95,77,65,67,72,73,78,69,125,45,117,110,107,110,111,119,110,45,109,111,114,112,104,111,115,10,9,101,120,105,116,32,59,59,10,32,32,32,32,42,58,
79,83,47,51,57,48,58,42,58,42,41,10,9,101,99,104,111,32,105,51,55,48,45,105,98,109,45,111,112,101,110,101,100,105,116,105,111,110,10,9,101,120,105,116,32,59,59,10,32,32,32,32,42,58,122,47,86,77,58,42,58,42,41,10,9,101,99,104,111,32,115,51,57,48,45,105,
98,109,45,122,118,109,111,101,10,9,101,120,105,116,32,59,59,10,32,32,32,32,42,58,79,83,52,48,48,58,42,58,42,41,10,9,101,99,104,111,32,112,111,119,101,114,112,99,45,105,98,109,45,111,115,52,48,48,10,9,101,120,105,116,32,59,59,10,32,32,32,32,97,114,109,
58,82,73,83,67,42,58,49,46,91,48,49,50,93,42,58,42,124,97,114,109,58,114,105,115,99,105,120,58,49,46,91,48,49,50,93,42,58,42,41,10,9,101,99,104,111,32,97,114,109,45,97,99,111,114,110,45,114,105,115,99,105,120,36,123,85,78,65,77,69,95,82,69,76,69,65,83,
69,125,10,9,101,120,105,116,32,59,59,10,32,32,32,32,97,114,109,58,114,105,115,99,111,115,58,42,58,42,124,97,114,109,58,82,73,83,67,79,83,58,42,58,42,41,10,9,101,99,104,111,32,97,114,109,45,117,110,107,110,111,119,110,45,114,105,115,99,111,115,10,9,101,
120,105,116,32,59,59,10,32,32,32,32,83,82,50,63,48,49,58,72,73,45,85,88,47,77,80,80,58,42,58,42,32,124,32,83,82,56,48,48,48,58,72,73,45,85,88,47,77,80,80,58,42,58,42,41,10,9,101,99,104,111,32,104,112,112,97,49,46,49,45,104,105,116,97,99,104,105,45,104,
105,117,120,109,112,112,10,9,101,120,105,116,32,59,59,10,32,32,32,32,80,121,114,97,109,105,100,42,58,79,83,120,42,58,42,58,42,32,124,32,77,73,83,42,58,79,83,120,42,58,42,58,42,32,124,32,77,73,83,42,58,83,77,80,95,68,67,45,79,83,120,42,58,42,58,42,41,
10,9,35,32,97,107,101,101,64,119,112,100,105,115,48,51,46,119,112,97,102,98,46,97,102,46,109,105,108,32,40,69,97,114,108,101,32,70,46,32,65,107,101,41,32,99,111,110,116,114,105,98,117,116,101,100,32,77,73,83,32,97,110,100,32,78,73,76,69,46,10,9,105,102,
32,116,101,115,116,32,34,96,40,47,98,105,110,47,117,110,105,118,101,114,115,101,41,32,50,62,47,100,101,118,47,110,117,108,108,96,34,32,61,32,97,116,116,32,59,32,116,104,101,110,10,9,9,101,99,104,111,32,112,121,114,97,109,105,100,45,112,121,114,97,109,
105,100,45,115,121,115,118,51,10,9,101,108,115,101,10,9,9,101,99,104,111,32,112,121,114,97,109,105,100,45,112,121,114,97,109,105,100,45,98,115,100,10,9,102,105,10,9,101,120,105,116,32,59,59,10,32,32,32,32,78,73,76,69,42,58,42,58,42,58,100,99,111,115,
120,41,10,9,101,99,104,111,32,112,121,114,97,109,105,100,45,112,121,114,97,109,105,100,45,115,118,114,52,10,9,101,120,105,116,32,59,59,10,32,32,32,32,68,82,83,63,54,48,48,48,58,117,110,105,120,58,52,46,48,58,54,42,41,10,9,101,99,104,111,32,115,112,97,
114,99,45,105,99,108,45,110,120,54,10,9,101,120,105,116,32,59,59,10,32,32,32,32,68,82,83,63,54,48,48,48,58,85,78,73,88,95,83,86,58,52,46,50,42,58,55,42,32,124,32,68,82,83,63,54,48,48,48,58,105,115,105,115,58,52,46,50,42,58,55,42,41,10,9,99,97,115,101,
32,96,47,117,115,114,47,98,105,110,47,117,110,97,109,101,32,45,112,96,32,105,110,10,9,32,32,32,32,115,112,97,114,99,41,32,101,99,104,111,32,115,112,97,114,99,45,105,99,108,45,110,120,55,59,32,101,120,105,116,32,59,59,10,9,101,115,97,99,32,59,59,10,32,
32,32,32,115,51,57,48,120,58,83,117,110,79,83,58,42,58,42,41,10,9,101,99,104,111,32,36,123,85,78,65,77,69,95,77,65,67,72,73,78,69,125,45,105,98,109,45,115,111,108,97,114,105,115,50,96,101,99,104,111,32,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,
124,115,101,100,32,45,101,32,39,115,47,91,94,46,93,42,47,47,39,96,10,9,101,120,105,116,32,59,59,10,32,32,32,32,115,117,110,52,72,58,83,117,110,79,83,58,53,46,42,58,42,41,10,9,101,99,104,111,32,115,112,97,114,99,45,104,97,108,45,115,111,108,97,114,105,
115,50,96,101,99,104,111,32,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,124,115,101,100,32,45,101,32,39,115,47,91,94,46,93,42,47,47,39,96,10,9,101,120,105,116,32,59,59,10,32,32,32,32,115,117,110,52,42,58,83,117,110,79,83,58,53,46,42,58,42,32,124,
32,116,97,100,112,111,108,101,42,58,83,117,110,79,83,58,53,46,42,58,42,41,10,9,101,99,104,111,32,115,112,97,114,99,45,115,117,110,45,115,111,108,97,114,105,115,50,96,101,99,104,111,32,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,124,115,101,100,
32,45,101,32,39,115,47,91,94,46,93,42,47,47,39,96,10,9,101,120,105,116,32,59,59,10,32,32,32,32,105,56,54,112,99,58,65,117,114,111,114,97,85,88,58,53,46,42,58,42,32,124,32,105,56,54,120,101,110,58,65,117,114,111,114,97,85,88,58,53,46,42,58,42,41,10,9,
101,99,104,111,32,105,51,56,54,45,112,99,45,97,117,114,111,114,97,117,120,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,10,9,101,120,105,116,32,59,59,10,32,32,32,32,105,56,54,112,99,58,83,117,110,79,83,58,53,46,42,58,42,32,124,32,105,56,54,120,101,
110,58,83,117,110,79,83,58,53,46,42,58,42,41,10,9,101,118,97,108,32,36,115,101,116,95,99,99,95,102,111,114,95,98,117,105,108,100,10,9,83,85,78,95,65,82,67,72,61,34,105,51,56,54,34,10,9,35,32,73,102,32,116,104,101,114,101,32,105,115,32,97,32,99,111,109,
112,105,108,101,114,44,32,115,101,101,32,105,102,32,105,116,32,105,115,32,99,111,110,102,105,103,117,114,101,100,32,102,111,114,32,54,52,45,98,105,116,32,111,98,106,101,99,116,115,46,10,9,35,32,78,111,116,101,32,116,104,97,116,32,116,104,101,32,83,117,
110,32,99,99,32,100,111,101,115,32,110,111,116,32,116,117,114,110,32,95,95,76,80,54,52,95,95,32,105,110,116,111,32,49,32,108,105,107,101,32,103,99,99,32,100,111,101,115,46,10,9,35,32,84,104,105,115,32,116,101,115,116,32,119,111,114,107,115,32,102,111,
114,32,98,111,116,104,32,99,111,109,112,105,108,101,114,115,46,10,9,105,102,32,91,32,34,36,67,67,95,70,79,82,95,66,85,73,76,68,34,32,33,61,32,39,110,111,95,99,111,109,112,105,108,101,114,95,102,111,117,110,100,39,32,93,59,32,116,104,101,110,10,9,32,32,
32,32,105,102,32,40,101,99,104,111,32,39,35,105,102,100,101,102,32,95,95,97,109,100,54,52,39,59,32,101,99,104,111,32,73,83,95,54,52,66,73,84,95,65,82,67,72,59,32,101,99,104,111,32,39,35,101,110,100,105,102,39,41,32,124,32,92,10,9,9,40,67,67,79,80,84,
83,61,32,36,67,67,95,70,79,82,95,66,85,73,76,68,32,45,69,32,45,32,50,62,47,100,101,118,47,110,117,108,108,41,32,124,32,92,10,9,9,103,114,101,112,32,73,83,95,54,52,66,73,84,95,65,82,67,72,32,62,47,100,101,118,47,110,117,108,108,10,9,32,32,32,32,116,104,
101,110,10,9,9,83,85,78,95,65,82,67,72,61,34,120,56,54,95,54,52,34,10,9,32,32,32,32,102,105,10,9,102,105,10,9,101,99,104,111,32,36,123,83,85,78,95,65,82,67,72,125,45,112,99,45,115,111,108,97,114,105,115,50,96,101,99,104,111,32,36,123,85,78,65,77,69,95,
82,69,76,69,65,83,69,125,124,115,101,100,32,45,101,32,39,115,47,91,94,46,93,42,47,47,39,96,10,9,101,120,105,116,32,59,59,10,32,32,32,32,115,117,110,52,42,58,83,117,110,79,83,58,54,42,58,42,41,10,9,35,32,65,99,99,111,114,100,105,110,103,32,116,111,32,
99,111,110,102,105,103,46,115,117,98,44,32,116,104,105,115,32,105,115,32,116,104,101,32,112,114,111,112,101,114,32,119,97,121,32,116,111,32,99,97,110,111,110,105,99,97,108,105,122,101,10,9,35,32,83,117,110,79,83,54,46,32,32,72,97,114,100,32,116,111,32,
103,117,101,115,115,32,101,120,97,99,116,108,121,32,119,104,97,116,32,83,117,110,79,83,54,32,119,105,108,108,32,98,101,32,108,105,107,101,44,32,98,117,116,10,9,35,32,105,116,39,115,32,108,105,107,101,108,121,32,116,111,32,98,101,32,109,111,114,101,32,
108,105,107,101,32,83,111,108,97,114,105,115,32,116,104,97,110,32,83,117,110,79,83,52,46,10,9,101,99,104,111,32,115,112,97,114,99,45,115,117,110,45,115,111,108,97,114,105,115,51,96,101,99,104,111,32,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,124,
115,101,100,32,45,101,32,39,115,47,91,94,46,93,42,47,47,39,96,10,9,101,120,105,116,32,59,59,10,32,32,32,32,115,117,110,52,42,58,83,117,110,79,83,58,42,58,42,41,10,9,99,97,115,101,32,34,96,47,117,115,114,47,98,105,110,47,97,114,99,104,32,45,107,96,34,
32,105,110,10,9,32,32,32,32,83,101,114,105,101,115,42,124,83,52,42,41,10,9,9,85,78,65,77,69,95,82,69,76,69,65,83,69,61,96,117,110,97,109,101,32,45,118,96,10,9,9,59,59,10,9,101,115,97,99,10,9,35,32,74,97,112,97,110,101,115,101,32,76,97,110,103,117,97,
103,101,32,118,101,114,115,105,111,110,115,32,104,97,118,101,32,97,32,118,101,114,115,105,111,110,32,110,117,109,98,101,114,32,108,105,107,101,32,96,52,46,49,46,51,45,74,76,39,46,10,9,101,99,104,111,32,115,112,97,114,99,45,115,117,110,45,115,117,110,
111,115,96,101,99,104,111,32,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,124,115,101,100,32,45,101,32,39,115,47,45,47,95,47,39,96,10,9,101,120,105,116,32,59,59,10,32,32,32,32,115,117,110,51,42,58,83,117,110,79,83,58,42,58,42,41,10,9,101,99,104,
111,32,109,54,56,107,45,115,117,110,45,115,117,110,111,115,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,10,9,101,120,105,116,32,59,59,10,32,32,32,32,115,117,110,42,58,42,58,52,46,50,66,83,68,58,42,41,10,9,85,78,65,77,69,95,82,69,76,69,65,83,69,61,
96,40,115,101,100,32,49,113,32,47,101,116,99,47,109,111,116,100,32,124,32,97,119,107,32,39,123,112,114,105,110,116,32,115,117,98,115,116,114,40,36,53,44,49,44,51,41,125,39,41,32,50,62,47,100,101,118,47,110,117,108,108,96,10,9,116,101,115,116,32,34,120,
36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,34,32,61,32,34,120,34,32,38,38,32,85,78,65,77,69,95,82,69,76,69,65,83,69,61,51,10,9,99,97,115,101,32,34,96,47,98,105,110,47,97,114,99,104,96,34,32,105,110,10,9,32,32,32,32,115,117,110,51,41,10,9,9,101,
99,104,111,32,109,54,56,107,45,115,117,110,45,115,117,110,111,115,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,10,9,9,59,59,10,9,32,32,32,32,115,117,110,52,41,10,9,9,101,99,104,111,32,115,112,97,114,99,45,115,117,110,45,115,117,110,111,115,36,123,
85,78,65,77,69,95,82,69,76,69,65,83,69,125,10,9,9,59,59,10,9,101,115,97,99,10,9,101,120,105,116,32,59,59,10,32,32,32,32,97,117,115,104,112,58,83,117,110,79,83,58,42,58,42,41,10,9,101,99,104,111,32,115,112,97,114,99,45,97,117,115,112,101,120,45,115,117,
110,111,115,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,10,9,101,120,105,116,32,59,59,10,32,32,32,32,35,32,84,104,101,32,115,105,116,117,97,116,105,111,110,32,102,111,114,32,77,105,78,84,32,105,115,32,97,32,108,105,116,116,108,101,32,99,111,110,
102,117,115,105,110,103,46,32,32,84,104,101,32,109,97,99,104,105,110,101,32,110,97,109,101,10,32,32,32,32,35,32,99,97,110,32,98,101,32,118,105,114,116,117,97,108,108,121,32,101,118,101,114,121,116,104,105,110,103,32,40,101,118,101,114,121,116,104,105,
110,103,32,119,104,105,99,104,32,105,115,32,110,111,116,10,32,32,32,32,35,32,34,97,116,97,114,105,115,116,34,32,111,114,32,34,97,116,97,114,105,115,116,101,34,32,97,116,32,108,101,97,115,116,32,115,104,111,117,108,100,32,104,97,118,101,32,97,32,112,114,
111,99,101,115,115,111,114,10,32,32,32,32,35,32,62,32,109,54,56,48,48,48,41,46,32,32,84,104,101,32,115,121,115,116,101,109,32,110,97,109,101,32,114,97,110,103,101,115,32,102,114,111,109,32,34,77,105,78,84,34,32,111,118,101,114,32,34,70,114,101,101,77,
105,78,84,34,10,32,32,32,32,35,32,116,111,32,116,104,101,32,108,111,119,101,114,99,97,115,101,32,118,101,114,115,105,111,110,32,34,109,105,110,116,34,32,40,111,114,32,34,102,114,101,101,109,105,110,116,34,41,46,32,32,70,105,110,97,108,108,121,10,32,32,
32,32,35,32,116,104,101,32,115,121,115,116,101,109,32,110,97,109,101,32,34,84,79,83,34,32,100,101,110,111,116,101,115,32,97,32,115,121,115,116,101,109,32,119,104,105,99,104,32,105,115,32,97,99,116,117,97,108,108,121,32,110,111,116,10,32,32,32,32,35,32,
77,105,78,84,46,32,32,66,117,116,32,77,105,78,84,32,105,115,32,100,111,119,110,119,97,114,100,32,99,111,109,112,97,116,105,98,108,101,32,116,111,32,84,79,83,44,32,115,111,32,116,104,105,115,32,115,104,111,117,108,100,10,32,32,32,32,35,32,98,101,32,110,
111,32,112,114,111,98,108,101,109,46,10,32,32,32,32,97,116,97,114,105,115,116,91,101,93,58,42,77,105,78,84,58,42,58,42,32,124,32,97,116,97,114,105,115,116,91,101,93,58,42,109,105,110,116,58,42,58,42,32,124,32,97,116,97,114,105,115,116,91,101,93,58,42,
84,79,83,58,42,58,42,41,10,9,101,99,104,111,32,109,54,56,107,45,97,116,97,114,105,45,109,105,110,116,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,10,9,101,120,105,116,32,59,59,10,32,32,32,32,97,116,97,114,105,42,58,42,77,105,78,84,58,42,58,42,32,
124,32,97,116,97,114,105,42,58,42,109,105,110,116,58,42,58,42,32,124,32,97,116,97,114,105,115,116,91,101,93,58,42,84,79,83,58,42,58,42,41,10,9,101,99,104,111,32,109,54,56,107,45,97,116,97,114,105,45,109,105,110,116,36,123,85,78,65,77,69,95,82,69,76,69,
65,83,69,125,10,9,101,120,105,116,32,59,59,10,32,32,32,32,42,102,97,108,99,111,110,42,58,42,77,105,78,84,58,42,58,42,32,124,32,42,102,97,108,99,111,110,42,58,42,109,105,110,116,58,42,58,42,32,124,32,42,102,97,108,99,111,110,42,58,42,84,79,83,58,42,58,
42,41,10,9,101,99,104,111,32,109,54,56,107,45,97,116,97,114,105,45,109,105,110,116,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,10,9,101,120,105,116,32,59,59,10,32,32,32,32,109,105,108,97,110,42,58,42,77,105,78,84,58,42,58,42,32,124,32,109,105,108,
97,110,42,58,42,109,105,110,116,58,42,58,42,32,124,32,42,109,105,108,97,110,42,58,42,84,79,83,58,42,58,42,41,10,9,101,99,104,111,32,109,54,56,107,45,109,105,108,97,110,45,109,105,110,116,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,10,9,101,120,
105,116,32,59,59,10,32,32,32,32,104,97,100,101,115,42,58,42,77,105,78,84,58,42,58,42,32,124,32,104,97,100,101,115,42,58,42,109,105,110,116,58,42,58,42,32,124,32,42,104,97,100,101,115,42,58,42,84,79,83,58,42,58,42,41,10,9,101,99,104,111,32,109,54,56,107,
45,104,97,100,101,115,45,109,105,110,116,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,10,9,101,120,105,116,32,59,59,10,32,32,32,32,42,58,42,77,105,78,84,58,42,58,42,32,124,32,42,58,42,109,105,110,116,58,42,58,42,32,124,32,42,58,42,84,79,83,58,42,
58,42,41,10,9,101,99,104,111,32,109,54,56,107,45,117,110,107,110,111,119,110,45,109,105,110,116,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,10,9,101,120,105,116,32,59,59,10,32,32,32,32,109,54,56,107,58,109,97,99,104,116,101,110,58,42,58,42,41,10,
9,101,99,104,111,32,109,54,56,107,45,97,112,112,108,101,45,109,97,99,104,116,101,110,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,10,9,101,120,105,116,32,59,59,10,32,32,32,32,112,111,119,101,114,112,99,58,109,97,99,104,116,101,110,58,42,58,42,41,
10,9,101,99,104,111,32,112,111,119,101,114,112,99,45,97,112,112,108,101,45,109,97,99,104,116,101,110,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,10,9,101,120,105,116,32,59,59,10,32,32,32,32,82,73,83,67,42,58,77,97,99,104,58,42,58,42,41,10,9,101,
99,104,111,32,109,105,112,115,45,100,101,99,45,109,97,99,104,95,98,115,100,52,46,51,10,9,101,120,105,116,32,59,59,10,32,32,32,32,82,73,83,67,42,58,85,76,84,82,73,88,58,42,58,42,41,10,9,101,99,104,111,32,109,105,112,115,45,100,101,99,45,117,108,116,114,
105,120,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,10,9,101,120,105,116,32,59,59,10,32,32,32,32,86,65,88,42,58,85,76,84,82,73,88,42,58,42,58,42,41,10,9,101,99,104,111,32,118,97,120,45,100,101,99,45,117,108,116,114,105,120,36,123,85,78,65,77,69,
95,82,69,76,69,65,83,69,125,10,9,101,120,105,116,32,59,59,10,32,32,32,32,50,48,50,48,58,67,76,73,88,58,42,58,42,32,124,32,50,52,51,48,58,67,76,73,88,58,42,58,42,41,10,9,101,99,104,111,32,99,108,105,112,112,101,114,45,105,110,116,101,114,103,114,97,112,
104,45,99,108,105,120,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,10,9,101,120,105,116,32,59,59,10,32,32,32,32,109,105,112,115,58,42,58,42,58,85,77,73,80,83,32,124,32,109,105,112,115,58,42,58,42,58,82,73,83,67,111,115,41,10,9,101,118,97,108,32,
36,115,101,116,95,99,99,95,102,111,114,95,98,117,105,108,100,10,9,115,101,100,32,39,115,47,94,9,47,47,39,32,60,60,32,69,79,70,32,62,36,100,117,109,109,121,46,99,10,35,105,102,100,101,102,32,95,95,99,112,108,117,115,112,108,117,115,10,35,105,110,99,108,
117,100,101,32,60,115,116,100,105,111,46,104,62,32,32,47,42,32,102,111,114,32,112,114,105,110,116,102,40,41,32,112,114,111,116,111,116,121,112,101,32,42,47,10,9,105,110,116,32,109,97,105,110,32,40,105,110,116,32,97,114,103,99,44,32,99,104,97,114,32,42,
97,114,103,118,91,93,41,32,123,10,35,101,108,115,101,10,9,105,110,116,32,109,97,105,110,32,40,97,114,103,99,44,32,97,114,103,118,41,32,105,110,116,32,97,114,103,99,59,32,99,104,97,114,32,42,97,114,103,118,91,93,59,32,123,10,35,101,110,100,105,102,10,
9,35,105,102,32,100,101,102,105,110,101,100,32,40,104,111,115,116,95,109,105,112,115,41,32,38,38,32,100,101,102,105,110,101,100,32,40,77,73,80,83,69,66,41,10,9,35,105,102,32,100,101,102,105,110,101,100,32,40,83,89,83,84,89,80,69,95,83,89,83,86,41,10,
9,32,32,112,114,105,110,116,102,32,40,34,109,105,112,115,45,109,105,112,115,45,114,105,115,99,111,115,37,115,115,121,115,118,92,110,34,44,32,97,114,103,118,91,49,93,41,59,32,101,120,105,116,32,40,48,41,59,10,9,35,101,110,100,105,102,10,9,35,105,102,32,
100,101,102,105,110,101,100,32,40,83,89,83,84,89,80,69,95,83,86,82,52,41,10,9,32,32,112,114,105,110,116,102,32,40,34,109,105,112,115,45,109,105,112,115,45,114,105,115,99,111,115,37,115,115,118,114,52,92,110,34,44,32,97,114,103,118,91,49,93,41,59,32,101,
120,105,116,32,40,48,41,59,10,9,35,101,110,100,105,102,10,9,35,105,102,32,100,101,102,105,110,101,100,32,40,83,89,83,84,89,80,69,95,66,83,68,52,51,41,32,124,124,32,100,101,102,105,110,101,100,40,83,89,83,84,89,80,69,95,66,83,68,41,10,9,32,32,112,114,
105,110,116,102,32,40,34,109,105,112,115,45,109,105,112,115,45,114,105,115,99,111,115,37,115,98,115,100,92,110,34,44,32,97,114,103,118,91,49,93,41,59,32,101,120,105,116,32,40,48,41,59,10,9,35,101,110,100,105,102,10,9,35,101,110,100,105,102,10,9,32,32,
101,120,105,116,32,40,45,49,41,59,10,9,125,10,69,79,70,10,9,36,67,67,95,70,79,82,95,66,85,73,76,68,32,45,111,32,36,100,117,109,109,121,32,36,100,117,109,109,121,46,99,32,38,38,10,9,32,32,100,117,109,109,121,97,114,103,61,96,101,99,104,111,32,34,36,123,
85,78,65,77,69,95,82,69,76,69,65,83,69,125,34,32,124,32,115,101,100,32,45,110,32,39,115,47,92,40,91,48,45,57,93,42,92,41,46,42,47,92,49,47,112,39,96,32,38,38,10,9,32,32,83,89,83,84,69,77,95,78,65,77,69,61,96,36,100,117,109,109,121,32,36,100,117,109,109,
121,97,114,103,96,32,38,38,10,9,32,32,32,32,123,32,101,99,104,111,32,34,36,83,89,83,84,69,77,95,78,65,77,69,34,59,32,101,120,105,116,59,32,125,10,9,101,99,104,111,32,109,105,112,115,45,109,105,112,115,45,114,105,115,99,111,115,36,123,85,78,65,77,69,95,
82,69,76,69,65,83,69,125,10,9,101,120,105,116,32,59,59,10,32,32,32,32,77,111,116,111,114,111,108,97,58,80,111,119,101,114,77,65,88,95,79,83,58,42,58,42,41,10,9,101,99,104,111,32,112,111,119,101,114,112,99,45,109,111,116,111,114,111,108,97,45,112,111,
119,101,114,109,97,120,10,9,101,120,105,116,32,59,59,10,32,32,32,32,77,111,116,111,114,111,108,97,58,42,58,52,46,51,58,80,76,56,45,42,41,10,9,101,99,104,111,32,112,111,119,101,114,112,99,45,104,97,114,114,105,115,45,112,111,119,101,114,109,97,120,10,
9,101,120,105,116,32,59,59,10,32,32,32,32,78,105,103,104,116,95,72,97,119,107,58,42,58,42,58,80,111,119,101,114,77,65,88,95,79,83,32,124,32,83,121,110,101,114,103,121,58,80,111,119,101,114,77,65,88,95,79,83,58,42,58,42,41,10,9,101,99,104,111,32,112,111,
119,101,114,112,99,45,104,97,114,114,105,115,45,112,111,119,101,114,109,97,120,10,9,101,120,105,116,32,59,59,10,32,32,32,32,78,105,103,104,116,95,72,97,119,107,58,80,111,119,101,114,95,85,78,73,88,58,42,58,42,41,10,9,101,99,104,111,32,112,111,119,101,
114,112,99,45,104,97,114,114,105,115,45,112,111,119,101,114,117,110,105,120,10,9,101,120,105,116,32,59,59,10,32,32,32,32,109,56,56,107,58,67,88,47,85,88,58,55,42,58,42,41,10,9,101,99,104,111,32,109,56,56,107,45,104,97,114,114,105,115,45,99,120,117,120,
55,10,9,101,120,105,116,32,59,59,10,32,32,32,32,109,56,56,107,58,42,58,52,42,58,82,52,42,41,10,9,101,99,104,111,32,109,56,56,107,45,109,111,116,111,114,111,108,97,45,115,121,115,118,52,10,9,101,120,105,116,32,59,59,10,32,32,32,32,109,56,56,107,58,42,
58,51,42,58,82,51,42,41,10,9,101,99,104,111,32,109,56,56,107,45,109,111,116,111,114,111,108,97,45,115,121,115,118,51,10,9,101,120,105,116,32,59,59,10,32,32,32,32,65,86,105,105,79,78,58,100,103,117,120,58,42,58,42,41,10,9,35,32,68,71,47,85,88,32,114,101,
116,117,114,110,115,32,65,86,105,105,79,78,32,102,111,114,32,97,108,108,32,97,114,99,104,105,116,101,99,116,117,114,101,115,10,9,85,78,65,77,69,95,80,82,79,67,69,83,83,79,82,61,96,47,117,115,114,47,98,105,110,47,117,110,97,109,101,32,45,112,96,10,9,105,
102,32,91,32,36,85,78,65,77,69,95,80,82,79,67,69,83,83,79,82,32,61,32,109,99,56,56,49,48,48,32,93,32,124,124,32,91,32,36,85,78,65,77,69,95,80,82,79,67,69,83,83,79,82,32,61,32,109,99,56,56,49,49,48,32,93,10,9,116,104,101,110,10,9,32,32,32,32,105,102,32,
91,32,36,123,84,65,82,71,69,84,95,66,73,78,65,82,89,95,73,78,84,69,82,70,65,67,69,125,120,32,61,32,109,56,56,107,100,103,117,120,101,108,102,120,32,93,32,124,124,32,92,10,9,32,32,32,32,32,32,32,91,32,36,123,84,65,82,71,69,84,95,66,73,78,65,82,89,95,73,
78,84,69,82,70,65,67,69,125,120,32,61,32,120,32,93,10,9,32,32,32,32,116,104,101,110,10,9,9,101,99,104,111,32,109,56,56,107,45,100,103,45,100,103,117,120,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,10,9,32,32,32,32,101,108,115,101,10,9,9,101,99,
104,111,32,109,56,56,107,45,100,103,45,100,103,117,120,98,99,115,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,10,9,32,32,32,32,102,105,10,9,101,108,115,101,10,9,32,32,32,32,101,99,104,111,32,105,53,56,54,45,100,103,45,100,103,117,120,36,123,85,78,
65,77,69,95,82,69,76,69,65,83,69,125,10,9,102,105,10,9,101,120,105,116,32,59,59,10,32,32,32,32,77,56,56,42,58,68,111,108,112,104,105,110,79,83,58,42,58,42,41,9,35,32,68,111,108,112,104,105,110,79,83,32,40,83,86,82,51,41,10,9,101,99,104,111,32,109,56,
56,107,45,100,111,108,112,104,105,110,45,115,121,115,118,51,10,9,101,120,105,116,32,59,59,10,32,32,32,32,77,56,56,42,58,42,58,82,51,42,58,42,41,10,9,35,32,68,101,108,116,97,32,56,56,107,32,115,121,115,116,101,109,32,114,117,110,110,105,110,103,32,83,
86,82,51,10,9,101,99,104,111,32,109,56,56,107,45,109,111,116,111,114,111,108,97,45,115,121,115,118,51,10,9,101,120,105,116,32,59,59,10,32,32,32,32,88,68,56,56,42,58,42,58,42,58,42,41,32,35,32,84,101,107,116,114,111,110,105,120,32,88,68,56,56,32,115,121,
115,116,101,109,32,114,117,110,110,105,110,103,32,85,84,101,107,86,32,40,83,86,82,51,41,10,9,101,99,104,111,32,109,56,56,107,45,116,101,107,116,114,111,110,105,120,45,115,121,115,118,51,10,9,101,120,105,116,32,59,59,10,32,32,32,32,84,101,107,52,51,91,
48,45,57,93,91,48,45,57,93,58,85,84,101,107,58,42,58,42,41,32,35,32,84,101,107,116,114,111,110,105,120,32,52,51,48,48,32,115,121,115,116,101,109,32,114,117,110,110,105,110,103,32,85,84,101,107,32,40,66,83,68,41,10,9,101,99,104,111,32,109,54,56,107,45,
116,101,107,116,114,111,110,105,120,45,98,115,100,10,9,101,120,105,116,32,59,59,10,32,32,32,32,42,58,73,82,73,88,42,58,42,58,42,41,10,9,101,99,104,111,32,109,105,112,115,45,115,103,105,45,105,114,105,120,96,101,99,104,111,32,36,123,85,78,65,77,69,95,
82,69,76,69,65,83,69,125,124,115,101,100,32,45,101,32,39,115,47,45,47,95,47,103,39,96,10,9,101,120,105,116,32,59,59,10,32,32,32,32,63,63,63,63,63,63,63,63,58,65,73,88,63,58,91,49,50,93,46,49,58,50,41,32,32,32,35,32,65,73,88,32,50,46,50,46,49,32,111,114,
32,65,73,88,32,50,46,49,46,49,32,105,115,32,82,84,47,80,67,32,65,73,88,46,10,9,101,99,104,111,32,114,111,109,112,45,105,98,109,45,97,105,120,32,32,32,32,32,35,32,117,110,97,109,101,32,45,109,32,103,105,118,101,115,32,97,110,32,56,32,104,101,120,45,99,
111,100,101,32,67,80,85,32,105,100,10,9,101,120,105,116,32,59,59,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,35,32,78,111,116,101,32,116,104,97,116,58,32,101,99,104,111,32,34,39,96,117,110,97,109,101,32,45,115,96,39,34,32,103,105,118,101,115,32,39,65,
73,88,32,39,10,32,32,32,32,105,42,56,54,58,65,73,88,58,42,58,42,41,10,9,101,99,104,111,32,105,51,56,54,45,105,98,109,45,97,105,120,10,9,101,120,105,116,32,59,59,10,32,32,32,32,105,97,54,52,58,65,73,88,58,42,58,42,41,10,9,105,102,32,91,32,45,120,32,47,
117,115,114,47,98,105,110,47,111,115,108,101,118,101,108,32,93,32,59,32,116,104,101,110,10,9,9,73,66,77,95,82,69,86,61,96,47,117,115,114,47,98,105,110,47,111,115,108,101,118,101,108,96,10,9,101,108,115,101,10,9,9,73,66,77,95,82,69,86,61,36,123,85,78,
65,77,69,95,86,69,82,83,73,79,78,125,46,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,10,9,102,105,10,9,101,99,104,111,32,36,123,85,78,65,77,69,95,77,65,67,72,73,78,69,125,45,105,98,109,45,97,105,120,36,123,73,66,77,95,82,69,86,125,10,9,101,120,105,
116,32,59,59,10,32,32,32,32,42,58,65,73,88,58,50,58,51,41,10,9,105,102,32,103,114,101,112,32,98,111,115,51,50,53,32,47,117,115,114,47,105,110,99,108,117,100,101,47,115,116,100,105,111,46,104,32,62,47,100,101,118,47,110,117,108,108,32,50,62,38,49,59,32,
116,104,101,110,10,9,9,101,118,97,108,32,36,115,101,116,95,99,99,95,102,111,114,95,98,117,105,108,100,10,9,9,115,101,100,32,39,115,47,94,9,9,47,47,39,32,60,60,32,69,79,70,32,62,36,100,117,109,109,121,46,99,10,9,9,35,105,110,99,108,117,100,101,32,60,115,
121,115,47,115,121,115,116,101,109,99,102,103,46,104,62,10,10,9,9,109,97,105,110,40,41,10,9,9,9,123,10,9,9,9,105,102,32,40,33,95,95,112,111,119,101,114,95,112,99,40,41,41,10,9,9,9,9,101,120,105,116,40,49,41,59,10,9,9,9,112,117,116,115,40,34,112,111,119,
101,114,112,99,45,105,98,109,45,97,105,120,51,46,50,46,53,34,41,59,10,9,9,9,101,120,105,116,40,48,41,59,10,9,9,9,125,10,69,79,70,10,9,9,105,102,32,36,67,67,95,70,79,82,95,66,85,73,76,68,32,45,111,32,36,100,117,109,109,121,32,36,100,117,109,109,121,46,
99,32,38,38,32,83,89,83,84,69,77,95,78,65,77,69,61,96,36,100,117,109,109,121,96,10,9,9,116,104,101,110,10,9,9,9,101,99,104,111,32,34,36,83,89,83,84,69,77,95,78,65,77,69,34,10,9,9,101,108,115,101,10,9,9,9,101,99,104,111,32,114,115,54,48,48,48,45,105,98,
109,45,97,105,120,51,46,50,46,53,10,9,9,102,105,10,9,101,108,105,102,32,103,114,101,112,32,98,111,115,51,50,52,32,47,117,115,114,47,105,110,99,108,117,100,101,47,115,116,100,105,111,46,104,32,62,47,100,101,118,47,110,117,108,108,32,50,62,38,49,59,32,
116,104,101,110,10,9,9,101,99,104,111,32,114,115,54,48,48,48,45,105,98,109,45,97,105,120,51,46,50,46,52,10,9,101,108,115,101,10,9,9,101,99,104,111,32,114,115,54,48,48,48,45,105,98,109,45,97,105,120,51,46,50,10,9,102,105,10,9,101,120,105,116,32,59,59,
10,32,32,32,32,42,58,65,73,88,58,42,58,91,52,53,54,55,93,41,10,9,73,66,77,95,67,80,85,95,73,68,61,96,47,117,115,114,47,115,98,105,110,47,108,115,100,101,118,32,45,67,32,45,99,32,112,114,111,99,101,115,115,111,114,32,45,83,32,97,118,97,105,108,97,98,108,
101,32,124,32,115,101,100,32,49,113,32,124,32,97,119,107,32,39,123,32,112,114,105,110,116,32,36,49,32,125,39,96,10,9,105,102,32,47,117,115,114,47,115,98,105,110,47,108,115,97,116,116,114,32,45,69,108,32,36,123,73,66,77,95,67,80,85,95,73,68,125,32,124,
32,103,114,101,112,32,39,32,80,79,87,69,82,39,32,62,47,100,101,118,47,110,117,108,108,32,50,62,38,49,59,32,116,104,101,110,10,9,9,73,66,77,95,65,82,67,72,61,114,115,54,48,48,48,10,9,101,108,115,101,10,9,9,73,66,77,95,65,82,67,72,61,112,111,119,101,114,
112,99,10,9,102,105,10,9,105,102,32,91,32,45,120,32,47,117,115,114,47,98,105,110,47,111,115,108,101,118,101,108,32,93,32,59,32,116,104,101,110,10,9,9,73,66,77,95,82,69,86,61,96,47,117,115,114,47,98,105,110,47,111,115,108,101,118,101,108,96,10,9,101,108,
115,101,10,9,9,73,66,77,95,82,69,86,61,36,123,85,78,65,77,69,95,86,69,82,83,73,79,78,125,46,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,10,9,102,105,10,9,101,99,104,111,32,36,123,73,66,77,95,65,82,67,72,125,45,105,98,109,45,97,105,120,36,123,73,
66,77,95,82,69,86,125,10,9,101,120,105,116,32,59,59,10,32,32,32,32,42,58,65,73,88,58,42,58,42,41,10,9,101,99,104,111,32,114,115,54,48,48,48,45,105,98,109,45,97,105,120,10,9,101,120,105,116,32,59,59,10,32,32,32,32,105,98,109,114,116,58,52,46,52,66,83,
68,58,42,124,114,111,109,112,45,105,98,109,58,66,83,68,58,42,41,10,9,101,99,104,111,32,114,111,109,112,45,105,98,109,45,98,115,100,52,46,52,10,9,101,120,105,116,32,59,59,10,32,32,32,32,105,98,109,114,116,58,42,66,83,68,58,42,124,114,111,109,112,45,105,
98,109,58,66,83,68,58,42,41,32,32,32,32,32,32,32,32,32,32,32,32,35,32,99,111,118,101,114,115,32,82,84,47,80,67,32,66,83,68,32,97,110,100,10,9,101,99,104,111,32,114,111,109,112,45,105,98,109,45,98,115,100,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,
125,32,32,32,35,32,52,46,51,32,119,105,116,104,32,117,110,97,109,101,32,97,100,100,101,100,32,116,111,10,9,101,120,105,116,32,59,59,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,35,32,114,101,112,111,114,116,58,
32,114,111,109,112,45,105,98,109,32,66,83,68,32,52,46,51,10,32,32,32,32,42,58,66,79,83,88,58,42,58,42,41,10,9,101,99,104,111,32,114,115,54,48,48,48,45,98,117,108,108,45,98,111,115,120,10,9,101,120,105,116,32,59,59,10,32,32,32,32,68,80,88,47,50,63,48,
48,58,66,46,79,46,83,46,58,42,58,42,41,10,9,101,99,104,111,32,109,54,56,107,45,98,117,108,108,45,115,121,115,118,51,10,9,101,120,105,116,32,59,59,10,32,32,32,32,57,48,48,48,47,91,51,52,93,63,63,58,52,46,51,98,115,100,58,49,46,42,58,42,41,10,9,101,99,
104,111,32,109,54,56,107,45,104,112,45,98,115,100,10,9,101,120,105,116,32,59,59,10,32,32,32,32,104,112,51,48,48,58,52,46,52,66,83,68,58,42,58,42,32,124,32,57,48,48,48,47,91,51,52,93,63,63,58,52,46,51,98,115,100,58,50,46,42,58,42,41,10,9,101,99,104,111,
32,109,54,56,107,45,104,112,45,98,115,100,52,46,52,10,9,101,120,105,116,32,59,59,10,32,32,32,32,57,48,48,48,47,91,51,52,54,55,56,93,63,63,58,72,80,45,85,88,58,42,58,42,41,10,9,72,80,85,88,95,82,69,86,61,96,101,99,104,111,32,36,123,85,78,65,77,69,95,82,
69,76,69,65,83,69,125,124,115,101,100,32,45,101,32,39,115,47,91,94,46,93,42,46,91,48,66,93,42,47,47,39,96,10,9,99,97,115,101,32,34,36,123,85,78,65,77,69,95,77,65,67,72,73,78,69,125,34,32,105,110,10,9,32,32,32,32,57,48,48,48,47,51,49,63,32,41,32,32,32,
32,32,32,32,32,32,32,32,32,72,80,95,65,82,67,72,61,109,54,56,48,48,48,32,59,59,10,9,32,32,32,32,57,48,48,48,47,91,51,52,93,63,63,32,41,32,32,32,32,32,32,32,32,32,72,80,95,65,82,67,72,61,109,54,56,107,32,59,59,10,9,32,32,32,32,57,48,48,48,47,91,54,55,
56,93,91,48,45,57,93,91,48,45,57,93,41,10,9,9,105,102,32,91,32,45,120,32,47,117,115,114,47,98,105,110,47,103,101,116,99,111,110,102,32,93,59,32,116,104,101,110,10,9,9,32,32,32,32,115,99,95,99,112,117,95,118,101,114,115,105,111,110,61,96,47,117,115,114,
47,98,105,110,47,103,101,116,99,111,110,102,32,83,67,95,67,80,85,95,86,69,82,83,73,79,78,32,50,62,47,100,101,118,47,110,117,108,108,96,10,9,9,32,32,32,32,115,99,95,107,101,114,110,101,108,95,98,105,116,115,61,96,47,117,115,114,47,98,105,110,47,103,101,
116,99,111,110,102,32,83,67,95,75,69,82,78,69,76,95,66,73,84,83,32,50,62,47,100,101,118,47,110,117,108,108,96,10,9,9,32,32,32,32,99,97,115,101,32,34,36,123,115,99,95,99,112,117,95,118,101,114,115,105,111,110,125,34,32,105,110,10,9,9,32,32,32,32,32,32,
53,50,51,41,32,72,80,95,65,82,67,72,61,34,104,112,112,97,49,46,48,34,32,59,59,32,35,32,67,80,85,95,80,65,95,82,73,83,67,49,95,48,10,9,9,32,32,32,32,32,32,53,50,56,41,32,72,80,95,65,82,67,72,61,34,104,112,112,97,49,46,49,34,32,59,59,32,35,32,67,80,85,
95,80,65,95,82,73,83,67,49,95,49,10,9,9,32,32,32,32,32,32,53,51,50,41,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,35,32,67,80,85,95,80,65,95,82,73,83,67,50,95,48,10,9,9,9,99,97,115,101,32,34,36,123,115,99,95,107,101,114,110,101,
108,95,98,105,116,115,125,34,32,105,110,10,9,9,9,32,32,51,50,41,32,72,80,95,65,82,67,72,61,34,104,112,112,97,50,46,48,110,34,32,59,59,10,9,9,9,32,32,54,52,41,32,72,80,95,65,82,67,72,61,34,104,112,112,97,50,46,48,119,34,32,59,59,10,9,9,9,32,32,39,39,41,
32,72,80,95,65,82,67,72,61,34,104,112,112,97,50,46,48,34,32,59,59,32,32,32,35,32,72,80,45,85,88,32,49,48,46,50,48,10,9,9,9,101,115,97,99,32,59,59,10,9,9,32,32,32,32,101,115,97,99,10,9,9,102,105,10,9,9,105,102,32,91,32,34,36,123,72,80,95,65,82,67,72,125,
34,32,61,32,34,34,32,93,59,32,116,104,101,110,10,9,9,32,32,32,32,101,118,97,108,32,36,115,101,116,95,99,99,95,102,111,114,95,98,117,105,108,100,10,9,9,32,32,32,32,115,101,100,32,39,115,47,94,9,9,47,47,39,32,60,60,32,69,79,70,32,62,36,100,117,109,109,
121,46,99,10,10,9,9,35,100,101,102,105,110,101,32,95,72,80,85,88,95,83,79,85,82,67,69,10,9,9,35,105,110,99,108,117,100,101,32,60,115,116,100,108,105,98,46,104,62,10,9,9,35,105,110,99,108,117,100,101,32,60,117,110,105,115,116,100,46,104,62,10,10,9,9,105,
110,116,32,109,97,105,110,32,40,41,10,9,9,123,10,9,9,35,105,102,32,100,101,102,105,110,101,100,40,95,83,67,95,75,69,82,78,69,76,95,66,73,84,83,41,10,9,9,32,32,32,32,108,111,110,103,32,98,105,116,115,32,61,32,115,121,115,99,111,110,102,40,95,83,67,95,
75,69,82,78,69,76,95,66,73,84,83,41,59,10,9,9,35,101,110,100,105,102,10,9,9,32,32,32,32,108,111,110,103,32,99,112,117,32,32,61,32,115,121,115,99,111,110,102,32,40,95,83,67,95,67,80,85,95,86,69,82,83,73,79,78,41,59,10,10,9,9,32,32,32,32,115,119,105,116,
99,104,32,40,99,112,117,41,10,9,9,9,123,10,9,9,9,99,97,115,101,32,67,80,85,95,80,65,95,82,73,83,67,49,95,48,58,32,112,117,116,115,32,40,34,104,112,112,97,49,46,48,34,41,59,32,98,114,101,97,107,59,10,9,9,9,99,97,115,101,32,67,80,85,95,80,65,95,82,73,83,
67,49,95,49,58,32,112,117,116,115,32,40,34,104,112,112,97,49,46,49,34,41,59,32,98,114,101,97,107,59,10,9,9,9,99,97,115,101,32,67,80,85,95,80,65,95,82,73,83,67,50,95,48,58,10,9,9,35,105,102,32,100,101,102,105,110,101,100,40,95,83,67,95,75,69,82,78,69,
76,95,66,73,84,83,41,10,9,9,9,32,32,32,32,115,119,105,116,99,104,32,40,98,105,116,115,41,10,9,9,9,9,123,10,9,9,9,9,99,97,115,101,32,54,52,58,32,112,117,116,115,32,40,34,104,112,112,97,50,46,48,119,34,41,59,32,98,114,101,97,107,59,10,9,9,9,9,99,97,115,
101,32,51,50,58,32,112,117,116,115,32,40,34,104,112,112,97,50,46,48,110,34,41,59,32,98,114,101,97,107,59,10,9,9,9,9,100,101,102,97,117,108,116,58,32,112,117,116,115,32,40,34,104,112,112,97,50,46,48,34,41,59,32,98,114,101,97,107,59,10,9,9,9,9,125,32,98,
114,101,97,107,59,10,9,9,35,101,108,115,101,32,32,47,42,32,33,100,101,102,105,110,101,100,40,95,83,67,95,75,69,82,78,69,76,95,66,73,84,83,41,32,42,47,10,9,9,9,32,32,32,32,112,117,116,115,32,40,34,104,112,112,97,50,46,48,34,41,59,32,98,114,101,97,107,
59,10,9,9,35,101,110,100,105,102,10,9,9,9,100,101,102,97,117,108,116,58,32,112,117,116,115,32,40,34,104,112,112,97,49,46,48,34,41,59,32,98,114,101,97,107,59,10,9,9,9,125,10,9,9,32,32,32,32,101,120,105,116,32,40,48,41,59,10,9,9,125,10,69,79,70,10,9,9,
32,32,32,32,40,67,67,79,80,84,83,61,32,36,67,67,95,70,79,82,95,66,85,73,76,68,32,45,111,32,36,100,117,109,109,121,32,36,100,117,109,109,121,46,99,32,50,62,47,100,101,118,47,110,117,108,108,41,32,38,38,32,72,80,95,65,82,67,72,61,96,36,100,117,109,109,
121,96,10,9,9,32,32,32,32,116,101,115,116,32,45,122,32,34,36,72,80,95,65,82,67,72,34,32,38,38,32,72,80,95,65,82,67,72,61,104,112,112,97,10,9,9,102,105,32,59,59,10,9,101,115,97,99,10,9,105,102,32,91,32,36,123,72,80,95,65,82,67,72,125,32,61,32,34,104,112,
112,97,50,46,48,119,34,32,93,10,9,116,104,101,110,10,9,32,32,32,32,101,118,97,108,32,36,115,101,116,95,99,99,95,102,111,114,95,98,117,105,108,100,10,10,9,32,32,32,32,35,32,104,112,112,97,50,46,48,119,45,104,112,45,104,112,117,120,42,32,104,97,115,32,
97,32,54,52,45,98,105,116,32,107,101,114,110,101,108,32,97,110,100,32,97,32,99,111,109,112,105,108,101,114,32,103,101,110,101,114,97,116,105,110,103,10,9,32,32,32,32,35,32,51,50,45,98,105,116,32,99,111,100,101,46,32,32,104,112,112,97,54,52,45,104,112,
45,104,112,117,120,42,32,104,97,115,32,116,104,101,32,115,97,109,101,32,107,101,114,110,101,108,32,97,110,100,32,97,32,99,111,109,112,105,108,101,114,10,9,32,32,32,32,35,32,103,101,110,101,114,97,116,105,110,103,32,54,52,45,98,105,116,32,99,111,100,101,
46,32,32,71,78,85,32,97,110,100,32,72,80,32,117,115,101,32,100,105,102,102,101,114,101,110,116,32,110,111,109,101,110,99,108,97,116,117,114,101,58,10,9,32,32,32,32,35,10,9,32,32,32,32,35,32,36,32,67,67,95,70,79,82,95,66,85,73,76,68,61,99,99,32,46,47,
99,111,110,102,105,103,46,103,117,101,115,115,10,9,32,32,32,32,35,32,61,62,32,104,112,112,97,50,46,48,119,45,104,112,45,104,112,117,120,49,49,46,50,51,10,9,32,32,32,32,35,32,36,32,67,67,95,70,79,82,95,66,85,73,76,68,61,34,99,99,32,43,68,65,50,46,48,119,
34,32,46,47,99,111,110,102,105,103,46,103,117,101,115,115,10,9,32,32,32,32,35,32,61,62,32,104,112,112,97,54,52,45,104,112,45,104,112,117,120,49,49,46,50,51,10,10,9,32,32,32,32,105,102,32,101,99,104,111,32,95,95,76,80,54,52,95,95,32,124,32,40,67,67,79,
80,84,83,61,32,36,67,67,95,70,79,82,95,66,85,73,76,68,32,45,69,32,45,32,50,62,47,100,101,118,47,110,117,108,108,41,32,124,10,9,9,103,114,101,112,32,45,113,32,95,95,76,80,54,52,95,95,10,9,32,32,32,32,116,104,101,110,10,9,9,72,80,95,65,82,67,72,61,34,104,
112,112,97,50,46,48,119,34,10,9,32,32,32,32,101,108,115,101,10,9,9,72,80,95,65,82,67,72,61,34,104,112,112,97,54,52,34,10,9,32,32,32,32,102,105,10,9,102,105,10,9,101,99,104,111,32,36,123,72,80,95,65,82,67,72,125,45,104,112,45,104,112,117,120,36,123,72,
80,85,88,95,82,69,86,125,10,9,101,120,105,116,32,59,59,10,32,32,32,32,105,97,54,52,58,72,80,45,85,88,58,42,58,42,41,10,9,72,80,85,88,95,82,69,86,61,96,101,99,104,111,32,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,124,115,101,100,32,45,101,32,39,
115,47,91,94,46,93,42,46,91,48,66,93,42,47,47,39,96,10,9,101,99,104,111,32,105,97,54,52,45,104,112,45,104,112,117,120,36,123,72,80,85,88,95,82,69,86,125,10,9,101,120,105,116,32,59,59,10,32,32,32,32,51,48,53,48,42,58,72,73,45,85,88,58,42,58,42,41,10,9,
101,118,97,108,32,36,115,101,116,95,99,99,95,102,111,114,95,98,117,105,108,100,10,9,115,101,100,32,39,115,47,94,9,47,47,39,32,60,60,32,69,79,70,32,62,36,100,117,109,109,121,46,99,10,9,35,105,110,99,108,117,100,101,32,60,117,110,105,115,116,100,46,104,
62,10,9,105,110,116,10,9,109,97,105,110,32,40,41,10,9,123,10,9,32,32,108,111,110,103,32,99,112,117,32,61,32,115,121,115,99,111,110,102,32,40,95,83,67,95,67,80,85,95,86,69,82,83,73,79,78,41,59,10,9,32,32,47,42,32,84,104,101,32,111,114,100,101,114,32,109,
97,116,116,101,114,115,44,32,98,101,99,97,117,115,101,32,67,80,85,95,73,83,95,72,80,95,77,67,54,56,75,32,101,114,114,111,110,101,111,117,115,108,121,32,114,101,116,117,114,110,115,10,9,32,32,32,32,32,116,114,117,101,32,102,111,114,32,67,80,85,95,80,65,
95,82,73,83,67,49,95,48,46,32,32,67,80,85,95,73,83,95,80,65,95,82,73,83,67,32,114,101,116,117,114,110,115,32,99,111,114,114,101,99,116,10,9,32,32,32,32,32,114,101,115,117,108,116,115,44,32,104,111,119,101,118,101,114,46,32,32,42,47,10,9,32,32,105,102,
32,40,67,80,85,95,73,83,95,80,65,95,82,73,83,67,32,40,99,112,117,41,41,10,9,32,32,32,32,123,10,9,32,32,32,32,32,32,115,119,105,116,99,104,32,40,99,112,117,41,10,9,9,123,10,9,9,32,32,99,97,115,101,32,67,80,85,95,80,65,95,82,73,83,67,49,95,48,58,32,112,
117,116,115,32,40,34,104,112,112,97,49,46,48,45,104,105,116,97,99,104,105,45,104,105,117,120,119,101,50,34,41,59,32,98,114,101,97,107,59,10,9,9,32,32,99,97,115,101,32,67,80,85,95,80,65,95,82,73,83,67,49,95,49,58,32,112,117,116,115,32,40,34,104,112,112,
97,49,46,49,45,104,105,116,97,99,104,105,45,104,105,117,120,119,101,50,34,41,59,32,98,114,101,97,107,59,10,9,9,32,32,99,97,115,101,32,67,80,85,95,80,65,95,82,73,83,67,50,95,48,58,32,112,117,116,115,32,40,34,104,112,112,97,50,46,48,45,104,105,116,97,99,
104,105,45,104,105,117,120,119,101,50,34,41,59,32,98,114,101,97,107,59,10,9,9,32,32,100,101,102,97,117,108,116,58,32,112,117,116,115,32,40,34,104,112,112,97,45,104,105,116,97,99,104,105,45,104,105,117,120,119,101,50,34,41,59,32,98,114,101,97,107,59,10,
9,9,125,10,9,32,32,32,32,125,10,9,32,32,101,108,115,101,32,105,102,32,40,67,80,85,95,73,83,95,72,80,95,77,67,54,56,75,32,40,99,112,117,41,41,10,9,32,32,32,32,112,117,116,115,32,40,34,109,54,56,107,45,104,105,116,97,99,104,105,45,104,105,117,120,119,101,
50,34,41,59,10,9,32,32,101,108,115,101,32,112,117,116,115,32,40,34,117,110,107,110,111,119,110,45,104,105,116,97,99,104,105,45,104,105,117,120,119,101,50,34,41,59,10,9,32,32,101,120,105,116,32,40,48,41,59,10,9,125,10,69,79,70,10,9,36,67,67,95,70,79,82,
95,66,85,73,76,68,32,45,111,32,36,100,117,109,109,121,32,36,100,117,109,109,121,46,99,32,38,38,32,83,89,83,84,69,77,95,78,65,77,69,61,96,36,100,117,109,109,121,96,32,38,38,10,9,9,123,32,101,99,104,111,32,34,36,83,89,83,84,69,77,95,78,65,77,69,34,59,32,
101,120,105,116,59,32,125,10,9,101,99,104,111,32,117,110,107,110,111,119,110,45,104,105,116,97,99,104,105,45,104,105,117,120,119,101,50,10,9,101,120,105,116,32,59,59,10,32,32,32,32,57,48,48,48,47,55,63,63,58,52,46,51,98,115,100,58,42,58,42,32,124,32,
57,48,48,48,47,56,63,91,55,57,93,58,52,46,51,98,115,100,58,42,58,42,32,41,10,9,101,99,104,111,32,104,112,112,97,49,46,49,45,104,112,45,98,115,100,10,9,101,120,105,116,32,59,59,10,32,32,32,32,57,48,48,48,47,56,63,63,58,52,46,51,98,115,100,58,42,58,42,
41,10,9,101,99,104,111,32,104,112,112,97,49,46,48,45,104,112,45,98,115,100,10,9,101,120,105,116,32,59,59,10,32,32,32,32,42,57,63,63,42,58,77,80,69,47,105,88,58,42,58,42,32,124,32,42,51,48,48,48,42,58,77,80,69,47,105,88,58,42,58,42,41,10,9,101,99,104,
111,32,104,112,112,97,49,46,48,45,104,112,45,109,112,101,105,120,10,9,101,120,105,116,32,59,59,10,32,32,32,32,104,112,55,63,63,58,79,83,70,49,58,42,58,42,32,124,32,104,112,56,63,91,55,57,93,58,79,83,70,49,58,42,58,42,32,41,10,9,101,99,104,111,32,104,
112,112,97,49,46,49,45,104,112,45,111,115,102,10,9,101,120,105,116,32,59,59,10,32,32,32,32,104,112,56,63,63,58,79,83,70,49,58,42,58,42,41,10,9,101,99,104,111,32,104,112,112,97,49,46,48,45,104,112,45,111,115,102,10,9,101,120,105,116,32,59,59,10,32,32,
32,32,105,42,56,54,58,79,83,70,49,58,42,58,42,41,10,9,105,102,32,91,32,45,120,32,47,117,115,114,47,115,98,105,110,47,115,121,115,118,101,114,115,105,111,110,32,93,32,59,32,116,104,101,110,10,9,32,32,32,32,101,99,104,111,32,36,123,85,78,65,77,69,95,77,
65,67,72,73,78,69,125,45,117,110,107,110,111,119,110,45,111,115,102,49,109,107,10,9,101,108,115,101,10,9,32,32,32,32,101,99,104,111,32,36,123,85,78,65,77,69,95,77,65,67,72,73,78,69,125,45,117,110,107,110,111,119,110,45,111,115,102,49,10,9,102,105,10,
9,101,120,105,116,32,59,59,10,32,32,32,32,112,97,114,105,115,99,42,58,76,105,116,101,115,42,58,42,58,42,41,10,9,101,99,104,111,32,104,112,112,97,49,46,49,45,104,112,45,108,105,116,101,115,10,9,101,120,105,116,32,59,59,10,32,32,32,32,67,49,42,58,67,111,
110,118,101,120,79,83,58,42,58,42,32,124,32,99,111,110,118,101,120,58,67,111,110,118,101,120,79,83,58,67,49,42,58,42,41,10,9,101,99,104,111,32,99,49,45,99,111,110,118,101,120,45,98,115,100,10,9,101,120,105,116,32,59,59,10,32,32,32,32,67,50,42,58,67,111,
110,118,101,120,79,83,58,42,58,42,32,124,32,99,111,110,118,101,120,58,67,111,110,118,101,120,79,83,58,67,50,42,58,42,41,10,9,105,102,32,103,101,116,115,121,115,105,110,102,111,32,45,102,32,115,99,97,108,97,114,95,97,99,99,10,9,116,104,101,110,32,101,
99,104,111,32,99,51,50,45,99,111,110,118,101,120,45,98,115,100,10,9,101,108,115,101,32,101,99,104,111,32,99,50,45,99,111,110,118,101,120,45,98,115,100,10,9,102,105,10,9,101,120,105,116,32,59,59,10,32,32,32,32,67,51,52,42,58,67,111,110,118,101,120,79,
83,58,42,58,42,32,124,32,99,111,110,118,101,120,58,67,111,110,118,101,120,79,83,58,67,51,52,42,58,42,41,10,9,101,99,104,111,32,99,51,52,45,99,111,110,118,101,120,45,98,115,100,10,9,101,120,105,116,32,59,59,10,32,32,32,32,67,51,56,42,58,67,111,110,118,
101,120,79,83,58,42,58,42,32,124,32,99,111,110,118,101,120,58,67,111,110,118,101,120,79,83,58,67,51,56,42,58,42,41,10,9,101,99,104,111,32,99,51,56,45,99,111,110,118,101,120,45,98,115,100,10,9,101,120,105,116,32,59,59,10,32,32,32,32,67,52,42,58,67,111,
110,118,101,120,79,83,58,42,58,42,32,124,32,99,111,110,118,101,120,58,67,111,110,118,101,120,79,83,58,67,52,42,58,42,41,10,9,101,99,104,111,32,99,52,45,99,111,110,118,101,120,45,98,115,100,10,9,101,120,105,116,32,59,59,10,32,32,32,32,67,82,65,89,42,89,
45,77,80,58,42,58,42,58,42,41,10,9,101,99,104,111,32,121,109,112,45,99,114,97,121,45,117,110,105,99,111,115,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,32,124,32,115,101,100,32,45,101,32,39,115,47,92,46,91,94,46,93,42,36,47,46,88,47,39,10,9,101,
120,105,116,32,59,59,10,32,32,32,32,67,82,65,89,42,91,65,45,90,93,57,48,58,42,58,42,58,42,41,10,9,101,99,104,111,32,36,123,85,78,65,77,69,95,77,65,67,72,73,78,69,125,45,99,114,97,121,45,117,110,105,99,111,115,36,123,85,78,65,77,69,95,82,69,76,69,65,83,
69,125,32,92,10,9,124,32,115,101,100,32,45,101,32,39,115,47,67,82,65,89,46,42,92,40,91,65,45,90,93,57,48,92,41,47,92,49,47,39,32,92,10,9,32,32,32,32,32,32,45,101,32,121,47,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,
47,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,47,32,92,10,9,32,32,32,32,32,32,45,101,32,39,115,47,92,46,91,94,46,93,42,36,47,46,88,47,39,10,9,101,120,105,116,32,59,59,10,32,32,32,32,67,82,65,89,
42,84,83,58,42,58,42,58,42,41,10,9,101,99,104,111,32,116,57,48,45,99,114,97,121,45,117,110,105,99,111,115,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,32,124,32,115,101,100,32,45,101,32,39,115,47,92,46,91,94,46,93,42,36,47,46,88,47,39,10,9,101,120,
105,116,32,59,59,10,32,32,32,32,67,82,65,89,42,84,51,69,58,42,58,42,58,42,41,10,9,101,99,104,111,32,97,108,112,104,97,101,118,53,45,99,114,97,121,45,117,110,105,99,111,115,109,107,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,32,124,32,115,101,100,
32,45,101,32,39,115,47,92,46,91,94,46,93,42,36,47,46,88,47,39,10,9,101,120,105,116,32,59,59,10,32,32,32,32,67,82,65,89,42,83,86,49,58,42,58,42,58,42,41,10,9,101,99,104,111,32,115,118,49,45,99,114,97,121,45,117,110,105,99,111,115,36,123,85,78,65,77,69,
95,82,69,76,69,65,83,69,125,32,124,32,115,101,100,32,45,101,32,39,115,47,92,46,91,94,46,93,42,36,47,46,88,47,39,10,9,101,120,105,116,32,59,59,10,32,32,32,32,42,58,85,78,73,67,79,83,47,109,112,58,42,58,42,41,10,9,101,99,104,111,32,99,114,97,121,110,118,
45,99,114,97,121,45,117,110,105,99,111,115,109,112,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,32,124,32,115,101,100,32,45,101,32,39,115,47,92,46,91,94,46,93,42,36,47,46,88,47,39,10,9,101,120,105,116,32,59,59,10,32,32,32,32,70,51,48,91,48,49,93,
58,85,78,73,88,95,83,121,115,116,101,109,95,86,58,42,58,42,32,124,32,70,55,48,48,58,85,78,73,88,95,83,121,115,116,101,109,95,86,58,42,58,42,41,10,9,70,85,74,73,84,83,85,95,80,82,79,67,61,96,117,110,97,109,101,32,45,109,32,124,32,116,114,32,39,65,66,67,
68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,39,32,39,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,39,96,10,9,70,85,74,73,84,83,85,95,83,89,83,61,96,117,110,97,109,101,32,
45,112,32,124,32,116,114,32,39,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,39,32,39,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,39,32,124,32,115,101,100,32,45,
101,32,39,115,47,92,47,47,47,39,96,10,9,70,85,74,73,84,83,85,95,82,69,76,61,96,101,99,104,111,32,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,32,124,32,115,101,100,32,45,101,32,39,115,47,32,47,95,47,39,96,10,9,101,99,104,111,32,34,36,123,70,85,74,
73,84,83,85,95,80,82,79,67,125,45,102,117,106,105,116,115,117,45,36,123,70,85,74,73,84,83,85,95,83,89,83,125,36,123,70,85,74,73,84,83,85,95,82,69,76,125,34,10,9,101,120,105,116,32,59,59,10,32,32,32,32,53,48,48,48,58,85,78,73,88,95,83,121,115,116,101,
109,95,86,58,52,46,42,58,42,41,10,9,70,85,74,73,84,83,85,95,83,89,83,61,96,117,110,97,109,101,32,45,112,32,124,32,116,114,32,39,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,39,32,39,97,98,99,100,101,102,103,104,105,106,
107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,39,32,124,32,115,101,100,32,45,101,32,39,115,47,92,47,47,47,39,96,10,9,70,85,74,73,84,83,85,95,82,69,76,61,96,101,99,104,111,32,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,32,124,32,
116,114,32,39,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,39,32,39,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,39,32,124,32,115,101,100,32,45,101,32,39,115,47,
32,47,95,47,39,96,10,9,101,99,104,111,32,34,115,112,97,114,99,45,102,117,106,105,116,115,117,45,36,123,70,85,74,73,84,83,85,95,83,89,83,125,36,123,70,85,74,73,84,83,85,95,82,69,76,125,34,10,9,101,120,105,116,32,59,59,10,32,32,32,32,105,42,56,54,58,66,
83,68,47,51,56,54,58,42,58,42,32,124,32,105,42,56,54,58,66,83,68,47,79,83,58,42,58,42,32,124,32,42,58,65,115,99,101,110,100,92,32,69,109,98,101,100,100,101,100,47,79,83,58,42,58,42,41,10,9,101,99,104,111,32,36,123,85,78,65,77,69,95,77,65,67,72,73,78,
69,125,45,112,99,45,98,115,100,105,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,10,9,101,120,105,116,32,59,59,10,32,32,32,32,115,112,97,114,99,42,58,66,83,68,47,79,83,58,42,58,42,41,10,9,101,99,104,111,32,115,112,97,114,99,45,117,110,107,110,111,
119,110,45,98,115,100,105,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,10,9,101,120,105,116,32,59,59,10,32,32,32,32,42,58,66,83,68,47,79,83,58,42,58,42,41,10,9,101,99,104,111,32,36,123,85,78,65,77,69,95,77,65,67,72,73,78,69,125,45,117,110,107,110,
111,119,110,45,98,115,100,105,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,10,9,101,120,105,116,32,59,59,10,32,32,32,32,42,58,70,114,101,101,66,83,68,58,42,58,42,41,10,9,85,78,65,77,69,95,80,82,79,67,69,83,83,79,82,61,96,47,117,115,114,47,98,105,
110,47,117,110,97,109,101,32,45,112,96,10,9,99,97,115,101,32,36,123,85,78,65,77,69,95,80,82,79,67,69,83,83,79,82,125,32,105,110,10,9,32,32,32,32,97,109,100,54,52,41,10,9,9,101,99,104,111,32,120,56,54,95,54,52,45,117,110,107,110,111,119,110,45,102,114,
101,101,98,115,100,96,101,99,104,111,32,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,124,115,101,100,32,45,101,32,39,115,47,91,45,40,93,46,42,47,47,39,96,32,59,59,10,9,32,32,32,32,42,41,10,9,9,101,99,104,111,32,36,123,85,78,65,77,69,95,80,82,79,
67,69,83,83,79,82,125,45,117,110,107,110,111,119,110,45,102,114,101,101,98,115,100,96,101,99,104,111,32,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,124,115,101,100,32,45,101,32,39,115,47,91,45,40,93,46,42,47,47,39,96,32,59,59,10,9,101,115,97,99,
10,9,101,120,105,116,32,59,59,10,32,32,32,32,105,42,58,67,89,71,87,73,78,42,58,42,41,10,9,101,99,104,111,32,36,123,85,78,65,77,69,95,77,65,67,72,73,78,69,125,45,112,99,45,99,121,103,119,105,110,10,9,101,120,105,116,32,59,59,10,32,32,32,32,42,58,77,73,
78,71,87,42,58,42,41,10,9,101,99,104,111,32,36,123,85,78,65,77,69,95,77,65,67,72,73,78,69,125,45,112,99,45,109,105,110,103,119,51,50,10,9,101,120,105,116,32,59,59,10,32,32,32,32,105,42,58,77,83,89,83,42,58,42,41,10,9,101,99,104,111,32,36,123,85,78,65,
77,69,95,77,65,67,72,73,78,69,125,45,112,99,45,109,115,121,115,10,9,101,120,105,116,32,59,59,10,32,32,32,32,105,42,58,119,105,110,100,111,119,115,51,50,42,58,42,41,10,9,35,32,117,110,97,109,101,32,45,109,32,105,110,99,108,117,100,101,115,32,34,45,112,
99,34,32,111,110,32,116,104,105,115,32,115,121,115,116,101,109,46,10,9,101,99,104,111,32,36,123,85,78,65,77,69,95,77,65,67,72,73,78,69,125,45,109,105,110,103,119,51,50,10,9,101,120,105,116,32,59,59,10,32,32,32,32,105,42,58,80,87,42,58,42,41,10,9,101,
99,104,111,32,36,123,85,78,65,77,69,95,77,65,67,72,73,78,69,125,45,112,99,45,112,119,51,50,10,9,101,120,105,116,32,59,59,10,32,32,32,32,42,58,73,110,116,101,114,105,120,42,58,42,41,10,9,99,97,115,101,32,36,123,85,78,65,77,69,95,77,65,67,72,73,78,69,125,
32,105,110,10,9,32,32,32,32,120,56,54,41,10,9,9,101,99,104,111,32,105,53,56,54,45,112,99,45,105,110,116,101,114,105,120,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,10,9,9,101,120,105,116,32,59,59,10,9,32,32,32,32,97,117,116,104,101,110,116,105,
99,97,109,100,32,124,32,103,101,110,117,105,110,101,105,110,116,101,108,32,124,32,69,77,54,52,84,41,10,9,9,101,99,104,111,32,120,56,54,95,54,52,45,117,110,107,110,111,119,110,45,105,110,116,101,114,105,120,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,
125,10,9,9,101,120,105,116,32,59,59,10,9,32,32,32,32,73,65,54,52,41,10,9,9,101,99,104,111,32,105,97,54,52,45,117,110,107,110,111,119,110,45,105,110,116,101,114,105,120,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,10,9,9,101,120,105,116,32,59,59,
10,9,101,115,97,99,32,59,59,10,32,32,32,32,91,51,52,53,93,56,54,58,87,105,110,100,111,119,115,95,57,53,58,42,32,124,32,91,51,52,53,93,56,54,58,87,105,110,100,111,119,115,95,57,56,58,42,32,124,32,91,51,52,53,93,56,54,58,87,105,110,100,111,119,115,95,78,
84,58,42,41,10,9,101,99,104,111,32,105,36,123,85,78,65,77,69,95,77,65,67,72,73,78,69,125,45,112,99,45,109,107,115,10,9,101,120,105,116,32,59,59,10,32,32,32,32,56,54,54,52,58,87,105,110,100,111,119,115,95,78,84,58,42,41,10,9,101,99,104,111,32,120,56,54,
95,54,52,45,112,99,45,109,107,115,10,9,101,120,105,116,32,59,59,10,32,32,32,32,105,42,58,87,105,110,100,111,119,115,95,78,84,42,58,42,32,124,32,80,101,110,116,105,117,109,42,58,87,105,110,100,111,119,115,95,78,84,42,58,42,41,10,9,35,32,72,111,119,32,
100,111,32,119,101,32,107,110,111,119,32,105,116,39,115,32,73,110,116,101,114,105,120,32,114,97,116,104,101,114,32,116,104,97,110,32,116,104,101,32,103,101,110,101,114,105,99,32,80,79,83,73,88,32,115,117,98,115,121,115,116,101,109,63,10,9,35,32,73,116,
32,97,108,115,111,32,99,111,110,102,108,105,99,116,115,32,119,105,116,104,32,112,114,101,45,50,46,48,32,118,101,114,115,105,111,110,115,32,111,102,32,65,84,38,84,32,85,87,73,78,46,32,83,104,111,117,108,100,32,119,101,10,9,35,32,85,78,65,77,69,95,77,65,
67,72,73,78,69,32,98,97,115,101,100,32,111,110,32,116,104,101,32,111,117,116,112,117,116,32,111,102,32,117,110,97,109,101,32,105,110,115,116,101,97,100,32,111,102,32,105,51,56,54,63,10,9,101,99,104,111,32,105,53,56,54,45,112,99,45,105,110,116,101,114,
105,120,10,9,101,120,105,116,32,59,59,10,32,32,32,32,105,42,58,85,87,73,78,42,58,42,41,10,9,101,99,104,111,32,36,123,85,78,65,77,69,95,77,65,67,72,73,78,69,125,45,112,99,45,117,119,105,110,10,9,101,120,105,116,32,59,59,10,32,32,32,32,97,109,100,54,52,
58,67,89,71,87,73,78,42,58,42,58,42,32,124,32,120,56,54,95,54,52,58,67,89,71,87,73,78,42,58,42,58,42,41,10,9,101,99,104,111,32,120,56,54,95,54,52,45,117,110,107,110,111,119,110,45,99,121,103,119,105,110,10,9,101,120,105,116,32,59,59,10,32,32,32,32,112,
42,58,67,89,71,87,73,78,42,58,42,41,10,9,101,99,104,111,32,112,111,119,101,114,112,99,108,101,45,117,110,107,110,111,119,110,45,99,121,103,119,105,110,10,9,101,120,105,116,32,59,59,10,32,32,32,32,112,114,101,112,42,58,83,117,110,79,83,58,53,46,42,58,
42,41,10,9,101,99,104,111,32,112,111,119,101,114,112,99,108,101,45,117,110,107,110,111,119,110,45,115,111,108,97,114,105,115,50,96,101,99,104,111,32,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,124,115,101,100,32,45,101,32,39,115,47,91,94,46,93,
42,47,47,39,96,10,9,101,120,105,116,32,59,59,10,32,32,32,32,42,58,71,78,85,58,42,58,42,41,10,9,35,32,116,104,101,32,71,78,85,32,115,121,115,116,101,109,10,9,101,99,104,111,32,96,101,99,104,111,32,36,123,85,78,65,77,69,95,77,65,67,72,73,78,69,125,124,
115,101,100,32,45,101,32,39,115,44,91,45,47,93,46,42,36,44,44,39,96,45,117,110,107,110,111,119,110,45,103,110,117,96,101,99,104,111,32,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,124,115,101,100,32,45,101,32,39,115,44,47,46,42,36,44,44,39,96,10,
9,101,120,105,116,32,59,59,10,32,32,32,32,42,58,71,78,85,47,42,58,42,58,42,41,10,9,35,32,111,116,104,101,114,32,115,121,115,116,101,109,115,32,119,105,116,104,32,71,78,85,32,108,105,98,99,32,97,110,100,32,117,115,101,114,108,97,110,100,10,9,101,99,104,
111,32,36,123,85,78,65,77,69,95,77,65,67,72,73,78,69,125,45,117,110,107,110,111,119,110,45,96,101,99,104,111,32,36,123,85,78,65,77,69,95,83,89,83,84,69,77,125,32,124,32,115,101,100,32,39,115,44,94,91,94,47,93,42,47,44,44,39,32,124,32,116,114,32,39,91,
65,45,90,93,39,32,39,91,97,45,122,93,39,96,96,101,99,104,111,32,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,124,115,101,100,32,45,101,32,39,115,47,91,45,40,93,46,42,47,47,39,96,45,103,110,117,10,9,101,120,105,116,32,59,59,10,32,32,32,32,105,42,
56,54,58,77,105,110,105,120,58,42,58,42,41,10,9,101,99,104,111,32,36,123,85,78,65,77,69,95,77,65,67,72,73,78,69,125,45,112,99,45,109,105,110,105,120,10,9,101,120,105,116,32,59,59,10,32,32,32,32,97,97,114,99,104,54,52,58,76,105,110,117,120,58,42,58,42,
41,10,9,101,99,104,111,32,36,123,85,78,65,77,69,95,77,65,67,72,73,78,69,125,45,117,110,107,110,111,119,110,45,108,105,110,117,120,45,103,110,117,10,9,101,120,105,116,32,59,59,10,32,32,32,32,97,97,114,99,104,54,52,95,98,101,58,76,105,110,117,120,58,42,
58,42,41,10,9,85,78,65,77,69,95,77,65,67,72,73,78,69,61,97,97,114,99,104,54,52,95,98,101,10,9,101,99,104,111,32,36,123,85,78,65,77,69,95,77,65,67,72,73,78,69,125,45,117,110,107,110,111,119,110,45,108,105,110,117,120,45,103,110,117,10,9,101,120,105,116,
32,59,59,10,32,32,32,32,97,108,112,104,97,58,76,105,110,117,120,58,42,58,42,41,10,9,99,97,115,101,32,96,115,101,100,32,45,110,32,39,47,94,99,112,117,32,109,111,100,101,108,47,115,47,94,46,42,58,32,92,40,46,42,92,41,47,92,49,47,112,39,32,60,32,47,112,
114,111,99,47,99,112,117,105,110,102,111,96,32,105,110,10,9,32,32,69,86,53,41,32,32,32,85,78,65,77,69,95,77,65,67,72,73,78,69,61,97,108,112,104,97,101,118,53,32,59,59,10,9,32,32,69,86,53,54,41,32,32,85,78,65,77,69,95,77,65,67,72,73,78,69,61,97,108,112,
104,97,101,118,53,54,32,59,59,10,9,32,32,80,67,65,53,54,41,32,85,78,65,77,69,95,77,65,67,72,73,78,69,61,97,108,112,104,97,112,99,97,53,54,32,59,59,10,9,32,32,80,67,65,53,55,41,32,85,78,65,77,69,95,77,65,67,72,73,78,69,61,97,108,112,104,97,112,99,97,53,
54,32,59,59,10,9,32,32,69,86,54,41,32,32,32,85,78,65,77,69,95,77,65,67,72,73,78,69,61,97,108,112,104,97,101,118,54,32,59,59,10,9,32,32,69,86,54,55,41,32,32,85,78,65,77,69,95,77,65,67,72,73,78,69,61,97,108,112,104,97,101,118,54,55,32,59,59,10,9,32,32,
69,86,54,56,42,41,32,85,78,65,77,69,95,77,65,67,72,73,78,69,61,97,108,112,104,97,101,118,54,56,32,59,59,10,9,101,115,97,99,10,9,111,98,106,100,117,109,112,32,45,45,112,114,105,118,97,116,101,45,104,101,97,100,101,114,115,32,47,98,105,110,47,115,104,32,
124,32,103,114,101,112,32,45,113,32,108,100,46,115,111,46,49,10,9,105,102,32,116,101,115,116,32,34,36,63,34,32,61,32,48,32,59,32,116,104,101,110,32,76,73,66,67,61,34,108,105,98,99,49,34,32,59,32,101,108,115,101,32,76,73,66,67,61,34,34,32,59,32,102,105,
10,9,101,99,104,111,32,36,123,85,78,65,77,69,95,77,65,67,72,73,78,69,125,45,117,110,107,110,111,119,110,45,108,105,110,117,120,45,103,110,117,36,123,76,73,66,67,125,10,9,101,120,105,116,32,59,59,10,32,32,32,32,97,114,109,42,58,76,105,110,117,120,58,42,
58,42,41,10,9,101,118,97,108,32,36,115,101,116,95,99,99,95,102,111,114,95,98,117,105,108,100,10,9,105,102,32,101,99,104,111,32,95,95,65,82,77,95,69,65,66,73,95,95,32,124,32,36,67,67,95,70,79,82,95,66,85,73,76,68,32,45,69,32,45,32,50,62,47,100,101,118,
47,110,117,108,108,32,92,10,9,32,32,32,32,124,32,103,114,101,112,32,45,113,32,95,95,65,82,77,95,69,65,66,73,95,95,10,9,116,104,101,110,10,9,32,32,32,32,101,99,104,111,32,36,123,85,78,65,77,69,95,77,65,67,72,73,78,69,125,45,117,110,107,110,111,119,110,
45,108,105,110,117,120,45,103,110,117,10,9,101,108,115,101,10,9,32,32,32,32,105,102,32,101,99,104,111,32,95,95,65,82,77,95,80,67,83,95,86,70,80,32,124,32,36,67,67,95,70,79,82,95,66,85,73,76,68,32,45,69,32,45,32,50,62,47,100,101,118,47,110,117,108,108,
32,92,10,9,9,124,32,103,114,101,112,32,45,113,32,95,95,65,82,77,95,80,67,83,95,86,70,80,10,9,32,32,32,32,116,104,101,110,10,9,9,101,99,104,111,32,36,123,85,78,65,77,69,95,77,65,67,72,73,78,69,125,45,117,110,107,110,111,119,110,45,108,105,110,117,120,
45,103,110,117,101,97,98,105,10,9,32,32,32,32,101,108,115,101,10,9,9,101,99,104,111,32,36,123,85,78,65,77,69,95,77,65,67,72,73,78,69,125,45,117,110,107,110,111,119,110,45,108,105,110,117,120,45,103,110,117,101,97,98,105,104,102,10,9,32,32,32,32,102,105,
10,9,102,105,10,9,101,120,105,116,32,59,59,10,32,32,32,32,97,118,114,51,50,42,58,76,105,110,117,120,58,42,58,42,41,10,9,101,99,104,111,32,36,123,85,78,65,77,69,95,77,65,67,72,73,78,69,125,45,117,110,107,110,111,119,110,45,108,105,110,117,120,45,103,110,
117,10,9,101,120,105,116,32,59,59,10,32,32,32,32,99,114,105,115,58,76,105,110,117,120,58,42,58,42,41,10,9,101,99,104,111,32,36,123,85,78,65,77,69,95,77,65,67,72,73,78,69,125,45,97,120,105,115,45,108,105,110,117,120,45,103,110,117,10,9,101,120,105,116,
32,59,59,10,32,32,32,32,99,114,105,115,118,51,50,58,76,105,110,117,120,58,42,58,42,41,10,9,101,99,104,111,32,36,123,85,78,65,77,69,95,77,65,67,72,73,78,69,125,45,97,120,105,115,45,108,105,110,117,120,45,103,110,117,10,9,101,120,105,116,32,59,59,10,32,
32,32,32,102,114,118,58,76,105,110,117,120,58,42,58,42,41,10,9,101,99,104,111,32,36,123,85,78,65,77,69,95,77,65,67,72,73,78,69,125,45,117,110,107,110,111,119,110,45,108,105,110,117,120,45,103,110,117,10,9,101,120,105,116,32,59,59,10,32,32,32,32,104,101,
120,97,103,111,110,58,76,105,110,117,120,58,42,58,42,41,10,9,101,99,104,111,32,36,123,85,78,65,77,69,95,77,65,67,72,73,78,69,125,45,117,110,107,110,111,119,110,45,108,105,110,117,120,45,103,110,117,10,9,101,120,105,116,32,59,59,10,32,32,32,32,105,42,
56,54,58,76,105,110,117,120,58,42,58,42,41,10,9,76,73,66,67,61,103,110,117,10,9,101,118,97,108,32,36,115,101,116,95,99,99,95,102,111,114,95,98,117,105,108,100,10,9,115,101,100,32,39,115,47,94,9,47,47,39,32,60,60,32,69,79,70,32,62,36,100,117,109,109,121,
46,99,10,9,35,105,102,100,101,102,32,95,95,100,105,101,116,108,105,98,99,95,95,10,9,76,73,66,67,61,100,105,101,116,108,105,98,99,10,9,35,101,110,100,105,102,10,69,79,70,10,9,101,118,97,108,32,96,36,67,67,95,70,79,82,95,66,85,73,76,68,32,45,69,32,36,100,
117,109,109,121,46,99,32,50,62,47,100,101,118,47,110,117,108,108,32,124,32,103,114,101,112,32,39,94,76,73,66,67,39,96,10,9,101,99,104,111,32,34,36,123,85,78,65,77,69,95,77,65,67,72,73,78,69,125,45,112,99,45,108,105,110,117,120,45,36,123,76,73,66,67,125,
34,10,9,101,120,105,116,32,59,59,10,32,32,32,32,105,97,54,52,58,76,105,110,117,120,58,42,58,42,41,10,9,101,99,104,111,32,36,123,85,78,65,77,69,95,77,65,67,72,73,78,69,125,45,117,110,107,110,111,119,110,45,108,105,110,117,120,45,103,110,117,10,9,101,120,
105,116,32,59,59,10,32,32,32,32,109,51,50,114,42,58,76,105,110,117,120,58,42,58,42,41,10,9,101,99,104,111,32,36,123,85,78,65,77,69,95,77,65,67,72,73,78,69,125,45,117,110,107,110,111,119,110,45,108,105,110,117,120,45,103,110,117,10,9,101,120,105,116,32,
59,59,10,32,32,32,32,109,54,56,42,58,76,105,110,117,120,58,42,58,42,41,10,9,101,99,104,111,32,36,123,85,78,65,77,69,95,77,65,67,72,73,78,69,125,45,117,110,107,110,111,119,110,45,108,105,110,117,120,45,103,110,117,10,9,101,120,105,116,32,59,59,10,32,32,
32,32,109,105,112,115,58,76,105,110,117,120,58,42,58,42,32,124,32,109,105,112,115,54,52,58,76,105,110,117,120,58,42,58,42,41,10,9,101,118,97,108,32,36,115,101,116,95,99,99,95,102,111,114,95,98,117,105,108,100,10,9,115,101,100,32,39,115,47,94,9,47,47,
39,32,60,60,32,69,79,70,32,62,36,100,117,109,109,121,46,99,10,9,35,117,110,100,101,102,32,67,80,85,10,9,35,117,110,100,101,102,32,36,123,85,78,65,77,69,95,77,65,67,72,73,78,69,125,10,9,35,117,110,100,101,102,32,36,123,85,78,65,77,69,95,77,65,67,72,73,
78,69,125,101,108,10,9,35,105,102,32,100,101,102,105,110,101,100,40,95,95,77,73,80,83,69,76,95,95,41,32,124,124,32,100,101,102,105,110,101,100,40,95,95,77,73,80,83,69,76,41,32,124,124,32,100,101,102,105,110,101,100,40,95,77,73,80,83,69,76,41,32,124,124,
32,100,101,102,105,110,101,100,40,77,73,80,83,69,76,41,10,9,67,80,85,61,36,123,85,78,65,77,69,95,77,65,67,72,73,78,69,125,101,108,10,9,35,101,108,115,101,10,9,35,105,102,32,100,101,102,105,110,101,100,40,95,95,77,73,80,83,69,66,95,95,41,32,124,124,32,
100,101,102,105,110,101,100,40,95,95,77,73,80,83,69,66,41,32,124,124,32,100,101,102,105,110,101,100,40,95,77,73,80,83,69,66,41,32,124,124,32,100,101,102,105,110,101,100,40,77,73,80,83,69,66,41,10,9,67,80,85,61,36,123,85,78,65,77,69,95,77,65,67,72,73,
78,69,125,10,9,35,101,108,115,101,10,9,67,80,85,61,10,9,35,101,110,100,105,102,10,9,35,101,110,100,105,102,10,69,79,70,10,9,101,118,97,108,32,96,36,67,67,95,70,79,82,95,66,85,73,76,68,32,45,69,32,36,100,117,109,109,121,46,99,32,50,62,47,100,101,118,47,
110,117,108,108,32,124,32,103,114,101,112,32,39,94,67,80,85,39,96,10,9,116,101,115,116,32,120,34,36,123,67,80,85,125,34,32,33,61,32,120,32,38,38,32,123,32,101,99,104,111,32,34,36,123,67,80,85,125,45,117,110,107,110,111,119,110,45,108,105,110,117,120,
45,103,110,117,34,59,32,101,120,105,116,59,32,125,10,9,59,59,10,32,32,32,32,111,114,51,50,58,76,105,110,117,120,58,42,58,42,41,10,9,101,99,104,111,32,36,123,85,78,65,77,69,95,77,65,67,72,73,78,69,125,45,117,110,107,110,111,119,110,45,108,105,110,117,
120,45,103,110,117,10,9,101,120,105,116,32,59,59,10,32,32,32,32,112,97,100,114,101,58,76,105,110,117,120,58,42,58,42,41,10,9,101,99,104,111,32,115,112,97,114,99,45,117,110,107,110,111,119,110,45,108,105,110,117,120,45,103,110,117,10,9,101,120,105,116,
32,59,59,10,32,32,32,32,112,97,114,105,115,99,54,52,58,76,105,110,117,120,58,42,58,42,32,124,32,104,112,112,97,54,52,58,76,105,110,117,120,58,42,58,42,41,10,9,101,99,104,111,32,104,112,112,97,54,52,45,117,110,107,110,111,119,110,45,108,105,110,117,120,
45,103,110,117,10,9,101,120,105,116,32,59,59,10,32,32,32,32,112,97,114,105,115,99,58,76,105,110,117,120,58,42,58,42,32,124,32,104,112,112,97,58,76,105,110,117,120,58,42,58,42,41,10,9,35,32,76,111,111,107,32,102,111,114,32,67,80,85,32,108,101,118,101,
108,10,9,99,97,115,101,32,96,103,114,101,112,32,39,94,99,112,117,91,94,97,45,122,93,42,58,39,32,47,112,114,111,99,47,99,112,117,105,110,102,111,32,50,62,47,100,101,118,47,110,117,108,108,32,124,32,99,117,116,32,45,100,39,32,39,32,45,102,50,96,32,105,
110,10,9,32,32,80,65,55,42,41,32,101,99,104,111,32,104,112,112,97,49,46,49,45,117,110,107,110,111,119,110,45,108,105,110,117,120,45,103,110,117,32,59,59,10,9,32,32,80,65,56,42,41,32,101,99,104,111,32,104,112,112,97,50,46,48,45,117,110,107,110,111,119,
110,45,108,105,110,117,120,45,103,110,117,32,59,59,10,9,32,32,42,41,32,32,32,32,101,99,104,111,32,104,112,112,97,45,117,110,107,110,111,119,110,45,108,105,110,117,120,45,103,110,117,32,59,59,10,9,101,115,97,99,10,9,101,120,105,116,32,59,59,10,32,32,32,
32,112,112,99,54,52,58,76,105,110,117,120,58,42,58,42,41,10,9,101,99,104,111,32,112,111,119,101,114,112,99,54,52,45,117,110,107,110,111,119,110,45,108,105,110,117,120,45,103,110,117,10,9,101,120,105,116,32,59,59,10,32,32,32,32,112,112,99,58,76,105,110,
117,120,58,42,58,42,41,10,9,101,99,104,111,32,112,111,119,101,114,112,99,45,117,110,107,110,111,119,110,45,108,105,110,117,120,45,103,110,117,10,9,101,120,105,116,32,59,59,10,32,32,32,32,115,51,57,48,58,76,105,110,117,120,58,42,58,42,32,124,32,115,51,
57,48,120,58,76,105,110,117,120,58,42,58,42,41,10,9,101,99,104,111,32,36,123,85,78,65,77,69,95,77,65,67,72,73,78,69,125,45,105,98,109,45,108,105,110,117,120,10,9,101,120,105,116,32,59,59,10,32,32,32,32,115,104,54,52,42,58,76,105,110,117,120,58,42,58,
42,41,10,9,101,99,104,111,32,36,123,85,78,65,77,69,95,77,65,67,72,73,78,69,125,45,117,110,107,110,111,119,110,45,108,105,110,117,120,45,103,110,117,10,9,101,120,105,116,32,59,59,10,32,32,32,32,115,104,42,58,76,105,110,117,120,58,42,58,42,41,10,9,101,
99,104,111,32,36,123,85,78,65,77,69,95,77,65,67,72,73,78,69,125,45,117,110,107,110,111,119,110,45,108,105,110,117,120,45,103,110,117,10,9,101,120,105,116,32,59,59,10,32,32,32,32,115,112,97,114,99,58,76,105,110,117,120,58,42,58,42,32,124,32,115,112,97,
114,99,54,52,58,76,105,110,117,120,58,42,58,42,41,10,9,101,99,104,111,32,36,123,85,78,65,77,69,95,77,65,67,72,73,78,69,125,45,117,110,107,110,111,119,110,45,108,105,110,117,120,45,103,110,117,10,9,101,120,105,116,32,59,59,10,32,32,32,32,116,105,108,101,
42,58,76,105,110,117,120,58,42,58,42,41,10,9,101,99,104,111,32,36,123,85,78,65,77,69,95,77,65,67,72,73,78,69,125,45,117,110,107,110,111,119,110,45,108,105,110,117,120,45,103,110,117,10,9,101,120,105,116,32,59,59,10,32,32,32,32,118,97,120,58,76,105,110,
117,120,58,42,58,42,41,10,9,101,99,104,111,32,36,123,85,78,65,77,69,95,77,65,67,72,73,78,69,125,45,100,101,99,45,108,105,110,117,120,45,103,110,117,10,9,101,120,105,116,32,59,59,10,32,32,32,32,120,56,54,95,54,52,58,76,105,110,117,120,58,42,58,42,41,10,
9,101,99,104,111,32,36,123,85,78,65,77,69,95,77,65,67,72,73,78,69,125,45,117,110,107,110,111,119,110,45,108,105,110,117,120,45,103,110,117,10,9,101,120,105,116,32,59,59,10,32,32,32,32,120,116,101,110,115,97,42,58,76,105,110,117,120,58,42,58,42,41,10,
9,101,99,104,111,32,36,123,85,78,65,77,69,95,77,65,67,72,73,78,69,125,45,117,110,107,110,111,119,110,45,108,105,110,117,120,45,103,110,117,10,9,101,120,105,116,32,59,59,10,32,32,32,32,105,42,56,54,58,68,89,78,73,88,47,112,116,120,58,52,42,58,42,41,10,
9,35,32,112,116,120,32,52,46,48,32,100,111,101,115,32,117,110,97,109,101,32,45,115,32,99,111,114,114,101,99,116,108,121,44,32,119,105,116,104,32,68,89,78,73,88,47,112,116,120,32,105,110,32,116,104,101,114,101,46,10,9,35,32,101,97,114,108,105,101,114,
32,118,101,114,115,105,111,110,115,32,97,114,101,32,109,101,115,115,101,100,32,117,112,32,97,110,100,32,112,117,116,32,116,104,101,32,110,111,100,101,110,97,109,101,32,105,110,32,98,111,116,104,10,9,35,32,115,121,115,110,97,109,101,32,97,110,100,32,110,
111,100,101,110,97,109,101,46,10,9,101,99,104,111,32,105,51,56,54,45,115,101,113,117,101,110,116,45,115,121,115,118,52,10,9,101,120,105,116,32,59,59,10,32,32,32,32,105,42,56,54,58,85,78,73,88,95,83,86,58,52,46,50,77,80,58,50,46,42,41,10,9,35,32,85,110,
105,120,119,97,114,101,32,105,115,32,97,110,32,111,102,102,115,104,111,111,116,32,111,102,32,83,86,82,52,44,32,98,117,116,32,105,116,32,104,97,115,32,105,116,115,32,111,119,110,32,118,101,114,115,105,111,110,10,9,35,32,110,117,109,98,101,114,32,115,101,
114,105,101,115,32,115,116,97,114,116,105,110,103,32,119,105,116,104,32,50,46,46,46,10,9,35,32,73,32,97,109,32,110,111,116,32,112,111,115,105,116,105,118,101,32,116,104,97,116,32,111,116,104,101,114,32,83,86,82,52,32,115,121,115,116,101,109,115,32,119,
111,110,39,116,32,109,97,116,99,104,32,116,104,105,115,44,10,9,35,32,73,32,106,117,115,116,32,104,97,118,101,32,116,111,32,104,111,112,101,46,32,32,45,45,32,114,109,115,46,10,9,35,32,85,115,101,32,115,121,115,118,52,46,50,117,119,46,46,46,32,115,111,
32,116,104,97,116,32,115,121,115,118,52,42,32,109,97,116,99,104,101,115,32,105,116,46,10,9,101,99,104,111,32,36,123,85,78,65,77,69,95,77,65,67,72,73,78,69,125,45,112,99,45,115,121,115,118,52,46,50,117,119,36,123,85,78,65,77,69,95,86,69,82,83,73,79,78,
125,10,9,101,120,105,116,32,59,59,10,32,32,32,32,105,42,56,54,58,79,83,47,50,58,42,58,42,41,10,9,35,32,73,102,32,119,101,32,119,101,114,101,32,97,98,108,101,32,116,111,32,102,105,110,100,32,96,117,110,97,109,101,39,44,32,116,104,101,110,32,69,77,88,32,
85,110,105,120,32,99,111,109,112,97,116,105,98,105,108,105,116,121,10,9,35,32,105,115,32,112,114,111,98,97,98,108,121,32,105,110,115,116,97,108,108,101,100,46,10,9,101,99,104,111,32,36,123,85,78,65,77,69,95,77,65,67,72,73,78,69,125,45,112,99,45,111,115,
50,45,101,109,120,10,9,101,120,105,116,32,59,59,10,32,32,32,32,105,42,56,54,58,88,84,83,45,51,48,48,58,42,58,83,84,79,80,41,10,9,101,99,104,111,32,36,123,85,78,65,77,69,95,77,65,67,72,73,78,69,125,45,117,110,107,110,111,119,110,45,115,116,111,112,10,
9,101,120,105,116,32,59,59,10,32,32,32,32,105,42,56,54,58,97,116,104,101,111,115,58,42,58,42,41,10,9,101,99,104,111,32,36,123,85,78,65,77,69,95,77,65,67,72,73,78,69,125,45,117,110,107,110,111,119,110,45,97,116,104,101,111,115,10,9,101,120,105,116,32,
59,59,10,32,32,32,32,105,42,56,54,58,115,121,108,108,97,98,108,101,58,42,58,42,41,10,9,101,99,104,111,32,36,123,85,78,65,77,69,95,77,65,67,72,73,78,69,125,45,112,99,45,115,121,108,108,97,98,108,101,10,9,101,120,105,116,32,59,59,10,32,32,32,32,105,42,
56,54,58,76,121,110,120,79,83,58,50,46,42,58,42,32,124,32,105,42,56,54,58,76,121,110,120,79,83,58,51,46,91,48,49,93,42,58,42,32,124,32,105,42,56,54,58,76,121,110,120,79,83,58,52,46,91,48,50,93,42,58,42,41,10,9,101,99,104,111,32,105,51,56,54,45,117,110,
107,110,111,119,110,45,108,121,110,120,111,115,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,10,9,101,120,105,116,32,59,59,10,32,32,32,32,105,42,56,54,58,42,68,79,83,58,42,58,42,41,10,9,101,99,104,111,32,36,123,85,78,65,77,69,95,77,65,67,72,73,78,
69,125,45,112,99,45,109,115,100,111,115,100,106,103,112,112,10,9,101,120,105,116,32,59,59,10,32,32,32,32,105,42,56,54,58,42,58,52,46,42,58,42,32,124,32,105,42,56,54,58,83,89,83,84,69,77,95,86,58,52,46,42,58,42,41,10,9,85,78,65,77,69,95,82,69,76,61,96,
101,99,104,111,32,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,32,124,32,115,101,100,32,39,115,47,92,47,77,80,36,47,47,39,96,10,9,105,102,32,103,114,101,112,32,78,111,118,101,108,108,32,47,117,115,114,47,105,110,99,108,117,100,101,47,108,105,110,
107,46,104,32,62,47,100,101,118,47,110,117,108,108,32,50,62,47,100,101,118,47,110,117,108,108,59,32,116,104,101,110,10,9,9,101,99,104,111,32,36,123,85,78,65,77,69,95,77,65,67,72,73,78,69,125,45,117,110,105,118,101,108,45,115,121,115,118,36,123,85,78,
65,77,69,95,82,69,76,125,10,9,101,108,115,101,10,9,9,101,99,104,111,32,36,123,85,78,65,77,69,95,77,65,67,72,73,78,69,125,45,112,99,45,115,121,115,118,36,123,85,78,65,77,69,95,82,69,76,125,10,9,102,105,10,9,101,120,105,116,32,59,59,10,32,32,32,32,105,
42,56,54,58,42,58,53,58,91,54,55,56,93,42,41,10,9,35,32,85,110,105,120,87,97,114,101,32,55,46,120,44,32,79,112,101,110,85,78,73,88,32,97,110,100,32,79,112,101,110,83,101,114,118,101,114,32,54,46,10,9,99,97,115,101,32,96,47,98,105,110,47,117,110,97,109,
101,32,45,88,32,124,32,103,114,101,112,32,34,94,77,97,99,104,105,110,101,34,96,32,105,110,10,9,32,32,32,32,42,52,56,54,42,41,9,32,32,32,32,32,85,78,65,77,69,95,77,65,67,72,73,78,69,61,105,52,56,54,32,59,59,10,9,32,32,32,32,42,80,101,110,116,105,117,109,
41,9,32,32,32,32,32,85,78,65,77,69,95,77,65,67,72,73,78,69,61,105,53,56,54,32,59,59,10,9,32,32,32,32,42,80,101,110,116,42,124,42,67,101,108,101,114,111,110,41,32,85,78,65,77,69,95,77,65,67,72,73,78,69,61,105,54,56,54,32,59,59,10,9,101,115,97,99,10,9,
101,99,104,111,32,36,123,85,78,65,77,69,95,77,65,67,72,73,78,69,125,45,117,110,107,110,111,119,110,45,115,121,115,118,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,36,123,85,78,65,77,69,95,83,89,83,84,69,77,125,36,123,85,78,65,77,69,95,86,69,82,83,
73,79,78,125,10,9,101,120,105,116,32,59,59,10,32,32,32,32,105,42,56,54,58,42,58,51,46,50,58,42,41,10,9,105,102,32,116,101,115,116,32,45,102,32,47,117,115,114,47,111,112,116,105,111,110,115,47,99,98,46,110,97,109,101,59,32,116,104,101,110,10,9,9,85,78,
65,77,69,95,82,69,76,61,96,115,101,100,32,45,110,32,39,115,47,46,42,86,101,114,115,105,111,110,32,47,47,112,39,32,60,47,117,115,114,47,111,112,116,105,111,110,115,47,99,98,46,110,97,109,101,96,10,9,9,101,99,104,111,32,36,123,85,78,65,77,69,95,77,65,67,
72,73,78,69,125,45,112,99,45,105,115,99,36,85,78,65,77,69,95,82,69,76,10,9,101,108,105,102,32,47,98,105,110,47,117,110,97,109,101,32,45,88,32,50,62,47,100,101,118,47,110,117,108,108,32,62,47,100,101,118,47,110,117,108,108,32,59,32,116,104,101,110,10,
9,9,85,78,65,77,69,95,82,69,76,61,96,40,47,98,105,110,47,117,110,97,109,101,32,45,88,124,103,114,101,112,32,82,101,108,101,97,115,101,124,115,101,100,32,45,101,32,39,115,47,46,42,61,32,47,47,39,41,96,10,9,9,40,47,98,105,110,47,117,110,97,109,101,32,45,
88,124,103,114,101,112,32,105,56,48,52,56,54,32,62,47,100,101,118,47,110,117,108,108,41,32,38,38,32,85,78,65,77,69,95,77,65,67,72,73,78,69,61,105,52,56,54,10,9,9,40,47,98,105,110,47,117,110,97,109,101,32,45,88,124,103,114,101,112,32,39,94,77,97,99,104,
105,110,101,46,42,80,101,110,116,105,117,109,39,32,62,47,100,101,118,47,110,117,108,108,41,32,92,10,9,9,9,38,38,32,85,78,65,77,69,95,77,65,67,72,73,78,69,61,105,53,56,54,10,9,9,40,47,98,105,110,47,117,110,97,109,101,32,45,88,124,103,114,101,112,32,39,
94,77,97,99,104,105,110,101,46,42,80,101,110,116,32,42,73,73,39,32,62,47,100,101,118,47,110,117,108,108,41,32,92,10,9,9,9,38,38,32,85,78,65,77,69,95,77,65,67,72,73,78,69,61,105,54,56,54,10,9,9,40,47,98,105,110,47,117,110,97,109,101,32,45,88,124,103,114,
101,112,32,39,94,77,97,99,104,105,110,101,46,42,80,101,110,116,105,117,109,32,80,114,111,39,32,62,47,100,101,118,47,110,117,108,108,41,32,92,10,9,9,9,38,38,32,85,78,65,77,69,95,77,65,67,72,73,78,69,61,105,54,56,54,10,9,9,101,99,104,111,32,36,123,85,78,
65,77,69,95,77,65,67,72,73,78,69,125,45,112,99,45,115,99,111,36,85,78,65,77,69,95,82,69,76,10,9,101,108,115,101,10,9,9,101,99,104,111,32,36,123,85,78,65,77,69,95,77,65,67,72,73,78,69,125,45,112,99,45,115,121,115,118,51,50,10,9,102,105,10,9,101,120,105,
116,32,59,59,10,32,32,32,32,112,99,58,42,58,42,58,42,41,10,9,35,32,76,101,102,116,32,104,101,114,101,32,102,111,114,32,99,111,109,112,97,116,105,98,105,108,105,116,121,58,10,9,35,32,117,110,97,109,101,32,45,109,32,112,114,105,110,116,115,32,102,111,114,
32,68,74,71,80,80,32,97,108,119,97,121,115,32,39,112,99,39,44,32,98,117,116,32,105,116,32,112,114,105,110,116,115,32,110,111,116,104,105,110,103,32,97,98,111,117,116,10,9,35,32,116,104,101,32,112,114,111,99,101,115,115,111,114,44,32,115,111,32,119,101,
32,112,108,97,121,32,115,97,102,101,32,98,121,32,97,115,115,117,109,105,110,103,32,105,53,56,54,46,10,9,35,32,78,111,116,101,58,32,119,104,97,116,101,118,101,114,32,116,104,105,115,32,105,115,44,32,105,116,32,77,85,83,84,32,98,101,32,116,104,101,32,115,
97,109,101,32,97,115,32,119,104,97,116,32,99,111,110,102,105,103,46,115,117,98,10,9,35,32,112,114,105,110,116,115,32,102,111,114,32,116,104,101,32,34,100,106,103,112,112,34,32,104,111,115,116,44,32,111,114,32,101,108,115,101,32,71,68,66,32,99,111,110,
102,105,103,117,114,121,32,119,105,108,108,32,100,101,99,105,100,101,32,116,104,97,116,10,9,35,32,116,104,105,115,32,105,115,32,97,32,99,114,111,115,115,45,98,117,105,108,100,46,10,9,101,99,104,111,32,105,53,56,54,45,112,99,45,109,115,100,111,115,100,
106,103,112,112,10,9,101,120,105,116,32,59,59,10,32,32,32,32,73,110,116,101,108,58,77,97,99,104,58,51,42,58,42,41,10,9,101,99,104,111,32,105,51,56,54,45,112,99,45,109,97,99,104,51,10,9,101,120,105,116,32,59,59,10,32,32,32,32,112,97,114,97,103,111,110,
58,42,58,42,58,42,41,10,9,101,99,104,111,32,105,56,54,48,45,105,110,116,101,108,45,111,115,102,49,10,9,101,120,105,116,32,59,59,10,32,32,32,32,105,56,54,48,58,42,58,52,46,42,58,42,41,32,35,32,105,56,54,48,45,83,86,82,52,10,9,105,102,32,103,114,101,112,
32,83,116,97,114,100,101,110,116,32,47,117,115,114,47,105,110,99,108,117,100,101,47,115,121,115,47,117,97,100,109,105,110,46,104,32,62,47,100,101,118,47,110,117,108,108,32,50,62,38,49,32,59,32,116,104,101,110,10,9,32,32,101,99,104,111,32,105,56,54,48,
45,115,116,97,114,100,101,110,116,45,115,121,115,118,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,32,35,32,83,116,97,114,100,101,110,116,32,86,105,115,116,114,97,32,105,56,54,48,45,83,86,82,52,10,9,101,108,115,101,32,35,32,65,100,100,32,111,116,
104,101,114,32,105,56,54,48,45,83,86,82,52,32,118,101,110,100,111,114,115,32,98,101,108,111,119,32,97,115,32,116,104,101,121,32,97,114,101,32,100,105,115,99,111,118,101,114,101,100,46,10,9,32,32,101,99,104,111,32,105,56,54,48,45,117,110,107,110,111,119,
110,45,115,121,115,118,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,32,32,35,32,85,110,107,110,111,119,110,32,105,56,54,48,45,83,86,82,52,10,9,102,105,10,9,101,120,105,116,32,59,59,10,32,32,32,32,109,105,110,105,42,58,67,84,73,88,58,83,89,83,42,
53,58,42,41,10,9,35,32,34,109,105,110,105,102,114,97,109,101,34,10,9,101,99,104,111,32,109,54,56,48,49,48,45,99,111,110,118,101,114,103,101,110,116,45,115,121,115,118,10,9,101,120,105,116,32,59,59,10,32,32,32,32,109,99,54,56,107,58,85,78,73,88,58,83,
89,83,84,69,77,53,58,51,46,53,49,109,41,10,9,101,99,104,111,32,109,54,56,107,45,99,111,110,118,101,114,103,101,110,116,45,115,121,115,118,10,9,101,120,105,116,32,59,59,10,32,32,32,32,77,54,56,48,63,48,58,68,45,78,73,88,58,53,46,51,58,42,41,10,9,101,99,
104,111,32,109,54,56,107,45,100,105,97,98,45,100,110,105,120,10,9,101,120,105,116,32,59,59,10,32,32,32,32,77,54,56,42,58,42,58,82,51,86,91,53,54,55,56,93,42,58,42,41,10,9,116,101,115,116,32,45,114,32,47,115,121,115,86,54,56,32,38,38,32,123,32,101,99,
104,111,32,39,109,54,56,107,45,109,111,116,111,114,111,108,97,45,115,121,115,118,39,59,32,101,120,105,116,59,32,125,32,59,59,10,32,32,32,32,51,91,51,52,53,93,63,63,58,42,58,52,46,48,58,51,46,48,32,124,32,51,91,51,52,93,63,63,65,58,42,58,52,46,48,58,51,
46,48,32,124,32,51,91,51,52,93,63,63,44,42,58,42,58,52,46,48,58,51,46,48,32,124,32,51,91,51,52,93,63,63,47,42,58,42,58,52,46,48,58,51,46,48,32,124,32,52,52,48,48,58,42,58,52,46,48,58,51,46,48,32,124,32,52,56,53,48,58,42,58,52,46,48,58,51,46,48,32,124,
32,83,75,65,52,48,58,42,58,52,46,48,58,51,46,48,32,124,32,83,68,83,50,58,42,58,52,46,48,58,51,46,48,32,124,32,83,72,71,50,58,42,58,52,46,48,58,51,46,48,32,124,32,83,55,53,48,49,42,58,42,58,52,46,48,58,51,46,48,41,10,9,79,83,95,82,69,76,61,39,39,10,9,
116,101,115,116,32,45,114,32,47,101,116,99,47,46,114,101,108,105,100,32,92,10,9,38,38,32,79,83,95,82,69,76,61,46,96,115,101,100,32,45,110,32,39,115,47,91,94,32,93,42,32,91,94,32,93,42,32,92,40,91,48,45,57,93,91,48,45,57,93,92,41,46,42,47,92,49,47,112,
39,32,60,32,47,101,116,99,47,46,114,101,108,105,100,96,10,9,47,98,105,110,47,117,110,97,109,101,32,45,112,32,50,62,47,100,101,118,47,110,117,108,108,32,124,32,103,114,101,112,32,56,54,32,62,47,100,101,118,47,110,117,108,108,32,92,10,9,32,32,38,38,32,
123,32,101,99,104,111,32,105,52,56,54,45,110,99,114,45,115,121,115,118,52,46,51,36,123,79,83,95,82,69,76,125,59,32,101,120,105,116,59,32,125,10,9,47,98,105,110,47,117,110,97,109,101,32,45,112,32,50,62,47,100,101,118,47,110,117,108,108,32,124,32,47,98,
105,110,47,103,114,101,112,32,101,110,116,105,117,109,32,62,47,100,101,118,47,110,117,108,108,32,92,10,9,32,32,38,38,32,123,32,101,99,104,111,32,105,53,56,54,45,110,99,114,45,115,121,115,118,52,46,51,36,123,79,83,95,82,69,76,125,59,32,101,120,105,116,
59,32,125,32,59,59,10,32,32,32,32,51,91,51,52,93,63,63,58,42,58,52,46,48,58,42,32,124,32,51,91,51,52,93,63,63,44,42,58,42,58,52,46,48,58,42,41,10,9,47,98,105,110,47,117,110,97,109,101,32,45,112,32,50,62,47,100,101,118,47,110,117,108,108,32,124,32,103,
114,101,112,32,56,54,32,62,47,100,101,118,47,110,117,108,108,32,92,10,9,32,32,38,38,32,123,32,101,99,104,111,32,105,52,56,54,45,110,99,114,45,115,121,115,118,52,59,32,101,120,105,116,59,32,125,32,59,59,10,32,32,32,32,78,67,82,42,58,42,58,52,46,50,58,
42,32,124,32,77,80,82,65,83,42,58,42,58,52,46,50,58,42,41,10,9,79,83,95,82,69,76,61,39,46,51,39,10,9,116,101,115,116,32,45,114,32,47,101,116,99,47,46,114,101,108,105,100,32,92,10,9,32,32,32,32,38,38,32,79,83,95,82,69,76,61,46,96,115,101,100,32,45,110,
32,39,115,47,91,94,32,93,42,32,91,94,32,93,42,32,92,40,91,48,45,57,93,91,48,45,57,93,92,41,46,42,47,92,49,47,112,39,32,60,32,47,101,116,99,47,46,114,101,108,105,100,96,10,9,47,98,105,110,47,117,110,97,109,101,32,45,112,32,50,62,47,100,101,118,47,110,
117,108,108,32,124,32,103,114,101,112,32,56,54,32,62,47,100,101,118,47,110,117,108,108,32,92,10,9,32,32,32,32,38,38,32,123,32,101,99,104,111,32,105,52,56,54,45,110,99,114,45,115,121,115,118,52,46,51,36,123,79,83,95,82,69,76,125,59,32,101,120,105,116,
59,32,125,10,9,47,98,105,110,47,117,110,97,109,101,32,45,112,32,50,62,47,100,101,118,47,110,117,108,108,32,124,32,47,98,105,110,47,103,114,101,112,32,101,110,116,105,117,109,32,62,47,100,101,118,47,110,117,108,108,32,92,10,9,32,32,32,32,38,38,32,123,
32,101,99,104,111,32,105,53,56,54,45,110,99,114,45,115,121,115,118,52,46,51,36,123,79,83,95,82,69,76,125,59,32,101,120,105,116,59,32,125,10,9,47,98,105,110,47,117,110,97,109,101,32,45,112,32,50,62,47,100,101,118,47,110,117,108,108,32,124,32,47,98,105,
110,47,103,114,101,112,32,112,116,101,114,111,110,32,62,47,100,101,118,47,110,117,108,108,32,92,10,9,32,32,32,32,38,38,32,123,32,101,99,104,111,32,105,53,56,54,45,110,99,114,45,115,121,115,118,52,46,51,36,123,79,83,95,82,69,76,125,59,32,101,120,105,116,
59,32,125,32,59,59,10,32,32,32,32,109,54,56,42,58,76,121,110,120,79,83,58,50,46,42,58,42,32,124,32,109,54,56,42,58,76,121,110,120,79,83,58,51,46,48,42,58,42,41,10,9,101,99,104,111,32,109,54,56,107,45,117,110,107,110,111,119,110,45,108,121,110,120,111,
115,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,10,9,101,120,105,116,32,59,59,10,32,32,32,32,109,99,54,56,48,51,48,58,85,78,73,88,95,83,121,115,116,101,109,95,86,58,52,46,42,58,42,41,10,9,101,99,104,111,32,109,54,56,107,45,97,116,97,114,105,45,
115,121,115,118,52,10,9,101,120,105,116,32,59,59,10,32,32,32,32,84,83,85,78,65,77,73,58,76,121,110,120,79,83,58,50,46,42,58,42,41,10,9,101,99,104,111,32,115,112,97,114,99,45,117,110,107,110,111,119,110,45,108,121,110,120,111,115,36,123,85,78,65,77,69,
95,82,69,76,69,65,83,69,125,10,9,101,120,105,116,32,59,59,10,32,32,32,32,114,115,54,48,48,48,58,76,121,110,120,79,83,58,50,46,42,58,42,41,10,9,101,99,104,111,32,114,115,54,48,48,48,45,117,110,107,110,111,119,110,45,108,121,110,120,111,115,36,123,85,78,
65,77,69,95,82,69,76,69,65,83,69,125,10,9,101,120,105,116,32,59,59,10,32,32,32,32,80,111,119,101,114,80,67,58,76,121,110,120,79,83,58,50,46,42,58,42,32,124,32,80,111,119,101,114,80,67,58,76,121,110,120,79,83,58,51,46,91,48,49,93,42,58,42,32,124,32,80,
111,119,101,114,80,67,58,76,121,110,120,79,83,58,52,46,91,48,50,93,42,58,42,41,10,9,101,99,104,111,32,112,111,119,101,114,112,99,45,117,110,107,110,111,119,110,45,108,121,110,120,111,115,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,10,9,101,120,
105,116,32,59,59,10,32,32,32,32,83,77,91,66,69,93,83,58,85,78,73,88,95,83,86,58,42,58,42,41,10,9,101,99,104,111,32,109,105,112,115,45,100,100,101,45,115,121,115,118,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,10,9,101,120,105,116,32,59,59,10,32,
32,32,32,82,77,42,58,82,101,108,105,97,110,116,85,78,73,88,45,42,58,42,58,42,41,10,9,101,99,104,111,32,109,105,112,115,45,115,110,105,45,115,121,115,118,52,10,9,101,120,105,116,32,59,59,10,32,32,32,32,82,77,42,58,83,73,78,73,88,45,42,58,42,58,42,41,10,
9,101,99,104,111,32,109,105,112,115,45,115,110,105,45,115,121,115,118,52,10,9,101,120,105,116,32,59,59,10,32,32,32,32,42,58,83,73,78,73,88,45,42,58,42,58,42,41,10,9,105,102,32,117,110,97,109,101,32,45,112,32,50,62,47,100,101,118,47,110,117,108,108,32,
62,47,100,101,118,47,110,117,108,108,32,59,32,116,104,101,110,10,9,9,85,78,65,77,69,95,77,65,67,72,73,78,69,61,96,40,117,110,97,109,101,32,45,112,41,32,50,62,47,100,101,118,47,110,117,108,108,96,10,9,9,101,99,104,111,32,36,123,85,78,65,77,69,95,77,65,
67,72,73,78,69,125,45,115,110,105,45,115,121,115,118,52,10,9,101,108,115,101,10,9,9,101,99,104,111,32,110,115,51,50,107,45,115,110,105,45,115,121,115,118,10,9,102,105,10,9,101,120,105,116,32,59,59,10,32,32,32,32,80,69,78,84,73,85,77,58,42,58,52,46,48,
42,58,42,41,9,35,32,85,110,105,115,121,115,32,96,67,108,101,97,114,80,97,116,104,32,72,77,80,32,73,88,32,52,48,48,48,39,32,83,86,82,52,47,77,80,32,101,102,102,111,114,116,10,9,9,9,35,32,115,97,121,115,32,60,82,105,99,104,97,114,100,46,77,46,66,97,114,
116,101,108,64,99,99,77,97,105,108,46,67,101,110,115,117,115,46,71,79,86,62,10,9,101,99,104,111,32,105,53,56,54,45,117,110,105,115,121,115,45,115,121,115,118,52,10,9,101,120,105,116,32,59,59,10,32,32,32,32,42,58,85,78,73,88,95,83,121,115,116,101,109,
95,86,58,52,42,58,70,84,88,42,41,10,9,35,32,70,114,111,109,32,71,101,114,97,108,100,32,72,101,119,101,115,32,60,104,101,119,101,115,64,111,112,101,110,109,97,114,107,101,116,46,99,111,109,62,46,10,9,35,32,72,111,119,32,97,98,111,117,116,32,100,105,102,
102,101,114,101,110,116,105,97,116,105,110,103,32,98,101,116,119,101,101,110,32,115,116,114,97,116,117,115,32,97,114,99,104,105,116,101,99,116,117,114,101,115,63,32,45,100,106,109,10,9,101,99,104,111,32,104,112,112,97,49,46,49,45,115,116,114,97,116,117,
115,45,115,121,115,118,52,10,9,101,120,105,116,32,59,59,10,32,32,32,32,42,58,42,58,42,58,70,84,88,42,41,10,9,35,32,70,114,111,109,32,115,101,97,110,102,64,115,119,100,99,46,115,116,114,97,116,117,115,46,99,111,109,46,10,9,101,99,104,111,32,105,56,54,
48,45,115,116,114,97,116,117,115,45,115,121,115,118,52,10,9,101,120,105,116,32,59,59,10,32,32,32,32,105,42,56,54,58,86,79,83,58,42,58,42,41,10,9,35,32,70,114,111,109,32,80,97,117,108,46,71,114,101,101,110,64,115,116,114,97,116,117,115,46,99,111,109,46,
10,9,101,99,104,111,32,36,123,85,78,65,77,69,95,77,65,67,72,73,78,69,125,45,115,116,114,97,116,117,115,45,118,111,115,10,9,101,120,105,116,32,59,59,10,32,32,32,32,42,58,86,79,83,58,42,58,42,41,10,9,35,32,70,114,111,109,32,80,97,117,108,46,71,114,101,
101,110,64,115,116,114,97,116,117,115,46,99,111,109,46,10,9,101,99,104,111,32,104,112,112,97,49,46,49,45,115,116,114,97,116,117,115,45,118,111,115,10,9,101,120,105,116,32,59,59,10,32,32,32,32,109,99,54,56,42,58,65,47,85,88,58,42,58,42,41,10,9,101,99,
104,111,32,109,54,56,107,45,97,112,112,108,101,45,97,117,120,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,10,9,101,120,105,116,32,59,59,10,32,32,32,32,110,101,119,115,42,58,78,69,87,83,45,79,83,58,54,42,58,42,41,10,9,101,99,104,111,32,109,105,112,
115,45,115,111,110,121,45,110,101,119,115,111,115,54,10,9,101,120,105,116,32,59,59,10,32,32,32,32,82,91,51,52,93,48,48,48,58,42,83,121,115,116,101,109,95,86,42,58,42,58,42,32,124,32,82,52,48,48,48,58,85,78,73,88,95,83,89,83,86,58,42,58,42,32,124,32,82,
42,48,48,48,58,85,78,73,88,95,83,86,58,42,58,42,41,10,9,105,102,32,91,32,45,100,32,47,117,115,114,47,110,101,99,32,93,59,32,116,104,101,110,10,9,9,101,99,104,111,32,109,105,112,115,45,110,101,99,45,115,121,115,118,36,123,85,78,65,77,69,95,82,69,76,69,
65,83,69,125,10,9,101,108,115,101,10,9,9,101,99,104,111,32,109,105,112,115,45,117,110,107,110,111,119,110,45,115,121,115,118,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,10,9,102,105,10,9,101,120,105,116,32,59,59,10,32,32,32,32,66,101,66,111,120,
58,66,101,79,83,58,42,58,42,41,9,35,32,66,101,79,83,32,114,117,110,110,105,110,103,32,111,110,32,104,97,114,100,119,97,114,101,32,109,97,100,101,32,98,121,32,66,101,44,32,80,80,67,32,111,110,108,121,46,10,9,101,99,104,111,32,112,111,119,101,114,112,99,
45,98,101,45,98,101,111,115,10,9,101,120,105,116,32,59,59,10,32,32,32,32,66,101,77,97,99,58,66,101,79,83,58,42,58,42,41,9,35,32,66,101,79,83,32,114,117,110,110,105,110,103,32,111,110,32,77,97,99,32,111,114,32,77,97,99,32,99,108,111,110,101,44,32,80,80,
67,32,111,110,108,121,46,10,9,101,99,104,111,32,112,111,119,101,114,112,99,45,97,112,112,108,101,45,98,101,111,115,10,9,101,120,105,116,32,59,59,10,32,32,32,32,66,101,80,67,58,66,101,79,83,58,42,58,42,41,9,35,32,66,101,79,83,32,114,117,110,110,105,110,
103,32,111,110,32,73,110,116,101,108,32,80,67,32,99,111,109,112,97,116,105,98,108,101,46,10,9,101,99,104,111,32,105,53,56,54,45,112,99,45,98,101,111,115,10,9,101,120,105,116,32,59,59,10,32,32,32,32,66,101,80,67,58,72,97,105,107,117,58,42,58,42,41,9,35,
32,72,97,105,107,117,32,114,117,110,110,105,110,103,32,111,110,32,73,110,116,101,108,32,80,67,32,99,111,109,112,97,116,105,98,108,101,46,10,9,101,99,104,111,32,105,53,56,54,45,112,99,45,104,97,105,107,117,10,9,101,120,105,116,32,59,59,10,32,32,32,32,
83,88,45,52,58,83,85,80,69,82,45,85,88,58,42,58,42,41,10,9,101,99,104,111,32,115,120,52,45,110,101,99,45,115,117,112,101,114,117,120,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,10,9,101,120,105,116,32,59,59,10,32,32,32,32,83,88,45,53,58,83,85,80,
69,82,45,85,88,58,42,58,42,41,10,9,101,99,104,111,32,115,120,53,45,110,101,99,45,115,117,112,101,114,117,120,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,10,9,101,120,105,116,32,59,59,10,32,32,32,32,83,88,45,54,58,83,85,80,69,82,45,85,88,58,42,58,
42,41,10,9,101,99,104,111,32,115,120,54,45,110,101,99,45,115,117,112,101,114,117,120,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,10,9,101,120,105,116,32,59,59,10,32,32,32,32,83,88,45,55,58,83,85,80,69,82,45,85,88,58,42,58,42,41,10,9,101,99,104,
111,32,115,120,55,45,110,101,99,45,115,117,112,101,114,117,120,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,10,9,101,120,105,116,32,59,59,10,32,32,32,32,83,88,45,56,58,83,85,80,69,82,45,85,88,58,42,58,42,41,10,9,101,99,104,111,32,115,120,56,45,110,
101,99,45,115,117,112,101,114,117,120,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,10,9,101,120,105,116,32,59,59,10,32,32,32,32,83,88,45,56,82,58,83,85,80,69,82,45,85,88,58,42,58,42,41,10,9,101,99,104,111,32,115,120,56,114,45,110,101,99,45,115,117,
112,101,114,117,120,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,10,9,101,120,105,116,32,59,59,10,32,32,32,32,80,111,119,101,114,42,58,82,104,97,112,115,111,100,121,58,42,58,42,41,10,9,101,99,104,111,32,112,111,119,101,114,112,99,45,97,112,112,108,
101,45,114,104,97,112,115,111,100,121,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,10,9,101,120,105,116,32,59,59,10,32,32,32,32,42,58,82,104,97,112,115,111,100,121,58,42,58,42,41,10,9,101,99,104,111,32,36,123,85,78,65,77,69,95,77,65,67,72,73,78,
69,125,45,97,112,112,108,101,45,114,104,97,112,115,111,100,121,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,10,9,101,120,105,116,32,59,59,10,32,32,32,32,42,58,68,97,114,119,105,110,58,42,58,42,41,10,9,85,78,65,77,69,95,80,82,79,67,69,83,83,79,82,
61,96,117,110,97,109,101,32,45,112,96,32,124,124,32,85,78,65,77,69,95,80,82,79,67,69,83,83,79,82,61,117,110,107,110,111,119,110,10,9,99,97,115,101,32,36,85,78,65,77,69,95,80,82,79,67,69,83,83,79,82,32,105,110,10,9,32,32,32,32,105,51,56,54,41,10,9,9,101,
118,97,108,32,36,115,101,116,95,99,99,95,102,111,114,95,98,117,105,108,100,10,9,9,105,102,32,91,32,34,36,67,67,95,70,79,82,95,66,85,73,76,68,34,32,33,61,32,39,110,111,95,99,111,109,112,105,108,101,114,95,102,111,117,110,100,39,32,93,59,32,116,104,101,
110,10,9,9,32,32,105,102,32,40,101,99,104,111,32,39,35,105,102,100,101,102,32,95,95,76,80,54,52,95,95,39,59,32,101,99,104,111,32,73,83,95,54,52,66,73,84,95,65,82,67,72,59,32,101,99,104,111,32,39,35,101,110,100,105,102,39,41,32,124,32,92,10,9,9,32,32,
32,32,32,32,40,67,67,79,80,84,83,61,32,36,67,67,95,70,79,82,95,66,85,73,76,68,32,45,69,32,45,32,50,62,47,100,101,118,47,110,117,108,108,41,32,124,32,92,10,9,9,32,32,32,32,32,32,103,114,101,112,32,73,83,95,54,52,66,73,84,95,65,82,67,72,32,62,47,100,101,
118,47,110,117,108,108,10,9,9,32,32,116,104,101,110,10,9,9,32,32,32,32,32,32,85,78,65,77,69,95,80,82,79,67,69,83,83,79,82,61,34,120,56,54,95,54,52,34,10,9,9,32,32,102,105,10,9,9,102,105,32,59,59,10,9,32,32,32,32,117,110,107,110,111,119,110,41,32,85,78,
65,77,69,95,80,82,79,67,69,83,83,79,82,61,112,111,119,101,114,112,99,32,59,59,10,9,101,115,97,99,10,9,101,99,104,111,32,36,123,85,78,65,77,69,95,80,82,79,67,69,83,83,79,82,125,45,97,112,112,108,101,45,100,97,114,119,105,110,36,123,85,78,65,77,69,95,82,
69,76,69,65,83,69,125,10,9,101,120,105,116,32,59,59,10,32,32,32,32,42,58,112,114,111,99,110,116,111,42,58,42,58,42,32,124,32,42,58,81,78,88,58,91,48,49,50,51,52,53,54,55,56,57,93,42,58,42,41,10,9,85,78,65,77,69,95,80,82,79,67,69,83,83,79,82,61,96,117,
110,97,109,101,32,45,112,96,10,9,105,102,32,116,101,115,116,32,34,36,85,78,65,77,69,95,80,82,79,67,69,83,83,79,82,34,32,61,32,34,120,56,54,34,59,32,116,104,101,110,10,9,9,85,78,65,77,69,95,80,82,79,67,69,83,83,79,82,61,105,51,56,54,10,9,9,85,78,65,77,
69,95,77,65,67,72,73,78,69,61,112,99,10,9,102,105,10,9,101,99,104,111,32,36,123,85,78,65,77,69,95,80,82,79,67,69,83,83,79,82,125,45,36,123,85,78,65,77,69,95,77,65,67,72,73,78,69,125,45,110,116,111,45,113,110,120,36,123,85,78,65,77,69,95,82,69,76,69,65,
83,69,125,10,9,101,120,105,116,32,59,59,10,32,32,32,32,42,58,81,78,88,58,42,58,52,42,41,10,9,101,99,104,111,32,105,51,56,54,45,112,99,45,113,110,120,10,9,101,120,105,116,32,59,59,10,32,32,32,32,78,69,79,45,63,58,78,79,78,83,84,79,80,95,75,69,82,78,69,
76,58,42,58,42,41,10,9,101,99,104,111,32,110,101,111,45,116,97,110,100,101,109,45,110,115,107,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,10,9,101,120,105,116,32,59,59,10,32,32,32,32,78,83,69,45,63,58,78,79,78,83,84,79,80,95,75,69,82,78,69,76,58,
42,58,42,41,10,9,101,99,104,111,32,110,115,101,45,116,97,110,100,101,109,45,110,115,107,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,10,9,101,120,105,116,32,59,59,10,32,32,32,32,78,83,82,45,63,58,78,79,78,83,84,79,80,95,75,69,82,78,69,76,58,42,58,
42,41,10,9,101,99,104,111,32,110,115,114,45,116,97,110,100,101,109,45,110,115,107,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,10,9,101,120,105,116,32,59,59,10,32,32,32,32,42,58,78,111,110,83,116,111,112,45,85,88,58,42,58,42,41,10,9,101,99,104,111,
32,109,105,112,115,45,99,111,109,112,97,113,45,110,111,110,115,116,111,112,117,120,10,9,101,120,105,116,32,59,59,10,32,32,32,32,66,83,50,48,48,48,58,80,79,83,73,88,42,58,42,58,42,41,10,9,101,99,104,111,32,98,115,50,48,48,48,45,115,105,101,109,101,110,
115,45,115,121,115,118,10,9,101,120,105,116,32,59,59,10,32,32,32,32,68,83,47,42,58,85,78,73,88,95,83,121,115,116,101,109,95,86,58,42,58,42,41,10,9,101,99,104,111,32,36,123,85,78,65,77,69,95,77,65,67,72,73,78,69,125,45,36,123,85,78,65,77,69,95,83,89,83,
84,69,77,125,45,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,10,9,101,120,105,116,32,59,59,10,32,32,32,32,42,58,80,108,97,110,57,58,42,58,42,41,10,9,35,32,34,117,110,97,109,101,32,45,109,34,32,105,115,32,110,111,116,32,99,111,110,115,105,115,116,
101,110,116,44,32,115,111,32,117,115,101,32,36,99,112,117,116,121,112,101,32,105,110,115,116,101,97,100,46,32,51,56,54,10,9,35,32,105,115,32,99,111,110,118,101,114,116,101,100,32,116,111,32,105,51,56,54,32,102,111,114,32,99,111,110,115,105,115,116,101,
110,99,121,32,119,105,116,104,32,111,116,104,101,114,32,120,56,54,10,9,35,32,111,112,101,114,97,116,105,110,103,32,115,121,115,116,101,109,115,46,10,9,105,102,32,116,101,115,116,32,34,36,99,112,117,116,121,112,101,34,32,61,32,34,51,56,54,34,59,32,116,
104,101,110,10,9,32,32,32,32,85,78,65,77,69,95,77,65,67,72,73,78,69,61,105,51,56,54,10,9,101,108,115,101,10,9,32,32,32,32,85,78,65,77,69,95,77,65,67,72,73,78,69,61,34,36,99,112,117,116,121,112,101,34,10,9,102,105,10,9,101,99,104,111,32,36,123,85,78,65,
77,69,95,77,65,67,72,73,78,69,125,45,117,110,107,110,111,119,110,45,112,108,97,110,57,10,9,101,120,105,116,32,59,59,10,32,32,32,32,42,58,84,79,80,83,45,49,48,58,42,58,42,41,10,9,101,99,104,111,32,112,100,112,49,48,45,117,110,107,110,111,119,110,45,116,
111,112,115,49,48,10,9,101,120,105,116,32,59,59,10,32,32,32,32,42,58,84,69,78,69,88,58,42,58,42,41,10,9,101,99,104,111,32,112,100,112,49,48,45,117,110,107,110,111,119,110,45,116,101,110,101,120,10,9,101,120,105,116,32,59,59,10,32,32,32,32,75,83,49,48,
58,84,79,80,83,45,50,48,58,42,58,42,32,124,32,75,76,49,48,58,84,79,80,83,45,50,48,58,42,58,42,32,124,32,84,89,80,69,52,58,84,79,80,83,45,50,48,58,42,58,42,41,10,9,101,99,104,111,32,112,100,112,49,48,45,100,101,99,45,116,111,112,115,50,48,10,9,101,120,
105,116,32,59,59,10,32,32,32,32,88,75,76,45,49,58,84,79,80,83,45,50,48,58,42,58,42,32,124,32,84,89,80,69,53,58,84,79,80,83,45,50,48,58,42,58,42,41,10,9,101,99,104,111,32,112,100,112,49,48,45,120,107,108,45,116,111,112,115,50,48,10,9,101,120,105,116,32,
59,59,10,32,32,32,32,42,58,84,79,80,83,45,50,48,58,42,58,42,41,10,9,101,99,104,111,32,112,100,112,49,48,45,117,110,107,110,111,119,110,45,116,111,112,115,50,48,10,9,101,120,105,116,32,59,59,10,32,32,32,32,42,58,73,84,83,58,42,58,42,41,10,9,101,99,104,
111,32,112,100,112,49,48,45,117,110,107,110,111,119,110,45,105,116,115,10,9,101,120,105,116,32,59,59,10,32,32,32,32,83,69,73,58,42,58,42,58,83,69,73,85,88,41,10,9,101,99,104,111,32,109,105,112,115,45,115,101,105,45,115,101,105,117,120,36,123,85,78,65,
77,69,95,82,69,76,69,65,83,69,125,10,9,101,120,105,116,32,59,59,10,32,32,32,32,42,58,68,114,97,103,111,110,70,108,121,58,42,58,42,41,10,9,101,99,104,111,32,36,123,85,78,65,77,69,95,77,65,67,72,73,78,69,125,45,117,110,107,110,111,119,110,45,100,114,97,
103,111,110,102,108,121,96,101,99,104,111,32,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,124,115,101,100,32,45,101,32,39,115,47,91,45,40,93,46,42,47,47,39,96,10,9,101,120,105,116,32,59,59,10,32,32,32,32,42,58,42,86,77,83,58,42,58,42,41,10,9,85,
78,65,77,69,95,77,65,67,72,73,78,69,61,96,40,117,110,97,109,101,32,45,112,41,32,50,62,47,100,101,118,47,110,117,108,108,96,10,9,99,97,115,101,32,34,36,123,85,78,65,77,69,95,77,65,67,72,73,78,69,125,34,32,105,110,10,9,32,32,32,32,65,42,41,32,101,99,104,
111,32,97,108,112,104,97,45,100,101,99,45,118,109,115,32,59,32,101,120,105,116,32,59,59,10,9,32,32,32,32,73,42,41,32,101,99,104,111,32,105,97,54,52,45,100,101,99,45,118,109,115,32,59,32,101,120,105,116,32,59,59,10,9,32,32,32,32,86,42,41,32,101,99,104,
111,32,118,97,120,45,100,101,99,45,118,109,115,32,59,32,101,120,105,116,32,59,59,10,9,101,115,97,99,32,59,59,10,32,32,32,32,42,58,88,69,78,73,88,58,42,58,83,121,115,86,41,10,9,101,99,104,111,32,105,51,56,54,45,112,99,45,120,101,110,105,120,10,9,101,120,
105,116,32,59,59,10,32,32,32,32,105,42,56,54,58,115,107,121,111,115,58,42,58,42,41,10,9,101,99,104,111,32,36,123,85,78,65,77,69,95,77,65,67,72,73,78,69,125,45,112,99,45,115,107,121,111,115,96,101,99,104,111,32,36,123,85,78,65,77,69,95,82,69,76,69,65,
83,69,125,96,32,124,32,115,101,100,32,45,101,32,39,115,47,32,46,42,36,47,47,39,10,9,101,120,105,116,32,59,59,10,32,32,32,32,105,42,56,54,58,114,100,111,115,58,42,58,42,41,10,9,101,99,104,111,32,36,123,85,78,65,77,69,95,77,65,67,72,73,78,69,125,45,112,
99,45,114,100,111,115,10,9,101,120,105,116,32,59,59,10,32,32,32,32,105,42,56,54,58,65,82,79,83,58,42,58,42,41,10,9,101,99,104,111,32,36,123,85,78,65,77,69,95,77,65,67,72,73,78,69,125,45,112,99,45,97,114,111,115,10,9,101,120,105,116,32,59,59,10,32,32,
32,32,120,56,54,95,54,52,58,86,77,107,101,114,110,101,108,58,42,58,42,41,10,9,101,99,104,111,32,36,123,85,78,65,77,69,95,77,65,67,72,73,78,69,125,45,117,110,107,110,111,119,110,45,101,115,120,10,9,101,120,105,116,32,59,59,10,101,115,97,99,10,10,35,101,
99,104,111,32,39,40,78,111,32,117,110,97,109,101,32,99,111,109,109,97,110,100,32,111,114,32,117,110,97,109,101,32,111,117,116,112,117,116,32,110,111,116,32,114,101,99,111,103,110,105,122,101,100,46,41,39,32,49,62,38,50,10,35,101,99,104,111,32,34,36,123,
85,78,65,77,69,95,77,65,67,72,73,78,69,125,58,36,123,85,78,65,77,69,95,83,89,83,84,69,77,125,58,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,58,36,123,85,78,65,77,69,95,86,69,82,83,73,79,78,125,34,32,49,62,38,50,10,10,101,118,97,108,32,36,115,101,
116,95,99,99,95,102,111,114,95,98,117,105,108,100,10,99,97,116,32,62,36,100,117,109,109,121,46,99,32,60,60,69,79,70,10,35,105,102,100,101,102,32,95,83,69,81,85,69,78,84,95,10,35,32,105,110,99,108,117,100,101,32,60,115,121,115,47,116,121,112,101,115,46,
104,62,10,35,32,105,110,99,108,117,100,101,32,60,115,121,115,47,117,116,115,110,97,109,101,46,104,62,10,35,101,110,100,105,102,10,109,97,105,110,32,40,41,10,123,10,35,105,102,32,100,101,102,105,110,101,100,32,40,115,111,110,121,41,10,35,105,102,32,100,
101,102,105,110,101,100,32,40,77,73,80,83,69,66,41,10,32,32,47,42,32,66,70,68,32,119,97,110,116,115,32,34,98,115,100,34,32,105,110,115,116,101,97,100,32,111,102,32,34,110,101,119,115,111,115,34,46,32,32,80,101,114,104,97,112,115,32,66,70,68,32,115,104,
111,117,108,100,32,98,101,32,99,104,97,110,103,101,100,44,10,32,32,32,32,32,73,32,100,111,110,39,116,32,107,110,111,119,46,46,46,46,32,32,42,47,10,32,32,112,114,105,110,116,102,32,40,34,109,105,112,115,45,115,111,110,121,45,98,115,100,92,110,34,41,59,
32,101,120,105,116,32,40,48,41,59,10,35,101,108,115,101,10,35,105,110,99,108,117,100,101,32,60,115,121,115,47,112,97,114,97,109,46,104,62,10,32,32,112,114,105,110,116,102,32,40,34,109,54,56,107,45,115,111,110,121,45,110,101,119,115,111,115,37,115,92,
110,34,44,10,35,105,102,100,101,102,32,78,69,87,83,79,83,52,10,9,34,52,34,10,35,101,108,115,101,10,9,34,34,10,35,101,110,100,105,102,10,9,41,59,32,101,120,105,116,32,40,48,41,59,10,35,101,110,100,105,102,10,35,101,110,100,105,102,10,10,35,105,102,32,
100,101,102,105,110,101,100,32,40,95,95,97,114,109,41,32,38,38,32,100,101,102,105,110,101,100,32,40,95,95,97,99,111,114,110,41,32,38,38,32,100,101,102,105,110,101,100,32,40,95,95,117,110,105,120,41,10,32,32,112,114,105,110,116,102,32,40,34,97,114,109,
45,97,99,111,114,110,45,114,105,115,99,105,120,92,110,34,41,59,32,101,120,105,116,32,40,48,41,59,10,35,101,110,100,105,102,10,10,35,105,102,32,100,101,102,105,110,101,100,32,40,104,112,51,48,48,41,32,38,38,32,33,100,101,102,105,110,101,100,32,40,104,
112,117,120,41,10,32,32,112,114,105,110,116,102,32,40,34,109,54,56,107,45,104,112,45,98,115,100,92,110,34,41,59,32,101,120,105,116,32,40,48,41,59,10,35,101,110,100,105,102,10,10,35,105,102,32,100,101,102,105,110,101,100,32,40,78,101,88,84,41,10,35,105,
102,32,33,100,101,102,105,110,101,100,32,40,95,95,65,82,67,72,73,84,69,67,84,85,82,69,95,95,41,10,35,100,101,102,105,110,101,32,95,95,65,82,67,72,73,84,69,67,84,85,82,69,95,95,32,34,109,54,56,107,34,10,35,101,110,100,105,102,10,32,32,105,110,116,32,118,
101,114,115,105,111,110,59,10,32,32,118,101,114,115,105,111,110,61,96,40,104,111,115,116,105,110,102,111,32,124,32,115,101,100,32,45,110,32,39,115,47,46,42,78,101,88,84,32,77,97,99,104,32,92,40,91,48,45,57,93,42,92,41,46,42,47,92,49,47,112,39,41,32,50,
62,47,100,101,118,47,110,117,108,108,96,59,10,32,32,105,102,32,40,118,101,114,115,105,111,110,32,60,32,52,41,10,32,32,32,32,112,114,105,110,116,102,32,40,34,37,115,45,110,101,120,116,45,110,101,120,116,115,116,101,112,37,100,92,110,34,44,32,95,95,65,
82,67,72,73,84,69,67,84,85,82,69,95,95,44,32,118,101,114,115,105,111,110,41,59,10,32,32,101,108,115,101,10,32,32,32,32,112,114,105,110,116,102,32,40,34,37,115,45,110,101,120,116,45,111,112,101,110,115,116,101,112,37,100,92,110,34,44,32,95,95,65,82,67,
72,73,84,69,67,84,85,82,69,95,95,44,32,118,101,114,115,105,111,110,41,59,10,32,32,101,120,105,116,32,40,48,41,59,10,35,101,110,100,105,102,10,10,35,105,102,32,100,101,102,105,110,101,100,32,40,77,85,76,84,73,77,65,88,41,32,124,124,32,100,101,102,105,
110,101,100,32,40,110,49,54,41,10,35,105,102,32,100,101,102,105,110,101,100,32,40,85,77,65,88,86,41,10,32,32,112,114,105,110,116,102,32,40,34,110,115,51,50,107,45,101,110,99,111,114,101,45,115,121,115,118,92,110,34,41,59,32,101,120,105,116,32,40,48,41,
59,10,35,101,108,115,101,10,35,105,102,32,100,101,102,105,110,101,100,32,40,67,77,85,41,10,32,32,112,114,105,110,116,102,32,40,34,110,115,51,50,107,45,101,110,99,111,114,101,45,109,97,99,104,92,110,34,41,59,32,101,120,105,116,32,40,48,41,59,10,35,101,
108,115,101,10,32,32,112,114,105,110,116,102,32,40,34,110,115,51,50,107,45,101,110,99,111,114,101,45,98,115,100,92,110,34,41,59,32,101,120,105,116,32,40,48,41,59,10,35,101,110,100,105,102,10,35,101,110,100,105,102,10,35,101,110,100,105,102,10,10,35,105,
102,32,100,101,102,105,110,101,100,32,40,95,95,51,56,54,66,83,68,95,95,41,10,32,32,112,114,105,110,116,102,32,40,34,105,51,56,54,45,112,99,45,98,115,100,92,110,34,41,59,32,101,120,105,116,32,40,48,41,59,10,35,101,110,100,105,102,10,10,35,105,102,32,100,
101,102,105,110,101,100,32,40,115,101,113,117,101,110,116,41,10,35,105,102,32,100,101,102,105,110,101,100,32,40,105,51,56,54,41,10,32,32,112,114,105,110,116,102,32,40,34,105,51,56,54,45,115,101,113,117,101,110,116,45,100,121,110,105,120,92,110,34,41,
59,32,101,120,105,116,32,40,48,41,59,10,35,101,110,100,105,102,10,35,105,102,32,100,101,102,105,110,101,100,32,40,110,115,51,50,48,48,48,41,10,32,32,112,114,105,110,116,102,32,40,34,110,115,51,50,107,45,115,101,113,117,101,110,116,45,100,121,110,105,
120,92,110,34,41,59,32,101,120,105,116,32,40,48,41,59,10,35,101,110,100,105,102,10,35,101,110,100,105,102,10,10,35,105,102,32,100,101,102,105,110,101,100,32,40,95,83,69,81,85,69,78,84,95,41,10,32,32,32,32,115,116,114,117,99,116,32,117,116,115,110,97,
109,101,32,117,110,59,10,10,32,32,32,32,117,110,97,109,101,40,38,117,110,41,59,10,10,32,32,32,32,105,102,32,40,115,116,114,110,99,109,112,40,117,110,46,118,101,114,115,105,111,110,44,32,34,86,50,34,44,32,50,41,32,61,61,32,48,41,32,123,10,9,112,114,105,
110,116,102,32,40,34,105,51,56,54,45,115,101,113,117,101,110,116,45,112,116,120,50,92,110,34,41,59,32,101,120,105,116,32,40,48,41,59,10,32,32,32,32,125,10,32,32,32,32,105,102,32,40,115,116,114,110,99,109,112,40,117,110,46,118,101,114,115,105,111,110,
44,32,34,86,49,34,44,32,50,41,32,61,61,32,48,41,32,123,32,47,42,32,88,88,88,32,105,115,32,86,49,32,99,111,114,114,101,99,116,63,32,42,47,10,9,112,114,105,110,116,102,32,40,34,105,51,56,54,45,115,101,113,117,101,110,116,45,112,116,120,49,92,110,34,41,
59,32,101,120,105,116,32,40,48,41,59,10,32,32,32,32,125,10,32,32,32,32,112,114,105,110,116,102,32,40,34,105,51,56,54,45,115,101,113,117,101,110,116,45,112,116,120,92,110,34,41,59,32,101,120,105,116,32,40,48,41,59,10,10,35,101,110,100,105,102,10,10,35,
105,102,32,100,101,102,105,110,101,100,32,40,118,97,120,41,10,35,32,105,102,32,33,100,101,102,105,110,101,100,32,40,117,108,116,114,105,120,41,10,35,32,32,105,110,99,108,117,100,101,32,60,115,121,115,47,112,97,114,97,109,46,104,62,10,35,32,32,105,102,
32,100,101,102,105,110,101,100,32,40,66,83,68,41,10,35,32,32,32,105,102,32,66,83,68,32,61,61,32,52,51,10,32,32,32,32,32,32,112,114,105,110,116,102,32,40,34,118,97,120,45,100,101,99,45,98,115,100,52,46,51,92,110,34,41,59,32,101,120,105,116,32,40,48,41,
59,10,35,32,32,32,101,108,115,101,10,35,32,32,32,32,105,102,32,66,83,68,32,61,61,32,49,57,57,48,48,54,10,32,32,32,32,32,32,112,114,105,110,116,102,32,40,34,118,97,120,45,100,101,99,45,98,115,100,52,46,51,114,101,110,111,92,110,34,41,59,32,101,120,105,
116,32,40,48,41,59,10,35,32,32,32,32,101,108,115,101,10,32,32,32,32,32,32,112,114,105,110,116,102,32,40,34,118,97,120,45,100,101,99,45,98,115,100,92,110,34,41,59,32,101,120,105,116,32,40,48,41,59,10,35,32,32,32,32,101,110,100,105,102,10,35,32,32,32,101,
110,100,105,102,10,35,32,32,101,108,115,101,10,32,32,32,32,112,114,105,110,116,102,32,40,34,118,97,120,45,100,101,99,45,98,115,100,92,110,34,41,59,32,101,120,105,116,32,40,48,41,59,10,35,32,32,101,110,100,105,102,10,35,32,101,108,115,101,10,32,32,32,
32,112,114,105,110,116,102,32,40,34,118,97,120,45,100,101,99,45,117,108,116,114,105,120,92,110,34,41,59,32,101,120,105,116,32,40,48,41,59,10,35,32,101,110,100,105,102,10,35,101,110,100,105,102,10,10,35,105,102,32,100,101,102,105,110,101,100,32,40,97,
108,108,105,97,110,116,41,32,38,38,32,100,101,102,105,110,101,100,32,40,105,56,54,48,41,10,32,32,112,114,105,110,116,102,32,40,34,105,56,54,48,45,97,108,108,105,97,110,116,45,98,115,100,92,110,34,41,59,32,101,120,105,116,32,40,48,41,59,10,35,101,110,
100,105,102,10,10,32,32,101,120,105,116,32,40,49,41,59,10,125,10,69,79,70,10,10,36,67,67,95,70,79,82,95,66,85,73,76,68,32,45,111,32,36,100,117,109,109,121,32,36,100,117,109,109,121,46,99,32,50,62,47,100,101,118,47,110,117,108,108,32,38,38,32,83,89,83,
84,69,77,95,78,65,77,69,61,96,36,100,117,109,109,121,96,32,38,38,10,9,123,32,101,99,104,111,32,34,36,83,89,83,84,69,77,95,78,65,77,69,34,59,32,101,120,105,116,59,32,125,10,10,35,32,65,112,111,108,108,111,115,32,112,117,116,32,116,104,101,32,115,121,115,
116,101,109,32,116,121,112,101,32,105,110,32,116,104,101,32,101,110,118,105,114,111,110,109,101,110,116,46,10,10,116,101,115,116,32,45,100,32,47,117,115,114,47,97,112,111,108,108,111,32,38,38,32,123,32,101,99,104,111,32,36,123,73,83,80,125,45,97,112,
111,108,108,111,45,36,123,83,89,83,84,89,80,69,125,59,32,101,120,105,116,59,32,125,10,10,35,32,67,111,110,118,101,120,32,118,101,114,115,105,111,110,115,32,116,104,97,116,32,112,114,101,100,97,116,101,32,117,110,97,109,101,32,99,97,110,32,117,115,101,
32,103,101,116,115,121,115,105,110,102,111,40,49,41,10,10,105,102,32,91,32,45,120,32,47,117,115,114,47,99,111,110,118,101,120,47,103,101,116,115,121,115,105,110,102,111,32,93,10,116,104,101,110,10,32,32,32,32,99,97,115,101,32,96,103,101,116,115,121,115,
105,110,102,111,32,45,102,32,99,112,117,95,116,121,112,101,96,32,105,110,10,32,32,32,32,99,49,42,41,10,9,101,99,104,111,32,99,49,45,99,111,110,118,101,120,45,98,115,100,10,9,101,120,105,116,32,59,59,10,32,32,32,32,99,50,42,41,10,9,105,102,32,103,101,
116,115,121,115,105,110,102,111,32,45,102,32,115,99,97,108,97,114,95,97,99,99,10,9,116,104,101,110,32,101,99,104,111,32,99,51,50,45,99,111,110,118,101,120,45,98,115,100,10,9,101,108,115,101,32,101,99,104,111,32,99,50,45,99,111,110,118,101,120,45,98,115,
100,10,9,102,105,10,9,101,120,105,116,32,59,59,10,32,32,32,32,99,51,52,42,41,10,9,101,99,104,111,32,99,51,52,45,99,111,110,118,101,120,45,98,115,100,10,9,101,120,105,116,32,59,59,10,32,32,32,32,99,51,56,42,41,10,9,101,99,104,111,32,99,51,56,45,99,111,
110,118,101,120,45,98,115,100,10,9,101,120,105,116,32,59,59,10,32,32,32,32,99,52,42,41,10,9,101,99,104,111,32,99,52,45,99,111,110,118,101,120,45,98,115,100,10,9,101,120,105,116,32,59,59,10,32,32,32,32,101,115,97,99,10,102,105,10,10,99,97,116,32,62,38,
50,32,60,60,69,79,70,10,36,48,58,32,117,110,97,98,108,101,32,116,111,32,103,117,101,115,115,32,115,121,115,116,101,109,32,116,121,112,101,10,10,84,104,105,115,32,115,99,114,105,112,116,44,32,108,97,115,116,32,109,111,100,105,102,105,101,100,32,36,116,
105,109,101,115,116,97,109,112,44,32,104,97,115,32,102,97,105,108,101,100,32,116,111,32,114,101,99,111,103,110,105,122,101,10,116,104,101,32,111,112,101,114,97,116,105,110,103,32,115,121,115,116,101,109,32,121,111,117,32,97,114,101,32,117,115,105,110,
103,46,32,73,116,32,105,115,32,97,100,118,105,115,101,100,32,116,104,97,116,32,121,111,117,10,100,111,119,110,108,111,97,100,32,116,104,101,32,109,111,115,116,32,117,112,32,116,111,32,100,97,116,101,32,118,101,114,115,105,111,110,32,111,102,32,116,104,
101,32,99,111,110,102,105,103,32,115,99,114,105,112,116,115,32,102,114,111,109,10,10,32,32,104,116,116,112,58,47,47,103,105,116,46,115,97,118,97,110,110,97,104,46,103,110,117,46,111,114,103,47,103,105,116,119,101,98,47,63,112,61,99,111,110,102,105,103,
46,103,105,116,59,97,61,98,108,111,98,95,112,108,97,105,110,59,102,61,99,111,110,102,105,103,46,103,117,101,115,115,59,104,98,61,72,69,65,68,10,97,110,100,10,32,32,104,116,116,112,58,47,47,103,105,116,46,115,97,118,97,110,110,97,104,46,103,110,117,46,
111,114,103,47,103,105,116,119,101,98,47,63,112,61,99,111,110,102,105,103,46,103,105,116,59,97,61,98,108,111,98,95,112,108,97,105,110,59,102,61,99,111,110,102,105,103,46,115,117,98,59,104,98,61,72,69,65,68,10,10,73,102,32,116,104,101,32,118,101,114,115,
105,111,110,32,121,111,117,32,114,117,110,32,40,36,48,41,32,105,115,32,97,108,114,101,97,100,121,32,117,112,32,116,111,32,100,97,116,101,44,32,112,108,101,97,115,101,10,115,101,110,100,32,116,104,101,32,102,111,108,108,111,119,105,110,103,32,100,97,116,
97,32,97,110,100,32,97,110,121,32,105,110,102,111,114,109,97,116,105,111,110,32,121,111,117,32,116,104,105,110,107,32,109,105,103,104,116,32,98,101,10,112,101,114,116,105,110,101,110,116,32,116,111,32,60,99,111,110,102,105,103,45,112,97,116,99,104,101,
115,64,103,110,117,46,111,114,103,62,32,105,110,32,111,114,100,101,114,32,116,111,32,112,114,111,118,105,100,101,32,116,104,101,32,110,101,101,100,101,100,10,105,110,102,111,114,109,97,116,105,111,110,32,116,111,32,104,97,110,100,108,101,32,121,111,117,
114,32,115,121,115,116,101,109,46,10,10,99,111,110,102,105,103,46,103,117,101,115,115,32,116,105,109,101,115,116,97,109,112,32,61,32,36,116,105,109,101,115,116,97,109,112,10,10,117,110,97,109,101,32,45,109,32,61,32,96,40,117,110,97,109,101,32,45,109,
41,32,50,62,47,100,101,118,47,110,117,108,108,32,124,124,32,101,99,104,111,32,117,110,107,110,111,119,110,96,10,117,110,97,109,101,32,45,114,32,61,32,96,40,117,110,97,109,101,32,45,114,41,32,50,62,47,100,101,118,47,110,117,108,108,32,124,124,32,101,99,
104,111,32,117,110,107,110,111,119,110,96,10,117,110,97,109,101,32,45,115,32,61,32,96,40,117,110,97,109,101,32,45,115,41,32,50,62,47,100,101,118,47,110,117,108,108,32,124,124,32,101,99,104,111,32,117,110,107,110,111,119,110,96,10,117,110,97,109,101,32,
45,118,32,61,32,96,40,117,110,97,109,101,32,45,118,41,32,50,62,47,100,101,118,47,110,117,108,108,32,124,124,32,101,99,104,111,32,117,110,107,110,111,119,110,96,10,10,47,117,115,114,47,98,105,110,47,117,110,97,109,101,32,45,112,32,61,32,96,40,47,117,115,
114,47,98,105,110,47,117,110,97,109,101,32,45,112,41,32,50,62,47,100,101,118,47,110,117,108,108,96,10,47,98,105,110,47,117,110,97,109,101,32,45,88,32,32,32,32,32,61,32,96,40,47,98,105,110,47,117,110,97,109,101,32,45,88,41,32,50,62,47,100,101,118,47,110,
117,108,108,96,10,10,104,111,115,116,105,110,102,111,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,61,32,96,40,104,111,115,116,105,110,102,111,41,32,50,62,47,100,101,118,47,110,117,108,108,96,10,47,98,105,110,47,117,110,105,118,101,114,115,101,32,32,32,
32,32,32,32,32,32,32,61,32,96,40,47,98,105,110,47,117,110,105,118,101,114,115,101,41,32,50,62,47,100,101,118,47,110,117,108,108,96,10,47,117,115,114,47,98,105,110,47,97,114,99,104,32,45,107,32,32,32,32,32,32,32,61,32,96,40,47,117,115,114,47,98,105,110,
47,97,114,99,104,32,45,107,41,32,50,62,47,100,101,118,47,110,117,108,108,96,10,47,98,105,110,47,97,114,99,104,32,32,32,32,32,32,32,32,32,32,32,32,32,32,61,32,96,40,47,98,105,110,47,97,114,99,104,41,32,50,62,47,100,101,118,47,110,117,108,108,96,10,47,
117,115,114,47,98,105,110,47,111,115,108,101,118,101,108,32,32,32,32,32,32,32,61,32,96,40,47,117,115,114,47,98,105,110,47,111,115,108,101,118,101,108,41,32,50,62,47,100,101,118,47,110,117,108,108,96,10,47,117,115,114,47,99,111,110,118,101,120,47,103,
101,116,115,121,115,105,110,102,111,32,61,32,96,40,47,117,115,114,47,99,111,110,118,101,120,47,103,101,116,115,121,115,105,110,102,111,41,32,50,62,47,100,101,118,47,110,117,108,108,96,10,10,85,78,65,77,69,95,77,65,67,72,73,78,69,32,61,32,36,123,85,78,
65,77,69,95,77,65,67,72,73,78,69,125,10,85,78,65,77,69,95,82,69,76,69,65,83,69,32,61,32,36,123,85,78,65,77,69,95,82,69,76,69,65,83,69,125,10,85,78,65,77,69,95,83,89,83,84,69,77,32,32,61,32,36,123,85,78,65,77,69,95,83,89,83,84,69,77,125,10,85,78,65,77,
69,95,86,69,82,83,73,79,78,32,61,32,36,123,85,78,65,77,69,95,86,69,82,83,73,79,78,125,10,69,79,70,10,10,101,120,105,116,32,49,10,10,35,32,76,111,99,97,108,32,118,97,114,105,97,98,108,101,115,58,10,35,32,101,118,97,108,58,32,40,97,100,100,45,104,111,111,
107,32,39,119,114,105,116,101,45,102,105,108,101,45,104,111,111,107,115,32,39,116,105,109,101,45,115,116,97,109,112,41,10,35,32,116,105,109,101,45,115,116,97,109,112,45,115,116,97,114,116,58,32,34,116,105,109,101,115,116,97,109,112,61,39,34,10,35,32,
116,105,109,101,45,115,116,97,109,112,45,102,111,114,109,97,116,58,32,34,37,58,121,45,37,48,50,109,45,37,48,50,100,34,10,35,32,116,105,109,101,45,115,116,97,109,112,45,101,110,100,58,32,34,39,34,10,35,32,69,110,100,58,10,0,0 };

const char* config_guess = (const char*) temp_binary_data_17;

//================== config.h.in ==================
static const unsigned char temp_binary_data_18[] =
"/* config.h.in.  Generated from configure.ac by autoheader.  */\n"
"\n"
"/* Define to 1 if you have the <alloca.h> header file. */\n"
"#undef HAVE_ALLOCA_H\n"
"\n"
"/* Define to 1 if you have the <dlfcn.h> header file. */\n"
"#undef HAVE_DLFCN_H\n"
"\n"
"/* Define to 1 if you have the `getpagesize' function. */\n"
"#undef HAVE_GETPAGESIZE\n"
"\n"
"/* Define to 1 if you have the <inttypes.h> header file. */\n"
"#undef HAVE_INTTYPES_H\n"
"\n"
"/* Define to 1 if you have the `c' library (-lc). */\n"
"#undef HAVE_LIBC\n"
"\n"
"/* Define to 1 if you have the `coldname' library (-lcoldname). */\n"
"#undef HAVE_LIBCOLDNAME\n"
"\n"
"/* Define to 1 if you have the `crtdll' library (-lcrtdll). */\n"
"#undef HAVE_LIBCRTDLL\n"
"\n"
"/* Define to 1 if you have the `gdi32' library (-lgdi32). */\n"
"#undef HAVE_LIBGDI32\n"
"\n"
"/* Define to 1 if you have the `kernel32' library (-lkernel32). */\n"
"#undef HAVE_LIBKERNEL32\n"
"\n"
"/* Define to 1 if you have the `m' library (-lm). */\n"
"#undef HAVE_LIBM\n"
"\n"
"/* Define to 1 if you have the `pd' library (-lpd). */\n"
"#undef HAVE_LIBPD\n"
"\n"
"/* Define to 1 if you have the `regex' library (-lregex). */\n"
"#undef HAVE_LIBREGEX\n"
"\n"
"/* Define to 1 if you have the `user32' library (-luser32). */\n"
"#undef HAVE_LIBUSER32\n"
"\n"
"/* Define to 1 if you have the <linux/ppdev.h> header file. */\n"
"#undef HAVE_LINUX_PPDEV_H\n"
"\n"
"/* Define to 1 if you have the <math.h> header file. */\n"
"#undef HAVE_MATH_H\n"
"\n"
"/* Define to 1 if you have the <memory.h> header file. */\n"
"#undef HAVE_MEMORY_H\n"
"\n"
"/* Define to 1 if you have a working `mmap' system call. */\n"
"#undef HAVE_MMAP\n"
"\n"
"/* Define to 1 if you have the <m_pd.h> header file. */\n"
"#undef HAVE_M_PD_H\n"
"\n"
"/* Define to 1 if you have the <pd/m_pd.h> header file. */\n"
"#undef HAVE_PD_M_PD_H\n"
"\n"
"/* Define to 1 if you have the <regex.h> header file. */\n"
"#undef HAVE_REGEX_H\n"
"\n"
"/* Define to 1 if you have the `select' function. */\n"
"#undef HAVE_SELECT\n"
"\n"
"/* Define to 1 if you have the `socket' function. */\n"
"#undef HAVE_SOCKET\n"
"\n"
"/* Define to 1 if you have the <stdint.h> header file. */\n"
"#undef HAVE_STDINT_H\n"
"\n"
"/* Define to 1 if you have the <stdio.h> header file. */\n"
"#undef HAVE_STDIO_H\n"
"\n"
"/* Define to 1 if you have the <stdlib.h> header file. */\n"
"#undef HAVE_STDLIB_H\n"
"\n"
"/* Define to 1 if you have the `strerror' function. */\n"
"#undef HAVE_STRERROR\n"
"\n"
"/* Define to 1 if you have the <strings.h> header file. */\n"
"#undef HAVE_STRINGS_H\n"
"\n"
"/* Define to 1 if you have the <string.h> header file. */\n"
"#undef HAVE_STRING_H\n"
"\n"
"/* Define to 1 if you have the <sys/param.h> header file. */\n"
"#undef HAVE_SYS_PARAM_H\n"
"\n"
"/* Define to 1 if you have the <sys/stat.h> header file. */\n"
"#undef HAVE_SYS_STAT_H\n"
"\n"
"/* Define to 1 if you have the <sys/time.h> header file. */\n"
"#undef HAVE_SYS_TIME_H\n"
"\n"
"/* Define to 1 if you have the <sys/types.h> header file. */\n"
"#undef HAVE_SYS_TYPES_H\n"
"\n"
"/* Define to 1 if you have the <time.h> header file. */\n"
"#undef HAVE_TIME_H\n"
"\n"
"/* Define to 1 if you have the <unistd.h> header file. */\n"
"#undef HAVE_UNISTD_H\n"
"\n"
"/* Define to the sub-directory in which libtool stores uninstalled libraries.\n"
"   */\n"
"#undef LT_OBJDIR\n"
"\n"
"/* Name of package */\n"
"#undef PACKAGE\n"
"\n"
"/* Define to the address where bug reports for this package should be sent. */\n"
"#undef PACKAGE_BUGREPORT\n"
"\n"
"/* Define to the full name of this package. */\n"
"#undef PACKAGE_NAME\n"
"\n"
"/* Define to the full name and version of this package. */\n"
"#undef PACKAGE_STRING\n"
"\n"
"/* Define to the one symbol short name of this package. */\n"
"#undef PACKAGE_TARNAME\n"
"\n"
"/* Define to the home page for this package. */\n"
"#undef PACKAGE_URL\n"
"\n"
"/* Define to the version of this package. */\n"
"#undef PACKAGE_VERSION\n"
"\n"
"/* Define to 1 if you have the ANSI C header files. */\n"
"#undef STDC_HEADERS\n"
"\n"
"/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */\n"
"#undef TIME_WITH_SYS_TIME\n"
"\n"
"/* Version number of package */\n"
"#undef VERSION\n"
"\n"
"/* Define if you want line printer support */\n"
"#undef Z_WANT_LPT\n";

const char* config_h_in = (const char*) temp_binary_data_18;

//================== config.sub ==================
static const unsigned char temp_binary_data_19[] =
{ 35,33,32,47,98,105,110,47,115,104,10,35,32,67,111,110,102,105,103,117,114,97,116,105,111,110,32,118,97,108,105,100,97,116,105,111,110,32,115,117,98,114,111,117,116,105,110,101,32,115,99,114,105,112,116,46,10,35,32,32,32,67,111,112,121,114,105,103,104,
116,32,40,67,41,32,49,57,57,50,44,32,49,57,57,51,44,32,49,57,57,52,44,32,49,57,57,53,44,32,49,57,57,54,44,32,49,57,57,55,44,32,49,57,57,56,44,32,49,57,57,57,44,10,35,32,32,32,50,48,48,48,44,32,50,48,48,49,44,32,50,48,48,50,44,32,50,48,48,51,44,32,50,
48,48,52,44,32,50,48,48,53,44,32,50,48,48,54,44,32,50,48,48,55,44,32,50,48,48,56,44,32,50,48,48,57,44,32,50,48,49,48,44,10,35,32,32,32,50,48,49,49,44,32,50,48,49,50,32,70,114,101,101,32,83,111,102,116,119,97,114,101,32,70,111,117,110,100,97,116,105,111,
110,44,32,73,110,99,46,10,10,116,105,109,101,115,116,97,109,112,61,39,50,48,49,50,45,48,50,45,49,48,39,10,10,35,32,84,104,105,115,32,102,105,108,101,32,105,115,32,40,105,110,32,112,114,105,110,99,105,112,108,101,41,32,99,111,109,109,111,110,32,116,111,
32,65,76,76,32,71,78,85,32,115,111,102,116,119,97,114,101,46,10,35,32,84,104,101,32,112,114,101,115,101,110,99,101,32,111,102,32,97,32,109,97,99,104,105,110,101,32,105,110,32,116,104,105,115,32,102,105,108,101,32,115,117,103,103,101,115,116,115,32,116,
104,97,116,32,83,79,77,69,32,71,78,85,32,115,111,102,116,119,97,114,101,10,35,32,99,97,110,32,104,97,110,100,108,101,32,116,104,97,116,32,109,97,99,104,105,110,101,46,32,32,73,116,32,100,111,101,115,32,110,111,116,32,105,109,112,108,121,32,65,76,76,32,
71,78,85,32,115,111,102,116,119,97,114,101,32,99,97,110,46,10,35,10,35,32,84,104,105,115,32,102,105,108,101,32,105,115,32,102,114,101,101,32,115,111,102,116,119,97,114,101,59,32,121,111,117,32,99,97,110,32,114,101,100,105,115,116,114,105,98,117,116,101,
32,105,116,32,97,110,100,47,111,114,32,109,111,100,105,102,121,10,35,32,105,116,32,117,110,100,101,114,32,116,104,101,32,116,101,114,109,115,32,111,102,32,116,104,101,32,71,78,85,32,71,101,110,101,114,97,108,32,80,117,98,108,105,99,32,76,105,99,101,110,
115,101,32,97,115,32,112,117,98,108,105,115,104,101,100,32,98,121,10,35,32,116,104,101,32,70,114,101,101,32,83,111,102,116,119,97,114,101,32,70,111,117,110,100,97,116,105,111,110,59,32,101,105,116,104,101,114,32,118,101,114,115,105,111,110,32,50,32,111,
102,32,116,104,101,32,76,105,99,101,110,115,101,44,32,111,114,10,35,32,40,97,116,32,121,111,117,114,32,111,112,116,105,111,110,41,32,97,110,121,32,108,97,116,101,114,32,118,101,114,115,105,111,110,46,10,35,10,35,32,84,104,105,115,32,112,114,111,103,114,
97,109,32,105,115,32,100,105,115,116,114,105,98,117,116,101,100,32,105,110,32,116,104,101,32,104,111,112,101,32,116,104,97,116,32,105,116,32,119,105,108,108,32,98,101,32,117,115,101,102,117,108,44,10,35,32,98,117,116,32,87,73,84,72,79,85,84,32,65,78,
89,32,87,65,82,82,65,78,84,89,59,32,119,105,116,104,111,117,116,32,101,118,101,110,32,116,104,101,32,105,109,112,108,105,101,100,32,119,97,114,114,97,110,116,121,32,111,102,10,35,32,77,69,82,67,72,65,78,84,65,66,73,76,73,84,89,32,111,114,32,70,73,84,
78,69,83,83,32,70,79,82,32,65,32,80,65,82,84,73,67,85,76,65,82,32,80,85,82,80,79,83,69,46,32,32,83,101,101,32,116,104,101,10,35,32,71,78,85,32,71,101,110,101,114,97,108,32,80,117,98,108,105,99,32,76,105,99,101,110,115,101,32,102,111,114,32,109,111,114,
101,32,100,101,116,97,105,108,115,46,10,35,10,35,32,89,111,117,32,115,104,111,117,108,100,32,104,97,118,101,32,114,101,99,101,105,118,101,100,32,97,32,99,111,112,121,32,111,102,32,116,104,101,32,71,78,85,32,71,101,110,101,114,97,108,32,80,117,98,108,
105,99,32,76,105,99,101,110,115,101,10,35,32,97,108,111,110,103,32,119,105,116,104,32,116,104,105,115,32,112,114,111,103,114,97,109,59,32,105,102,32,110,111,116,44,32,115,101,101,32,60,104,116,116,112,58,47,47,119,119,119,46,103,110,117,46,111,114,103,
47,108,105,99,101,110,115,101,115,47,62,46,10,35,10,35,32,65,115,32,97,32,115,112,101,99,105,97,108,32,101,120,99,101,112,116,105,111,110,32,116,111,32,116,104,101,32,71,78,85,32,71,101,110,101,114,97,108,32,80,117,98,108,105,99,32,76,105,99,101,110,
115,101,44,32,105,102,32,121,111,117,10,35,32,100,105,115,116,114,105,98,117,116,101,32,116,104,105,115,32,102,105,108,101,32,97,115,32,112,97,114,116,32,111,102,32,97,32,112,114,111,103,114,97,109,32,116,104,97,116,32,99,111,110,116,97,105,110,115,32,
97,10,35,32,99,111,110,102,105,103,117,114,97,116,105,111,110,32,115,99,114,105,112,116,32,103,101,110,101,114,97,116,101,100,32,98,121,32,65,117,116,111,99,111,110,102,44,32,121,111,117,32,109,97,121,32,105,110,99,108,117,100,101,32,105,116,32,117,110,
100,101,114,10,35,32,116,104,101,32,115,97,109,101,32,100,105,115,116,114,105,98,117,116,105,111,110,32,116,101,114,109,115,32,116,104,97,116,32,121,111,117,32,117,115,101,32,102,111,114,32,116,104,101,32,114,101,115,116,32,111,102,32,116,104,97,116,
32,112,114,111,103,114,97,109,46,10,10,10,35,32,80,108,101,97,115,101,32,115,101,110,100,32,112,97,116,99,104,101,115,32,116,111,32,60,99,111,110,102,105,103,45,112,97,116,99,104,101,115,64,103,110,117,46,111,114,103,62,46,32,32,83,117,98,109,105,116,
32,97,32,99,111,110,116,101,120,116,10,35,32,100,105,102,102,32,97,110,100,32,97,32,112,114,111,112,101,114,108,121,32,102,111,114,109,97,116,116,101,100,32,71,78,85,32,67,104,97,110,103,101,76,111,103,32,101,110,116,114,121,46,10,35,10,35,32,67,111,
110,102,105,103,117,114,97,116,105,111,110,32,115,117,98,114,111,117,116,105,110,101,32,116,111,32,118,97,108,105,100,97,116,101,32,97,110,100,32,99,97,110,111,110,105,99,97,108,105,122,101,32,97,32,99,111,110,102,105,103,117,114,97,116,105,111,110,32,
116,121,112,101,46,10,35,32,83,117,112,112,108,121,32,116,104,101,32,115,112,101,99,105,102,105,101,100,32,99,111,110,102,105,103,117,114,97,116,105,111,110,32,116,121,112,101,32,97,115,32,97,110,32,97,114,103,117,109,101,110,116,46,10,35,32,73,102,32,
105,116,32,105,115,32,105,110,118,97,108,105,100,44,32,119,101,32,112,114,105,110,116,32,97,110,32,101,114,114,111,114,32,109,101,115,115,97,103,101,32,111,110,32,115,116,100,101,114,114,32,97,110,100,32,101,120,105,116,32,119,105,116,104,32,99,111,100,
101,32,49,46,10,35,32,79,116,104,101,114,119,105,115,101,44,32,119,101,32,112,114,105,110,116,32,116,104,101,32,99,97,110,111,110,105,99,97,108,32,99,111,110,102,105,103,32,116,121,112,101,32,111,110,32,115,116,100,111,117,116,32,97,110,100,32,115,117,
99,99,101,101,100,46,10,10,35,32,89,111,117,32,99,97,110,32,103,101,116,32,116,104,101,32,108,97,116,101,115,116,32,118,101,114,115,105,111,110,32,111,102,32,116,104,105,115,32,115,99,114,105,112,116,32,102,114,111,109,58,10,35,32,104,116,116,112,58,
47,47,103,105,116,46,115,97,118,97,110,110,97,104,46,103,110,117,46,111,114,103,47,103,105,116,119,101,98,47,63,112,61,99,111,110,102,105,103,46,103,105,116,59,97,61,98,108,111,98,95,112,108,97,105,110,59,102,61,99,111,110,102,105,103,46,115,117,98,59,
104,98,61,72,69,65,68,10,10,35,32,84,104,105,115,32,102,105,108,101,32,105,115,32,115,117,112,112,111,115,101,100,32,116,111,32,98,101,32,116,104,101,32,115,97,109,101,32,102,111,114,32,97,108,108,32,71,78,85,32,112,97,99,107,97,103,101,115,10,35,32,
97,110,100,32,114,101,99,111,103,110,105,122,101,32,97,108,108,32,116,104,101,32,67,80,85,32,116,121,112,101,115,44,32,115,121,115,116,101,109,32,116,121,112,101,115,32,97,110,100,32,97,108,105,97,115,101,115,10,35,32,116,104,97,116,32,97,114,101,32,
109,101,97,110,105,110,103,102,117,108,32,119,105,116,104,32,42,97,110,121,42,32,71,78,85,32,115,111,102,116,119,97,114,101,46,10,35,32,69,97,99,104,32,112,97,99,107,97,103,101,32,105,115,32,114,101,115,112,111,110,115,105,98,108,101,32,102,111,114,32,
114,101,112,111,114,116,105,110,103,32,119,104,105,99,104,32,118,97,108,105,100,32,99,111,110,102,105,103,117,114,97,116,105,111,110,115,10,35,32,105,116,32,100,111,101,115,32,110,111,116,32,115,117,112,112,111,114,116,46,32,32,84,104,101,32,117,115,
101,114,32,115,104,111,117,108,100,32,98,101,32,97,98,108,101,32,116,111,32,100,105,115,116,105,110,103,117,105,115,104,10,35,32,97,32,102,97,105,108,117,114,101,32,116,111,32,115,117,112,112,111,114,116,32,97,32,118,97,108,105,100,32,99,111,110,102,
105,103,117,114,97,116,105,111,110,32,102,114,111,109,32,97,32,109,101,97,110,105,110,103,108,101,115,115,10,35,32,99,111,110,102,105,103,117,114,97,116,105,111,110,46,10,10,35,32,84,104,101,32,103,111,97,108,32,111,102,32,116,104,105,115,32,102,105,
108,101,32,105,115,32,116,111,32,109,97,112,32,97,108,108,32,116,104,101,32,118,97,114,105,111,117,115,32,118,97,114,105,97,116,105,111,110,115,32,111,102,32,97,32,103,105,118,101,110,10,35,32,109,97,99,104,105,110,101,32,115,112,101,99,105,102,105,99,
97,116,105,111,110,32,105,110,116,111,32,97,32,115,105,110,103,108,101,32,115,112,101,99,105,102,105,99,97,116,105,111,110,32,105,110,32,116,104,101,32,102,111,114,109,58,10,35,9,67,80,85,95,84,89,80,69,45,77,65,78,85,70,65,67,84,85,82,69,82,45,79,80,
69,82,65,84,73,78,71,95,83,89,83,84,69,77,10,35,32,111,114,32,105,110,32,115,111,109,101,32,99,97,115,101,115,44,32,116,104,101,32,110,101,119,101,114,32,102,111,117,114,45,112,97,114,116,32,102,111,114,109,58,10,35,9,67,80,85,95,84,89,80,69,45,77,65,
78,85,70,65,67,84,85,82,69,82,45,75,69,82,78,69,76,45,79,80,69,82,65,84,73,78,71,95,83,89,83,84,69,77,10,35,32,73,116,32,105,115,32,119,114,111,110,103,32,116,111,32,101,99,104,111,32,97,110,121,32,111,116,104,101,114,32,116,121,112,101,32,111,102,32,
115,112,101,99,105,102,105,99,97,116,105,111,110,46,10,10,109,101,61,96,101,99,104,111,32,34,36,48,34,32,124,32,115,101,100,32,45,101,32,39,115,44,46,42,47,44,44,39,96,10,10,117,115,97,103,101,61,34,92,10,85,115,97,103,101,58,32,36,48,32,91,79,80,84,
73,79,78,93,32,67,80,85,45,77,70,82,45,79,80,83,89,83,10,32,32,32,32,32,32,32,36,48,32,91,79,80,84,73,79,78,93,32,65,76,73,65,83,10,10,67,97,110,111,110,105,99,97,108,105,122,101,32,97,32,99,111,110,102,105,103,117,114,97,116,105,111,110,32,110,97,109,
101,46,10,10,79,112,101,114,97,116,105,111,110,32,109,111,100,101,115,58,10,32,32,45,104,44,32,45,45,104,101,108,112,32,32,32,32,32,32,32,32,32,112,114,105,110,116,32,116,104,105,115,32,104,101,108,112,44,32,116,104,101,110,32,101,120,105,116,10,32,32,
45,116,44,32,45,45,116,105,109,101,45,115,116,97,109,112,32,32,32,112,114,105,110,116,32,100,97,116,101,32,111,102,32,108,97,115,116,32,109,111,100,105,102,105,99,97,116,105,111,110,44,32,116,104,101,110,32,101,120,105,116,10,32,32,45,118,44,32,45,45,
118,101,114,115,105,111,110,32,32,32,32,32,32,112,114,105,110,116,32,118,101,114,115,105,111,110,32,110,117,109,98,101,114,44,32,116,104,101,110,32,101,120,105,116,10,10,82,101,112,111,114,116,32,98,117,103,115,32,97,110,100,32,112,97,116,99,104,101,
115,32,116,111,32,60,99,111,110,102,105,103,45,112,97,116,99,104,101,115,64,103,110,117,46,111,114,103,62,46,34,10,10,118,101,114,115,105,111,110,61,34,92,10,71,78,85,32,99,111,110,102,105,103,46,115,117,98,32,40,36,116,105,109,101,115,116,97,109,112,
41,10,10,67,111,112,121,114,105,103,104,116,32,40,67,41,32,49,57,57,50,44,32,49,57,57,51,44,32,49,57,57,52,44,32,49,57,57,53,44,32,49,57,57,54,44,32,49,57,57,55,44,32,49,57,57,56,44,32,49,57,57,57,44,32,50,48,48,48,44,10,50,48,48,49,44,32,50,48,48,50,
44,32,50,48,48,51,44,32,50,48,48,52,44,32,50,48,48,53,44,32,50,48,48,54,44,32,50,48,48,55,44,32,50,48,48,56,44,32,50,48,48,57,44,32,50,48,49,48,44,32,50,48,49,49,44,32,50,48,49,50,10,70,114,101,101,32,83,111,102,116,119,97,114,101,32,70,111,117,110,100,
97,116,105,111,110,44,32,73,110,99,46,10,10,84,104,105,115,32,105,115,32,102,114,101,101,32,115,111,102,116,119,97,114,101,59,32,115,101,101,32,116,104,101,32,115,111,117,114,99,101,32,102,111,114,32,99,111,112,121,105,110,103,32,99,111,110,100,105,116,
105,111,110,115,46,32,32,84,104,101,114,101,32,105,115,32,78,79,10,119,97,114,114,97,110,116,121,59,32,110,111,116,32,101,118,101,110,32,102,111,114,32,77,69,82,67,72,65,78,84,65,66,73,76,73,84,89,32,111,114,32,70,73,84,78,69,83,83,32,70,79,82,32,65,
32,80,65,82,84,73,67,85,76,65,82,32,80,85,82,80,79,83,69,46,34,10,10,104,101,108,112,61,34,10,84,114,121,32,92,96,36,109,101,32,45,45,104,101,108,112,39,32,102,111,114,32,109,111,114,101,32,105,110,102,111,114,109,97,116,105,111,110,46,34,10,10,35,32,
80,97,114,115,101,32,99,111,109,109,97,110,100,32,108,105,110,101,10,119,104,105,108,101,32,116,101,115,116,32,36,35,32,45,103,116,32,48,32,59,32,100,111,10,32,32,99,97,115,101,32,36,49,32,105,110,10,32,32,32,32,45,45,116,105,109,101,45,115,116,97,109,
112,32,124,32,45,45,116,105,109,101,42,32,124,32,45,116,32,41,10,32,32,32,32,32,32,32,101,99,104,111,32,34,36,116,105,109,101,115,116,97,109,112,34,32,59,32,101,120,105,116,32,59,59,10,32,32,32,32,45,45,118,101,114,115,105,111,110,32,124,32,45,118,32,
41,10,32,32,32,32,32,32,32,101,99,104,111,32,34,36,118,101,114,115,105,111,110,34,32,59,32,101,120,105,116,32,59,59,10,32,32,32,32,45,45,104,101,108,112,32,124,32,45,45,104,42,32,124,32,45,104,32,41,10,32,32,32,32,32,32,32,101,99,104,111,32,34,36,117,
115,97,103,101,34,59,32,101,120,105,116,32,59,59,10,32,32,32,32,45,45,32,41,32,32,32,32,32,35,32,83,116,111,112,32,111,112,116,105,111,110,32,112,114,111,99,101,115,115,105,110,103,10,32,32,32,32,32,32,32,115,104,105,102,116,59,32,98,114,101,97,107,32,
59,59,10,32,32,32,32,45,32,41,9,35,32,85,115,101,32,115,116,100,105,110,32,97,115,32,105,110,112,117,116,46,10,32,32,32,32,32,32,32,98,114,101,97,107,32,59,59,10,32,32,32,32,45,42,32,41,10,32,32,32,32,32,32,32,101,99,104,111,32,34,36,109,101,58,32,105,
110,118,97,108,105,100,32,111,112,116,105,111,110,32,36,49,36,104,101,108,112,34,10,32,32,32,32,32,32,32,101,120,105,116,32,49,32,59,59,10,10,32,32,32,32,42,108,111,99,97,108,42,41,10,32,32,32,32,32,32,32,35,32,70,105,114,115,116,32,112,97,115,115,32,
116,104,114,111,117,103,104,32,97,110,121,32,108,111,99,97,108,32,109,97,99,104,105,110,101,32,116,121,112,101,115,46,10,32,32,32,32,32,32,32,101,99,104,111,32,36,49,10,32,32,32,32,32,32,32,101,120,105,116,32,59,59,10,10,32,32,32,32,42,32,41,10,32,32,
32,32,32,32,32,98,114,101,97,107,32,59,59,10,32,32,101,115,97,99,10,100,111,110,101,10,10,99,97,115,101,32,36,35,32,105,110,10,32,48,41,32,101,99,104,111,32,34,36,109,101,58,32,109,105,115,115,105,110,103,32,97,114,103,117,109,101,110,116,36,104,101,
108,112,34,32,62,38,50,10,32,32,32,32,101,120,105,116,32,49,59,59,10,32,49,41,32,59,59,10,32,42,41,32,101,99,104,111,32,34,36,109,101,58,32,116,111,111,32,109,97,110,121,32,97,114,103,117,109,101,110,116,115,36,104,101,108,112,34,32,62,38,50,10,32,32,
32,32,101,120,105,116,32,49,59,59,10,101,115,97,99,10,10,35,32,83,101,112,97,114,97,116,101,32,119,104,97,116,32,116,104,101,32,117,115,101,114,32,103,97,118,101,32,105,110,116,111,32,67,80,85,45,67,79,77,80,65,78,89,32,97,110,100,32,79,83,32,111,114,
32,75,69,82,78,69,76,45,79,83,32,40,105,102,32,97,110,121,41,46,10,35,32,72,101,114,101,32,119,101,32,109,117,115,116,32,114,101,99,111,103,110,105,122,101,32,97,108,108,32,116,104,101,32,118,97,108,105,100,32,75,69,82,78,69,76,45,79,83,32,99,111,109,
98,105,110,97,116,105,111,110,115,46,10,109,97,121,98,101,95,111,115,61,96,101,99,104,111,32,36,49,32,124,32,115,101,100,32,39,115,47,94,92,40,46,42,92,41,45,92,40,91,94,45,93,42,45,91,94,45,93,42,92,41,36,47,92,50,47,39,96,10,99,97,115,101,32,36,109,
97,121,98,101,95,111,115,32,105,110,10,32,32,110,116,111,45,113,110,120,42,32,124,32,108,105,110,117,120,45,103,110,117,42,32,124,32,108,105,110,117,120,45,97,110,100,114,111,105,100,42,32,124,32,108,105,110,117,120,45,100,105,101,116,108,105,98,99,32,
124,32,108,105,110,117,120,45,110,101,119,108,105,98,42,32,124,32,92,10,32,32,108,105,110,117,120,45,117,99,108,105,98,99,42,32,124,32,117,99,108,105,110,117,120,45,117,99,108,105,98,99,42,32,124,32,117,99,108,105,110,117,120,45,103,110,117,42,32,124,
32,107,102,114,101,101,98,115,100,42,45,103,110,117,42,32,124,32,92,10,32,32,107,110,101,116,98,115,100,42,45,103,110,117,42,32,124,32,110,101,116,98,115,100,42,45,103,110,117,42,32,124,32,92,10,32,32,107,111,112,101,110,115,111,108,97,114,105,115,42,
45,103,110,117,42,32,124,32,92,10,32,32,115,116,111,114,109,45,99,104,97,111,115,42,32,124,32,111,115,50,45,101,109,120,42,32,124,32,114,116,109,107,45,110,111,118,97,42,41,10,32,32,32,32,111,115,61,45,36,109,97,121,98,101,95,111,115,10,32,32,32,32,98,
97,115,105,99,95,109,97,99,104,105,110,101,61,96,101,99,104,111,32,36,49,32,124,32,115,101,100,32,39,115,47,94,92,40,46,42,92,41,45,92,40,91,94,45,93,42,45,91,94,45,93,42,92,41,36,47,92,49,47,39,96,10,32,32,32,32,59,59,10,32,32,97,110,100,114,111,105,
100,45,108,105,110,117,120,41,10,32,32,32,32,111,115,61,45,108,105,110,117,120,45,97,110,100,114,111,105,100,10,32,32,32,32,98,97,115,105,99,95,109,97,99,104,105,110,101,61,96,101,99,104,111,32,36,49,32,124,32,115,101,100,32,39,115,47,94,92,40,46,42,
92,41,45,92,40,91,94,45,93,42,45,91,94,45,93,42,92,41,36,47,92,49,47,39,96,45,117,110,107,110,111,119,110,10,32,32,32,32,59,59,10,32,32,42,41,10,32,32,32,32,98,97,115,105,99,95,109,97,99,104,105,110,101,61,96,101,99,104,111,32,36,49,32,124,32,115,101,
100,32,39,115,47,45,91,94,45,93,42,36,47,47,39,96,10,32,32,32,32,105,102,32,91,32,36,98,97,115,105,99,95,109,97,99,104,105,110,101,32,33,61,32,36,49,32,93,10,32,32,32,32,116,104,101,110,32,111,115,61,96,101,99,104,111,32,36,49,32,124,32,115,101,100,32,
39,115,47,46,42,45,47,45,47,39,96,10,32,32,32,32,101,108,115,101,32,111,115,61,59,32,102,105,10,32,32,32,32,59,59,10,101,115,97,99,10,10,35,35,35,32,76,101,116,39,115,32,114,101,99,111,103,110,105,122,101,32,99,111,109,109,111,110,32,109,97,99,104,105,
110,101,115,32,97,115,32,110,111,116,32,98,101,105,110,103,32,111,112,101,114,97,116,105,110,103,32,115,121,115,116,101,109,115,32,115,111,10,35,35,35,32,116,104,97,116,32,116,104,105,110,103,115,32,108,105,107,101,32,99,111,110,102,105,103,46,115,117,
98,32,100,101,99,115,116,97,116,105,111,110,45,51,49,48,48,32,119,111,114,107,46,32,32,87,101,32,97,108,115,111,10,35,35,35,32,114,101,99,111,103,110,105,122,101,32,115,111,109,101,32,109,97,110,117,102,97,99,116,117,114,101,114,115,32,97,115,32,110,
111,116,32,98,101,105,110,103,32,111,112,101,114,97,116,105,110,103,32,115,121,115,116,101,109,115,44,32,115,111,32,119,101,10,35,35,35,32,99,97,110,32,112,114,111,118,105,100,101,32,100,101,102,97,117,108,116,32,111,112,101,114,97,116,105,110,103,32,
115,121,115,116,101,109,115,32,98,101,108,111,119,46,10,99,97,115,101,32,36,111,115,32,105,110,10,9,45,115,117,110,42,111,115,42,41,10,9,9,35,32,80,114,101,118,101,110,116,32,102,111,108,108,111,119,105,110,103,32,99,108,97,117,115,101,32,102,114,111,
109,32,104,97,110,100,108,105,110,103,32,116,104,105,115,32,105,110,118,97,108,105,100,32,105,110,112,117,116,46,10,9,9,59,59,10,9,45,100,101,99,42,32,124,32,45,109,105,112,115,42,32,124,32,45,115,101,113,117,101,110,116,42,32,124,32,45,101,110,99,111,
114,101,42,32,124,32,45,112,99,53,51,50,42,32,124,32,45,115,103,105,42,32,124,32,45,115,111,110,121,42,32,124,32,92,10,9,45,97,116,116,42,32,124,32,45,55,51,48,48,42,32,124,32,45,51,51,48,48,42,32,124,32,45,100,101,108,116,97,42,32,124,32,45,109,111,
116,111,114,111,108,97,42,32,124,32,45,115,117,110,91,50,51,52,93,42,32,124,32,92,10,9,45,117,110,105,99,111,109,42,32,124,32,45,105,98,109,42,32,124,32,45,110,101,120,116,32,124,32,45,104,112,32,124,32,45,105,115,105,42,32,124,32,45,97,112,111,108,108,
111,32,124,32,45,97,108,116,111,115,42,32,124,32,92,10,9,45,99,111,110,118,101,114,103,101,110,116,42,32,124,32,45,110,99,114,42,32,124,32,45,110,101,119,115,32,124,32,45,51,50,42,32,124,32,45,51,54,48,48,42,32,124,32,45,51,49,48,48,42,32,124,32,45,104,
105,116,97,99,104,105,42,32,124,92,10,9,45,99,91,49,50,51,93,42,32,124,32,45,99,111,110,118,101,120,42,32,124,32,45,115,117,110,32,124,32,45,99,114,100,115,32,124,32,45,111,109,114,111,110,42,32,124,32,45,100,103,32,124,32,45,117,108,116,114,97,32,124,
32,45,116,116,105,42,32,124,32,92,10,9,45,104,97,114,114,105,115,32,124,32,45,100,111,108,112,104,105,110,32,124,32,45,104,105,103,104,108,101,118,101,108,32,124,32,45,103,111,117,108,100,32,124,32,45,99,98,109,32,124,32,45,110,115,32,124,32,45,109,97,
115,115,99,111,109,112,32,124,32,92,10,9,45,97,112,112,108,101,32,124,32,45,97,120,105,115,32,124,32,45,107,110,117,116,104,32,124,32,45,99,114,97,121,32,124,32,45,109,105,99,114,111,98,108,97,122,101,41,10,9,9,111,115,61,10,9,9,98,97,115,105,99,95,109,
97,99,104,105,110,101,61,36,49,10,9,9,59,59,10,9,45,98,108,117,101,103,101,110,101,42,41,10,9,9,111,115,61,45,99,110,107,10,9,9,59,59,10,9,45,115,105,109,32,124,32,45,99,105,115,99,111,32,124,32,45,111,107,105,32,124,32,45,119,101,99,32,124,32,45,119,
105,110,98,111,110,100,41,10,9,9,111,115,61,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,36,49,10,9,9,59,59,10,9,45,115,99,111,117,116,41,10,9,9,59,59,10,9,45,119,114,115,41,10,9,9,111,115,61,45,118,120,119,111,114,107,115,10,9,9,98,97,115,
105,99,95,109,97,99,104,105,110,101,61,36,49,10,9,9,59,59,10,9,45,99,104,111,114,117,115,111,115,42,41,10,9,9,111,115,61,45,99,104,111,114,117,115,111,115,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,36,49,10,9,9,59,59,10,9,45,99,104,111,114,
117,115,114,100,98,41,10,9,9,111,115,61,45,99,104,111,114,117,115,114,100,98,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,36,49,10,9,9,59,59,10,9,45,104,105,117,120,42,41,10,9,9,111,115,61,45,104,105,117,120,119,101,50,10,9,9,59,59,10,9,45,
115,99,111,54,41,10,9,9,111,115,61,45,115,99,111,53,118,54,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,96,101,99,104,111,32,36,49,32,124,32,115,101,100,32,45,101,32,39,115,47,56,54,45,46,42,47,56,54,45,112,99,47,39,96,10,9,9,59,59,10,9,45,
115,99,111,53,41,10,9,9,111,115,61,45,115,99,111,51,46,50,118,53,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,96,101,99,104,111,32,36,49,32,124,32,115,101,100,32,45,101,32,39,115,47,56,54,45,46,42,47,56,54,45,112,99,47,39,96,10,9,9,59,59,10,
9,45,115,99,111,52,41,10,9,9,111,115,61,45,115,99,111,51,46,50,118,52,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,96,101,99,104,111,32,36,49,32,124,32,115,101,100,32,45,101,32,39,115,47,56,54,45,46,42,47,56,54,45,112,99,47,39,96,10,9,9,59,
59,10,9,45,115,99,111,51,46,50,46,91,52,45,57,93,42,41,10,9,9,111,115,61,96,101,99,104,111,32,36,111,115,32,124,32,115,101,100,32,45,101,32,39,115,47,115,99,111,51,46,50,46,47,115,99,111,51,46,50,118,47,39,96,10,9,9,98,97,115,105,99,95,109,97,99,104,
105,110,101,61,96,101,99,104,111,32,36,49,32,124,32,115,101,100,32,45,101,32,39,115,47,56,54,45,46,42,47,56,54,45,112,99,47,39,96,10,9,9,59,59,10,9,45,115,99,111,51,46,50,118,91,52,45,57,93,42,41,10,9,9,35,32,68,111,110,39,116,32,102,111,114,103,101,
116,32,118,101,114,115,105,111,110,32,105,102,32,105,116,32,105,115,32,51,46,50,118,52,32,111,114,32,110,101,119,101,114,46,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,96,101,99,104,111,32,36,49,32,124,32,115,101,100,32,45,101,32,39,115,47,
56,54,45,46,42,47,56,54,45,112,99,47,39,96,10,9,9,59,59,10,9,45,115,99,111,53,118,54,42,41,10,9,9,35,32,68,111,110,39,116,32,102,111,114,103,101,116,32,118,101,114,115,105,111,110,32,105,102,32,105,116,32,105,115,32,51,46,50,118,52,32,111,114,32,110,
101,119,101,114,46,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,96,101,99,104,111,32,36,49,32,124,32,115,101,100,32,45,101,32,39,115,47,56,54,45,46,42,47,56,54,45,112,99,47,39,96,10,9,9,59,59,10,9,45,115,99,111,42,41,10,9,9,111,115,61,45,115,
99,111,51,46,50,118,50,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,96,101,99,104,111,32,36,49,32,124,32,115,101,100,32,45,101,32,39,115,47,56,54,45,46,42,47,56,54,45,112,99,47,39,96,10,9,9,59,59,10,9,45,117,100,107,42,41,10,9,9,98,97,115,
105,99,95,109,97,99,104,105,110,101,61,96,101,99,104,111,32,36,49,32,124,32,115,101,100,32,45,101,32,39,115,47,56,54,45,46,42,47,56,54,45,112,99,47,39,96,10,9,9,59,59,10,9,45,105,115,99,41,10,9,9,111,115,61,45,105,115,99,50,46,50,10,9,9,98,97,115,105,
99,95,109,97,99,104,105,110,101,61,96,101,99,104,111,32,36,49,32,124,32,115,101,100,32,45,101,32,39,115,47,56,54,45,46,42,47,56,54,45,112,99,47,39,96,10,9,9,59,59,10,9,45,99,108,105,120,42,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,99,
108,105,112,112,101,114,45,105,110,116,101,114,103,114,97,112,104,10,9,9,59,59,10,9,45,105,115,99,42,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,96,101,99,104,111,32,36,49,32,124,32,115,101,100,32,45,101,32,39,115,47,56,54,45,46,42,47,
56,54,45,112,99,47,39,96,10,9,9,59,59,10,9,45,108,121,110,120,42,41,10,9,9,111,115,61,45,108,121,110,120,111,115,10,9,9,59,59,10,9,45,112,116,120,42,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,96,101,99,104,111,32,36,49,32,124,32,115,101,
100,32,45,101,32,39,115,47,56,54,45,46,42,47,56,54,45,115,101,113,117,101,110,116,47,39,96,10,9,9,59,59,10,9,45,119,105,110,100,111,119,115,110,116,42,41,10,9,9,111,115,61,96,101,99,104,111,32,36,111,115,32,124,32,115,101,100,32,45,101,32,39,115,47,119,
105,110,100,111,119,115,110,116,47,119,105,110,110,116,47,39,96,10,9,9,59,59,10,9,45,112,115,111,115,42,41,10,9,9,111,115,61,45,112,115,111,115,10,9,9,59,59,10,9,45,109,105,110,116,32,124,32,45,109,105,110,116,91,48,45,57,93,42,41,10,9,9,98,97,115,105,
99,95,109,97,99,104,105,110,101,61,109,54,56,107,45,97,116,97,114,105,10,9,9,111,115,61,45,109,105,110,116,10,9,9,59,59,10,101,115,97,99,10,10,35,32,68,101,99,111,100,101,32,97,108,105,97,115,101,115,32,102,111,114,32,99,101,114,116,97,105,110,32,67,
80,85,45,67,79,77,80,65,78,89,32,99,111,109,98,105,110,97,116,105,111,110,115,46,10,99,97,115,101,32,36,98,97,115,105,99,95,109,97,99,104,105,110,101,32,105,110,10,9,35,32,82,101,99,111,103,110,105,122,101,32,116,104,101,32,98,97,115,105,99,32,67,80,
85,32,116,121,112,101,115,32,119,105,116,104,111,117,116,32,99,111,109,112,97,110,121,32,110,97,109,101,46,10,9,35,32,83,111,109,101,32,97,114,101,32,111,109,105,116,116,101,100,32,104,101,114,101,32,98,101,99,97,117,115,101,32,116,104,101,121,32,104,
97,118,101,32,115,112,101,99,105,97,108,32,109,101,97,110,105,110,103,115,32,98,101,108,111,119,46,10,9,49,55,53,48,97,32,124,32,53,56,48,32,92,10,9,124,32,97,50,57,107,32,92,10,9,124,32,97,97,114,99,104,54,52,32,124,32,97,97,114,99,104,54,52,95,98,101,
32,92,10,9,124,32,97,108,112,104,97,32,124,32,97,108,112,104,97,101,118,91,52,45,56,93,32,124,32,97,108,112,104,97,101,118,53,54,32,124,32,97,108,112,104,97,101,118,54,91,55,56,93,32,124,32,97,108,112,104,97,112,99,97,53,91,54,55,93,32,92,10,9,124,32,
97,108,112,104,97,54,52,32,124,32,97,108,112,104,97,54,52,101,118,91,52,45,56,93,32,124,32,97,108,112,104,97,54,52,101,118,53,54,32,124,32,97,108,112,104,97,54,52,101,118,54,91,55,56,93,32,124,32,97,108,112,104,97,54,52,112,99,97,53,91,54,55,93,32,92,
10,9,124,32,97,109,51,51,95,50,46,48,32,92,10,9,124,32,97,114,99,32,124,32,97,114,109,32,124,32,97,114,109,91,98,108,93,101,32,124,32,97,114,109,101,91,108,98,93,32,124,32,97,114,109,118,91,50,51,52,53,93,32,124,32,97,114,109,118,91,51,52,53,93,91,108,
98,93,32,124,32,97,118,114,32,124,32,97,118,114,51,50,32,92,10,32,32,32,32,32,32,32,32,124,32,98,101,51,50,32,124,32,98,101,54,52,32,92,10,9,124,32,98,102,105,110,32,92,10,9,124,32,99,52,120,32,124,32,99,108,105,112,112,101,114,32,92,10,9,124,32,100,
49,48,118,32,124,32,100,51,48,118,32,124,32,100,108,120,32,124,32,100,115,112,49,54,120,120,32,92,10,9,124,32,101,112,105,112,104,97,110,121,32,92,10,9,124,32,102,105,100,111,32,124,32,102,114,51,48,32,124,32,102,114,118,32,92,10,9,124,32,104,56,51,48,
48,32,124,32,104,56,53,48,48,32,124,32,104,112,112,97,32,124,32,104,112,112,97,49,46,91,48,49,93,32,124,32,104,112,112,97,50,46,48,32,124,32,104,112,112,97,50,46,48,91,110,119,93,32,124,32,104,112,112,97,54,52,32,92,10,9,124,32,104,101,120,97,103,111,
110,32,92,10,9,124,32,105,51,55,48,32,124,32,105,56,54,48,32,124,32,105,57,54,48,32,124,32,105,97,54,52,32,92,10,9,124,32,105,112,50,107,32,124,32,105,113,50,48,48,48,32,92,10,9,124,32,108,101,51,50,32,124,32,108,101,54,52,32,92,10,9,124,32,108,109,51,
50,32,92,10,9,124,32,109,51,50,99,32,124,32,109,51,50,114,32,124,32,109,51,50,114,108,101,32,124,32,109,54,56,48,48,48,32,124,32,109,54,56,107,32,124,32,109,56,56,107,32,92,10,9,124,32,109,97,120,113,32,124,32,109,98,32,124,32,109,105,99,114,111,98,108,
97,122,101,32,124,32,109,99,111,114,101,32,124,32,109,101,112,32,124,32,109,101,116,97,103,32,92,10,9,124,32,109,105,112,115,32,124,32,109,105,112,115,98,101,32,124,32,109,105,112,115,101,98,32,124,32,109,105,112,115,101,108,32,124,32,109,105,112,115,
108,101,32,92,10,9,124,32,109,105,112,115,49,54,32,92,10,9,124,32,109,105,112,115,54,52,32,124,32,109,105,112,115,54,52,101,108,32,92,10,9,124,32,109,105,112,115,54,52,111,99,116,101,111,110,32,124,32,109,105,112,115,54,52,111,99,116,101,111,110,101,
108,32,92,10,9,124,32,109,105,112,115,54,52,111,114,105,111,110,32,124,32,109,105,112,115,54,52,111,114,105,111,110,101,108,32,92,10,9,124,32,109,105,112,115,54,52,114,53,57,48,48,32,124,32,109,105,112,115,54,52,114,53,57,48,48,101,108,32,92,10,9,124,
32,109,105,112,115,54,52,118,114,32,124,32,109,105,112,115,54,52,118,114,101,108,32,92,10,9,124,32,109,105,112,115,54,52,118,114,52,49,48,48,32,124,32,109,105,112,115,54,52,118,114,52,49,48,48,101,108,32,92,10,9,124,32,109,105,112,115,54,52,118,114,52,
51,48,48,32,124,32,109,105,112,115,54,52,118,114,52,51,48,48,101,108,32,92,10,9,124,32,109,105,112,115,54,52,118,114,53,48,48,48,32,124,32,109,105,112,115,54,52,118,114,53,48,48,48,101,108,32,92,10,9,124,32,109,105,112,115,54,52,118,114,53,57,48,48,32,
124,32,109,105,112,115,54,52,118,114,53,57,48,48,101,108,32,92,10,9,124,32,109,105,112,115,105,115,97,51,50,32,124,32,109,105,112,115,105,115,97,51,50,101,108,32,92,10,9,124,32,109,105,112,115,105,115,97,51,50,114,50,32,124,32,109,105,112,115,105,115,
97,51,50,114,50,101,108,32,92,10,9,124,32,109,105,112,115,105,115,97,54,52,32,124,32,109,105,112,115,105,115,97,54,52,101,108,32,92,10,9,124,32,109,105,112,115,105,115,97,54,52,114,50,32,124,32,109,105,112,115,105,115,97,54,52,114,50,101,108,32,92,10,
9,124,32,109,105,112,115,105,115,97,54,52,115,98,49,32,124,32,109,105,112,115,105,115,97,54,52,115,98,49,101,108,32,92,10,9,124,32,109,105,112,115,105,115,97,54,52,115,114,55,49,107,32,124,32,109,105,112,115,105,115,97,54,52,115,114,55,49,107,101,108,
32,92,10,9,124,32,109,105,112,115,116,120,51,57,32,124,32,109,105,112,115,116,120,51,57,101,108,32,92,10,9,124,32,109,110,49,48,50,48,48,32,124,32,109,110,49,48,51,48,48,32,92,10,9,124,32,109,111,120,105,101,32,92,10,9,124,32,109,116,32,92,10,9,124,32,
109,115,112,52,51,48,32,92,10,9,124,32,110,100,115,51,50,32,124,32,110,100,115,51,50,108,101,32,124,32,110,100,115,51,50,98,101,32,92,10,9,124,32,110,105,111,115,32,124,32,110,105,111,115,50,32,92,10,9,124,32,110,115,49,54,107,32,124,32,110,115,51,50,
107,32,92,10,9,124,32,111,112,101,110,56,32,92,10,9,124,32,111,114,51,50,32,92,10,9,124,32,112,100,112,49,48,32,124,32,112,100,112,49,49,32,124,32,112,106,32,124,32,112,106,108,32,92,10,9,124,32,112,111,119,101,114,112,99,32,124,32,112,111,119,101,114,
112,99,54,52,32,124,32,112,111,119,101,114,112,99,54,52,108,101,32,124,32,112,111,119,101,114,112,99,108,101,32,92,10,9,124,32,112,121,114,97,109,105,100,32,92,10,9,124,32,114,108,55,56,32,124,32,114,120,32,92,10,9,124,32,115,99,111,114,101,32,92,10,
9,124,32,115,104,32,124,32,115,104,91,49,50,51,52,93,32,124,32,115,104,91,50,52,93,97,32,124,32,115,104,91,50,52,93,97,101,98,32,124,32,115,104,91,50,51,93,101,32,124,32,115,104,91,51,52,93,101,98,32,124,32,115,104,101,98,32,124,32,115,104,98,101,32,
124,32,115,104,108,101,32,124,32,115,104,91,49,50,51,52,93,108,101,32,124,32,115,104,51,101,108,101,32,92,10,9,124,32,115,104,54,52,32,124,32,115,104,54,52,108,101,32,92,10,9,124,32,115,112,97,114,99,32,124,32,115,112,97,114,99,54,52,32,124,32,115,112,
97,114,99,54,52,98,32,124,32,115,112,97,114,99,54,52,118,32,124,32,115,112,97,114,99,56,54,120,32,124,32,115,112,97,114,99,108,101,116,32,124,32,115,112,97,114,99,108,105,116,101,32,92,10,9,124,32,115,112,97,114,99,118,56,32,124,32,115,112,97,114,99,
118,57,32,124,32,115,112,97,114,99,118,57,98,32,124,32,115,112,97,114,99,118,57,118,32,92,10,9,124,32,115,112,117,32,92,10,9,124,32,116,97,104,111,101,32,124,32,116,105,99,52,120,32,124,32,116,105,99,53,52,120,32,124,32,116,105,99,53,53,120,32,124,32,
116,105,99,54,120,32,124,32,116,105,99,56,48,32,124,32,116,114,111,110,32,92,10,9,124,32,117,98,105,99,111,109,51,50,32,92,10,9,124,32,118,56,53,48,32,124,32,118,56,53,48,101,32,124,32,118,56,53,48,101,49,32,124,32,118,56,53,48,101,50,32,124,32,118,56,
53,48,101,115,32,124,32,118,56,53,48,101,50,118,51,32,92,10,9,124,32,119,101,51,50,107,32,92,10,9,124,32,120,56,54,32,124,32,120,99,49,54,120,32,124,32,120,115,116,111,114,109,121,49,54,32,124,32,120,116,101,110,115,97,32,92,10,9,124,32,122,56,107,32,
124,32,122,56,48,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,36,98,97,115,105,99,95,109,97,99,104,105,110,101,45,117,110,107,110,111,119,110,10,9,9,59,59,10,9,99,53,52,120,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,116,
105,99,53,52,120,45,117,110,107,110,111,119,110,10,9,9,59,59,10,9,99,53,53,120,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,116,105,99,53,53,120,45,117,110,107,110,111,119,110,10,9,9,59,59,10,9,99,54,120,41,10,9,9,98,97,115,105,99,95,109,
97,99,104,105,110,101,61,116,105,99,54,120,45,117,110,107,110,111,119,110,10,9,9,59,59,10,9,109,54,56,49,49,32,124,32,109,54,56,104,99,49,49,32,124,32,109,54,56,49,50,32,124,32,109,54,56,104,99,49,50,32,124,32,109,54,56,104,99,115,49,50,120,32,124,32,
112,105,99,111,99,104,105,112,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,36,98,97,115,105,99,95,109,97,99,104,105,110,101,45,117,110,107,110,111,119,110,10,9,9,111,115,61,45,110,111,110,101,10,9,9,59,59,10,9,109,56,56,49,49,48,32,124,
32,109,54,56,48,91,49,50,51,52,54,93,48,32,124,32,109,54,56,51,63,50,32,124,32,109,54,56,51,54,48,32,124,32,109,53,50,48,48,32,124,32,118,55,48,32,124,32,119,54,53,32,124,32,122,56,107,41,10,9,9,59,59,10,9,109,115,49,41,10,9,9,98,97,115,105,99,95,109,
97,99,104,105,110,101,61,109,116,45,117,110,107,110,111,119,110,10,9,9,59,59,10,10,9,115,116,114,111,110,103,97,114,109,32,124,32,116,104,117,109,98,32,124,32,120,115,99,97,108,101,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,97,114,109,
45,117,110,107,110,111,119,110,10,9,9,59,59,10,9,120,103,97,116,101,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,36,98,97,115,105,99,95,109,97,99,104,105,110,101,45,117,110,107,110,111,119,110,10,9,9,111,115,61,45,110,111,110,101,10,9,9,
59,59,10,9,120,115,99,97,108,101,101,98,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,97,114,109,101,98,45,117,110,107,110,111,119,110,10,9,9,59,59,10,10,9,120,115,99,97,108,101,101,108,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,
101,61,97,114,109,101,108,45,117,110,107,110,111,119,110,10,9,9,59,59,10,10,9,35,32,87,101,32,117,115,101,32,96,112,99,39,32,114,97,116,104,101,114,32,116,104,97,110,32,96,117,110,107,110,111,119,110,39,10,9,35,32,98,101,99,97,117,115,101,32,40,49,41,
32,116,104,97,116,39,115,32,119,104,97,116,32,116,104,101,121,32,110,111,114,109,97,108,108,121,32,97,114,101,44,32,97,110,100,10,9,35,32,40,50,41,32,116,104,101,32,119,111,114,100,32,34,117,110,107,110,111,119,110,34,32,116,101,110,100,115,32,116,111,
32,99,111,110,102,117,115,101,32,98,101,103,105,110,110,105,110,103,32,117,115,101,114,115,46,10,9,105,42,56,54,32,124,32,120,56,54,95,54,52,41,10,9,32,32,98,97,115,105,99,95,109,97,99,104,105,110,101,61,36,98,97,115,105,99,95,109,97,99,104,105,110,101,
45,112,99,10,9,32,32,59,59,10,9,35,32,79,98,106,101,99,116,32,105,102,32,109,111,114,101,32,116,104,97,110,32,111,110,101,32,99,111,109,112,97,110,121,32,110,97,109,101,32,119,111,114,100,46,10,9,42,45,42,45,42,41,10,9,9,101,99,104,111,32,73,110,118,
97,108,105,100,32,99,111,110,102,105,103,117,114,97,116,105,111,110,32,92,96,36,49,92,39,58,32,109,97,99,104,105,110,101,32,92,96,36,98,97,115,105,99,95,109,97,99,104,105,110,101,92,39,32,110,111,116,32,114,101,99,111,103,110,105,122,101,100,32,49,62,
38,50,10,9,9,101,120,105,116,32,49,10,9,9,59,59,10,9,35,32,82,101,99,111,103,110,105,122,101,32,116,104,101,32,98,97,115,105,99,32,67,80,85,32,116,121,112,101,115,32,119,105,116,104,32,99,111,109,112,97,110,121,32,110,97,109,101,46,10,9,53,56,48,45,42,
32,92,10,9,124,32,97,50,57,107,45,42,32,92,10,9,124,32,97,97,114,99,104,54,52,45,42,32,124,32,97,97,114,99,104,54,52,95,98,101,45,42,32,92,10,9,124,32,97,108,112,104,97,45,42,32,124,32,97,108,112,104,97,101,118,91,52,45,56,93,45,42,32,124,32,97,108,112,
104,97,101,118,53,54,45,42,32,124,32,97,108,112,104,97,101,118,54,91,55,56,93,45,42,32,92,10,9,124,32,97,108,112,104,97,54,52,45,42,32,124,32,97,108,112,104,97,54,52,101,118,91,52,45,56,93,45,42,32,124,32,97,108,112,104,97,54,52,101,118,53,54,45,42,32,
124,32,97,108,112,104,97,54,52,101,118,54,91,55,56,93,45,42,32,92,10,9,124,32,97,108,112,104,97,112,99,97,53,91,54,55,93,45,42,32,124,32,97,108,112,104,97,54,52,112,99,97,53,91,54,55,93,45,42,32,124,32,97,114,99,45,42,32,92,10,9,124,32,97,114,109,45,
42,32,32,124,32,97,114,109,98,101,45,42,32,124,32,97,114,109,108,101,45,42,32,124,32,97,114,109,101,98,45,42,32,124,32,97,114,109,118,42,45,42,32,92,10,9,124,32,97,118,114,45,42,32,124,32,97,118,114,51,50,45,42,32,92,10,9,124,32,98,101,51,50,45,42,32,
124,32,98,101,54,52,45,42,32,92,10,9,124,32,98,102,105,110,45,42,32,124,32,98,115,50,48,48,48,45,42,32,92,10,9,124,32,99,91,49,50,51,93,42,32,124,32,99,51,48,45,42,32,124,32,91,99,106,116,93,57,48,45,42,32,124,32,99,52,120,45,42,32,92,10,9,124,32,99,
108,105,112,112,101,114,45,42,32,124,32,99,114,97,121,110,118,45,42,32,124,32,99,121,100,114,97,45,42,32,92,10,9,124,32,100,49,48,118,45,42,32,124,32,100,51,48,118,45,42,32,124,32,100,108,120,45,42,32,92,10,9,124,32,101,108,120,115,105,45,42,32,92,10,
9,124,32,102,51,48,91,48,49,93,45,42,32,124,32,102,55,48,48,45,42,32,124,32,102,105,100,111,45,42,32,124,32,102,114,51,48,45,42,32,124,32,102,114,118,45,42,32,124,32,102,120,56,48,45,42,32,92,10,9,124,32,104,56,51,48,48,45,42,32,124,32,104,56,53,48,48,
45,42,32,92,10,9,124,32,104,112,112,97,45,42,32,124,32,104,112,112,97,49,46,91,48,49,93,45,42,32,124,32,104,112,112,97,50,46,48,45,42,32,124,32,104,112,112,97,50,46,48,91,110,119,93,45,42,32,124,32,104,112,112,97,54,52,45,42,32,92,10,9,124,32,104,101,
120,97,103,111,110,45,42,32,92,10,9,124,32,105,42,56,54,45,42,32,124,32,105,56,54,48,45,42,32,124,32,105,57,54,48,45,42,32,124,32,105,97,54,52,45,42,32,92,10,9,124,32,105,112,50,107,45,42,32,124,32,105,113,50,48,48,48,45,42,32,92,10,9,124,32,108,101,
51,50,45,42,32,124,32,108,101,54,52,45,42,32,92,10,9,124,32,108,109,51,50,45,42,32,92,10,9,124,32,109,51,50,99,45,42,32,124,32,109,51,50,114,45,42,32,124,32,109,51,50,114,108,101,45,42,32,92,10,9,124,32,109,54,56,48,48,48,45,42,32,124,32,109,54,56,48,
91,48,49,50,51,52,54,93,48,45,42,32,124,32,109,54,56,51,54,48,45,42,32,124,32,109,54,56,51,63,50,45,42,32,124,32,109,54,56,107,45,42,32,92,10,9,124,32,109,56,56,49,49,48,45,42,32,124,32,109,56,56,107,45,42,32,124,32,109,97,120,113,45,42,32,124,32,109,
99,111,114,101,45,42,32,124,32,109,101,116,97,103,45,42,32,124,32,109,105,99,114,111,98,108,97,122,101,45,42,32,92,10,9,124,32,109,105,112,115,45,42,32,124,32,109,105,112,115,98,101,45,42,32,124,32,109,105,112,115,101,98,45,42,32,124,32,109,105,112,115,
101,108,45,42,32,124,32,109,105,112,115,108,101,45,42,32,92,10,9,124,32,109,105,112,115,49,54,45,42,32,92,10,9,124,32,109,105,112,115,54,52,45,42,32,124,32,109,105,112,115,54,52,101,108,45,42,32,92,10,9,124,32,109,105,112,115,54,52,111,99,116,101,111,
110,45,42,32,124,32,109,105,112,115,54,52,111,99,116,101,111,110,101,108,45,42,32,92,10,9,124,32,109,105,112,115,54,52,111,114,105,111,110,45,42,32,124,32,109,105,112,115,54,52,111,114,105,111,110,101,108,45,42,32,92,10,9,124,32,109,105,112,115,54,52,
114,53,57,48,48,45,42,32,124,32,109,105,112,115,54,52,114,53,57,48,48,101,108,45,42,32,92,10,9,124,32,109,105,112,115,54,52,118,114,45,42,32,124,32,109,105,112,115,54,52,118,114,101,108,45,42,32,92,10,9,124,32,109,105,112,115,54,52,118,114,52,49,48,48,
45,42,32,124,32,109,105,112,115,54,52,118,114,52,49,48,48,101,108,45,42,32,92,10,9,124,32,109,105,112,115,54,52,118,114,52,51,48,48,45,42,32,124,32,109,105,112,115,54,52,118,114,52,51,48,48,101,108,45,42,32,92,10,9,124,32,109,105,112,115,54,52,118,114,
53,48,48,48,45,42,32,124,32,109,105,112,115,54,52,118,114,53,48,48,48,101,108,45,42,32,92,10,9,124,32,109,105,112,115,54,52,118,114,53,57,48,48,45,42,32,124,32,109,105,112,115,54,52,118,114,53,57,48,48,101,108,45,42,32,92,10,9,124,32,109,105,112,115,
105,115,97,51,50,45,42,32,124,32,109,105,112,115,105,115,97,51,50,101,108,45,42,32,92,10,9,124,32,109,105,112,115,105,115,97,51,50,114,50,45,42,32,124,32,109,105,112,115,105,115,97,51,50,114,50,101,108,45,42,32,92,10,9,124,32,109,105,112,115,105,115,
97,54,52,45,42,32,124,32,109,105,112,115,105,115,97,54,52,101,108,45,42,32,92,10,9,124,32,109,105,112,115,105,115,97,54,52,114,50,45,42,32,124,32,109,105,112,115,105,115,97,54,52,114,50,101,108,45,42,32,92,10,9,124,32,109,105,112,115,105,115,97,54,52,
115,98,49,45,42,32,124,32,109,105,112,115,105,115,97,54,52,115,98,49,101,108,45,42,32,92,10,9,124,32,109,105,112,115,105,115,97,54,52,115,114,55,49,107,45,42,32,124,32,109,105,112,115,105,115,97,54,52,115,114,55,49,107,101,108,45,42,32,92,10,9,124,32,
109,105,112,115,116,120,51,57,45,42,32,124,32,109,105,112,115,116,120,51,57,101,108,45,42,32,92,10,9,124,32,109,109,105,120,45,42,32,92,10,9,124,32,109,116,45,42,32,92,10,9,124,32,109,115,112,52,51,48,45,42,32,92,10,9,124,32,110,100,115,51,50,45,42,32,
124,32,110,100,115,51,50,108,101,45,42,32,124,32,110,100,115,51,50,98,101,45,42,32,92,10,9,124,32,110,105,111,115,45,42,32,124,32,110,105,111,115,50,45,42,32,92,10,9,124,32,110,111,110,101,45,42,32,124,32,110,112,49,45,42,32,124,32,110,115,49,54,107,
45,42,32,124,32,110,115,51,50,107,45,42,32,92,10,9,124,32,111,112,101,110,56,45,42,32,92,10,9,124,32,111,114,105,111,110,45,42,32,92,10,9,124,32,112,100,112,49,48,45,42,32,124,32,112,100,112,49,49,45,42,32,124,32,112,106,45,42,32,124,32,112,106,108,45,
42,32,124,32,112,110,45,42,32,124,32,112,111,119,101,114,45,42,32,92,10,9,124,32,112,111,119,101,114,112,99,45,42,32,124,32,112,111,119,101,114,112,99,54,52,45,42,32,124,32,112,111,119,101,114,112,99,54,52,108,101,45,42,32,124,32,112,111,119,101,114,
112,99,108,101,45,42,32,92,10,9,124,32,112,121,114,97,109,105,100,45,42,32,92,10,9,124,32,114,108,55,56,45,42,32,124,32,114,111,109,112,45,42,32,124,32,114,115,54,48,48,48,45,42,32,124,32,114,120,45,42,32,92,10,9,124,32,115,104,45,42,32,124,32,115,104,
91,49,50,51,52,93,45,42,32,124,32,115,104,91,50,52,93,97,45,42,32,124,32,115,104,91,50,52,93,97,101,98,45,42,32,124,32,115,104,91,50,51,93,101,45,42,32,124,32,115,104,91,51,52,93,101,98,45,42,32,124,32,115,104,101,98,45,42,32,124,32,115,104,98,101,45,
42,32,92,10,9,124,32,115,104,108,101,45,42,32,124,32,115,104,91,49,50,51,52,93,108,101,45,42,32,124,32,115,104,51,101,108,101,45,42,32,124,32,115,104,54,52,45,42,32,124,32,115,104,54,52,108,101,45,42,32,92,10,9,124,32,115,112,97,114,99,45,42,32,124,32,
115,112,97,114,99,54,52,45,42,32,124,32,115,112,97,114,99,54,52,98,45,42,32,124,32,115,112,97,114,99,54,52,118,45,42,32,124,32,115,112,97,114,99,56,54,120,45,42,32,124,32,115,112,97,114,99,108,101,116,45,42,32,92,10,9,124,32,115,112,97,114,99,108,105,
116,101,45,42,32,92,10,9,124,32,115,112,97,114,99,118,56,45,42,32,124,32,115,112,97,114,99,118,57,45,42,32,124,32,115,112,97,114,99,118,57,98,45,42,32,124,32,115,112,97,114,99,118,57,118,45,42,32,124,32,115,118,49,45,42,32,124,32,115,120,63,45,42,32,
92,10,9,124,32,116,97,104,111,101,45,42,32,92,10,9,124,32,116,105,99,51,48,45,42,32,124,32,116,105,99,52,120,45,42,32,124,32,116,105,99,53,52,120,45,42,32,124,32,116,105,99,53,53,120,45,42,32,124,32,116,105,99,54,120,45,42,32,124,32,116,105,99,56,48,
45,42,32,92,10,9,124,32,116,105,108,101,42,45,42,32,92,10,9,124,32,116,114,111,110,45,42,32,92,10,9,124,32,117,98,105,99,111,109,51,50,45,42,32,92,10,9,124,32,118,56,53,48,45,42,32,124,32,118,56,53,48,101,45,42,32,124,32,118,56,53,48,101,49,45,42,32,
124,32,118,56,53,48,101,115,45,42,32,124,32,118,56,53,48,101,50,45,42,32,124,32,118,56,53,48,101,50,118,51,45,42,32,92,10,9,124,32,118,97,120,45,42,32,92,10,9,124,32,119,101,51,50,107,45,42,32,92,10,9,124,32,120,56,54,45,42,32,124,32,120,56,54,95,54,
52,45,42,32,124,32,120,99,49,54,120,45,42,32,124,32,120,112,115,49,48,48,45,42,32,92,10,9,124,32,120,115,116,111,114,109,121,49,54,45,42,32,124,32,120,116,101,110,115,97,42,45,42,32,92,10,9,124,32,121,109,112,45,42,32,92,10,9,124,32,122,56,107,45,42,
32,124,32,122,56,48,45,42,41,10,9,9,59,59,10,9,35,32,82,101,99,111,103,110,105,122,101,32,116,104,101,32,98,97,115,105,99,32,67,80,85,32,116,121,112,101,115,32,119,105,116,104,111,117,116,32,99,111,109,112,97,110,121,32,110,97,109,101,44,32,119,105,116,
104,32,103,108,111,98,32,109,97,116,99,104,46,10,9,120,116,101,110,115,97,42,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,36,98,97,115,105,99,95,109,97,99,104,105,110,101,45,117,110,107,110,111,119,110,10,9,9,59,59,10,9,35,32,82,101,99,
111,103,110,105,122,101,32,116,104,101,32,118,97,114,105,111,117,115,32,109,97,99,104,105,110,101,32,110,97,109,101,115,32,97,110,100,32,97,108,105,97,115,101,115,32,119,104,105,99,104,32,115,116,97,110,100,10,9,35,32,102,111,114,32,97,32,67,80,85,32,
116,121,112,101,32,97,110,100,32,97,32,99,111,109,112,97,110,121,32,97,110,100,32,115,111,109,101,116,105,109,101,115,32,101,118,101,110,32,97,110,32,79,83,46,10,9,51,56,54,98,115,100,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,105,51,
56,54,45,117,110,107,110,111,119,110,10,9,9,111,115,61,45,98,115,100,10,9,9,59,59,10,9,51,98,49,32,124,32,55,51,48,48,32,124,32,55,51,48,48,45,97,116,116,32,124,32,97,116,116,45,55,51,48,48,32,124,32,112,99,55,51,48,48,32,124,32,115,97,102,97,114,105,
32,124,32,117,110,105,120,112,99,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,109,54,56,48,48,48,45,97,116,116,10,9,9,59,59,10,9,51,98,42,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,119,101,51,50,107,45,97,116,116,10,9,9,
59,59,10,9,97,50,57,107,104,105,102,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,97,50,57,107,45,97,109,100,10,9,9,111,115,61,45,117,100,105,10,9,9,59,59,10,9,97,98,97,99,117,115,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,
97,98,97,99,117,115,45,117,110,107,110,111,119,110,10,9,9,59,59,10,9,97,100,111,98,101,54,56,107,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,109,54,56,48,49,48,45,97,100,111,98,101,10,9,9,111,115,61,45,115,99,111,117,116,10,9,9,59,59,10,
9,97,108,108,105,97,110,116,32,124,32,102,120,56,48,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,102,120,56,48,45,97,108,108,105,97,110,116,10,9,9,59,59,10,9,97,108,116,111,115,32,124,32,97,108,116,111,115,51,48,54,56,41,10,9,9,98,97,115,
105,99,95,109,97,99,104,105,110,101,61,109,54,56,107,45,97,108,116,111,115,10,9,9,59,59,10,9,97,109,50,57,107,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,97,50,57,107,45,110,111,110,101,10,9,9,111,115,61,45,98,115,100,10,9,9,59,59,10,9,
97,109,100,54,52,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,120,56,54,95,54,52,45,112,99,10,9,9,59,59,10,9,97,109,100,54,52,45,42,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,120,56,54,95,54,52,45,96,101,99,104,111,32,36,
98,97,115,105,99,95,109,97,99,104,105,110,101,32,124,32,115,101,100,32,39,115,47,94,91,94,45,93,42,45,47,47,39,96,10,9,9,59,59,10,9,97,109,100,97,104,108,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,53,56,48,45,97,109,100,97,104,108,10,
9,9,111,115,61,45,115,121,115,118,10,9,9,59,59,10,9,97,109,105,103,97,32,124,32,97,109,105,103,97,45,42,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,109,54,56,107,45,117,110,107,110,111,119,110,10,9,9,59,59,10,9,97,109,105,103,97,111,115,
32,124,32,97,109,105,103,97,100,111,115,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,109,54,56,107,45,117,110,107,110,111,119,110,10,9,9,111,115,61,45,97,109,105,103,97,111,115,10,9,9,59,59,10,9,97,109,105,103,97,117,110,105,120,32,124,
32,97,109,105,120,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,109,54,56,107,45,117,110,107,110,111,119,110,10,9,9,111,115,61,45,115,121,115,118,52,10,9,9,59,59,10,9,97,112,111,108,108,111,54,56,41,10,9,9,98,97,115,105,99,95,109,97,99,104,
105,110,101,61,109,54,56,107,45,97,112,111,108,108,111,10,9,9,111,115,61,45,115,121,115,118,10,9,9,59,59,10,9,97,112,111,108,108,111,54,56,98,115,100,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,109,54,56,107,45,97,112,111,108,108,111,10,
9,9,111,115,61,45,98,115,100,10,9,9,59,59,10,9,97,114,111,115,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,105,51,56,54,45,112,99,10,9,9,111,115,61,45,97,114,111,115,10,9,9,59,59,10,9,97,117,120,41,10,9,9,98,97,115,105,99,95,109,97,99,104,
105,110,101,61,109,54,56,107,45,97,112,112,108,101,10,9,9,111,115,61,45,97,117,120,10,9,9,59,59,10,9,98,97,108,97,110,99,101,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,110,115,51,50,107,45,115,101,113,117,101,110,116,10,9,9,111,115,61,
45,100,121,110,105,120,10,9,9,59,59,10,9,98,108,97,99,107,102,105,110,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,98,102,105,110,45,117,110,107,110,111,119,110,10,9,9,111,115,61,45,108,105,110,117,120,10,9,9,59,59,10,9,98,108,97,99,107,
102,105,110,45,42,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,98,102,105,110,45,96,101,99,104,111,32,36,98,97,115,105,99,95,109,97,99,104,105,110,101,32,124,32,115,101,100,32,39,115,47,94,91,94,45,93,42,45,47,47,39,96,10,9,9,111,115,61,
45,108,105,110,117,120,10,9,9,59,59,10,9,98,108,117,101,103,101,110,101,42,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,112,111,119,101,114,112,99,45,105,98,109,10,9,9,111,115,61,45,99,110,107,10,9,9,59,59,10,9,99,53,52,120,45,42,41,10,
9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,116,105,99,53,52,120,45,96,101,99,104,111,32,36,98,97,115,105,99,95,109,97,99,104,105,110,101,32,124,32,115,101,100,32,39,115,47,94,91,94,45,93,42,45,47,47,39,96,10,9,9,59,59,10,9,99,53,53,120,45,42,
41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,116,105,99,53,53,120,45,96,101,99,104,111,32,36,98,97,115,105,99,95,109,97,99,104,105,110,101,32,124,32,115,101,100,32,39,115,47,94,91,94,45,93,42,45,47,47,39,96,10,9,9,59,59,10,9,99,54,120,45,
42,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,116,105,99,54,120,45,96,101,99,104,111,32,36,98,97,115,105,99,95,109,97,99,104,105,110,101,32,124,32,115,101,100,32,39,115,47,94,91,94,45,93,42,45,47,47,39,96,10,9,9,59,59,10,9,99,57,48,41,
10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,99,57,48,45,99,114,97,121,10,9,9,111,115,61,45,117,110,105,99,111,115,10,9,9,59,59,10,9,99,101,103,99,99,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,97,114,109,45,117,110,107,110,
111,119,110,10,9,9,111,115,61,45,99,101,103,99,99,10,9,9,59,59,10,9,99,111,110,118,101,120,45,99,49,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,99,49,45,99,111,110,118,101,120,10,9,9,111,115,61,45,98,115,100,10,9,9,59,59,10,9,99,111,110,
118,101,120,45,99,50,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,99,50,45,99,111,110,118,101,120,10,9,9,111,115,61,45,98,115,100,10,9,9,59,59,10,9,99,111,110,118,101,120,45,99,51,50,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,
61,99,51,50,45,99,111,110,118,101,120,10,9,9,111,115,61,45,98,115,100,10,9,9,59,59,10,9,99,111,110,118,101,120,45,99,51,52,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,99,51,52,45,99,111,110,118,101,120,10,9,9,111,115,61,45,98,115,100,10,
9,9,59,59,10,9,99,111,110,118,101,120,45,99,51,56,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,99,51,56,45,99,111,110,118,101,120,10,9,9,111,115,61,45,98,115,100,10,9,9,59,59,10,9,99,114,97,121,32,124,32,106,57,48,41,10,9,9,98,97,115,105,
99,95,109,97,99,104,105,110,101,61,106,57,48,45,99,114,97,121,10,9,9,111,115,61,45,117,110,105,99,111,115,10,9,9,59,59,10,9,99,114,97,121,110,118,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,99,114,97,121,110,118,45,99,114,97,121,10,9,9,
111,115,61,45,117,110,105,99,111,115,109,112,10,9,9,59,59,10,9,99,114,49,54,32,124,32,99,114,49,54,45,42,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,99,114,49,54,45,117,110,107,110,111,119,110,10,9,9,111,115,61,45,101,108,102,10,9,9,59,
59,10,9,99,114,100,115,32,124,32,117,110,111,115,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,109,54,56,107,45,99,114,100,115,10,9,9,59,59,10,9,99,114,105,115,118,51,50,32,124,32,99,114,105,115,118,51,50,45,42,32,124,32,101,116,114,97,120,
102,115,42,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,99,114,105,115,118,51,50,45,97,120,105,115,10,9,9,59,59,10,9,99,114,105,115,32,124,32,99,114,105,115,45,42,32,124,32,101,116,114,97,120,42,41,10,9,9,98,97,115,105,99,95,109,97,99,104,
105,110,101,61,99,114,105,115,45,97,120,105,115,10,9,9,59,59,10,9,99,114,120,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,99,114,120,45,117,110,107,110,111,119,110,10,9,9,111,115,61,45,101,108,102,10,9,9,59,59,10,9,100,97,51,48,32,124,32,
100,97,51,48,45,42,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,109,54,56,107,45,100,97,51,48,10,9,9,59,59,10,9,100,101,99,115,116,97,116,105,111,110,32,124,32,100,101,99,115,116,97,116,105,111,110,45,51,49,48,48,32,124,32,112,109,97,120,
32,124,32,112,109,97,120,45,42,32,124,32,112,109,105,110,32,124,32,100,101,99,51,49,48,48,32,124,32,100,101,99,115,116,97,116,110,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,109,105,112,115,45,100,101,99,10,9,9,59,59,10,9,100,101,99,115,
121,115,116,101,109,49,48,42,32,124,32,100,101,99,49,48,42,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,112,100,112,49,48,45,100,101,99,10,9,9,111,115,61,45,116,111,112,115,49,48,10,9,9,59,59,10,9,100,101,99,115,121,115,116,101,109,50,48,
42,32,124,32,100,101,99,50,48,42,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,112,100,112,49,48,45,100,101,99,10,9,9,111,115,61,45,116,111,112,115,50,48,10,9,9,59,59,10,9,100,101,108,116,97,32,124,32,51,51,48,48,32,124,32,109,111,116,111,
114,111,108,97,45,51,51,48,48,32,124,32,109,111,116,111,114,111,108,97,45,100,101,108,116,97,32,92,10,9,32,32,32,32,32,32,124,32,51,51,48,48,45,109,111,116,111,114,111,108,97,32,124,32,100,101,108,116,97,45,109,111,116,111,114,111,108,97,41,10,9,9,98,
97,115,105,99,95,109,97,99,104,105,110,101,61,109,54,56,107,45,109,111,116,111,114,111,108,97,10,9,9,59,59,10,9,100,101,108,116,97,56,56,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,109,56,56,107,45,109,111,116,111,114,111,108,97,10,9,9,
111,115,61,45,115,121,115,118,51,10,9,9,59,59,10,9,100,105,99,111,115,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,105,54,56,54,45,112,99,10,9,9,111,115,61,45,100,105,99,111,115,10,9,9,59,59,10,9,100,106,103,112,112,41,10,9,9,98,97,115,
105,99,95,109,97,99,104,105,110,101,61,105,53,56,54,45,112,99,10,9,9,111,115,61,45,109,115,100,111,115,100,106,103,112,112,10,9,9,59,59,10,9,100,112,120,50,48,32,124,32,100,112,120,50,48,45,42,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,
114,115,54,48,48,48,45,98,117,108,108,10,9,9,111,115,61,45,98,111,115,120,10,9,9,59,59,10,9,100,112,120,50,42,32,124,32,100,112,120,50,42,45,98,117,108,108,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,109,54,56,107,45,98,117,108,108,10,
9,9,111,115,61,45,115,121,115,118,51,10,9,9,59,59,10,9,101,98,109,111,110,50,57,107,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,97,50,57,107,45,97,109,100,10,9,9,111,115,61,45,101,98,109,111,110,10,9,9,59,59,10,9,101,108,120,115,105,41,
10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,101,108,120,115,105,45,101,108,120,115,105,10,9,9,111,115,61,45,98,115,100,10,9,9,59,59,10,9,101,110,99,111,114,101,32,124,32,117,109,97,120,32,124,32,109,109,97,120,41,10,9,9,98,97,115,105,99,95,
109,97,99,104,105,110,101,61,110,115,51,50,107,45,101,110,99,111,114,101,10,9,9,59,59,10,9,101,115,49,56,48,48,32,124,32,79,83,69,54,56,107,32,124,32,111,115,101,54,56,107,32,124,32,111,115,101,32,124,32,79,83,69,41,10,9,9,98,97,115,105,99,95,109,97,
99,104,105,110,101,61,109,54,56,107,45,101,114,105,99,115,115,111,110,10,9,9,111,115,61,45,111,115,101,10,9,9,59,59,10,9,102,120,50,56,48,48,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,105,56,54,48,45,97,108,108,105,97,110,116,10,9,9,59,
59,10,9,103,101,110,105,120,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,110,115,51,50,107,45,110,115,10,9,9,59,59,10,9,103,109,105,99,114,111,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,116,114,111,110,45,103,109,105,99,
114,111,10,9,9,111,115,61,45,115,121,115,118,10,9,9,59,59,10,9,103,111,51,50,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,105,51,56,54,45,112,99,10,9,9,111,115,61,45,103,111,51,50,10,9,9,59,59,10,9,104,51,48,53,48,114,42,32,124,32,104,105,
117,120,42,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,104,112,112,97,49,46,49,45,104,105,116,97,99,104,105,10,9,9,111,115,61,45,104,105,117,120,119,101,50,10,9,9,59,59,10,9,104,56,51,48,48,104,109,115,41,10,9,9,98,97,115,105,99,95,109,
97,99,104,105,110,101,61,104,56,51,48,48,45,104,105,116,97,99,104,105,10,9,9,111,115,61,45,104,109,115,10,9,9,59,59,10,9,104,56,51,48,48,120,114,97,121,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,104,56,51,48,48,45,104,105,116,97,99,104,
105,10,9,9,111,115,61,45,120,114,97,121,10,9,9,59,59,10,9,104,56,53,48,48,104,109,115,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,104,56,53,48,48,45,104,105,116,97,99,104,105,10,9,9,111,115,61,45,104,109,115,10,9,9,59,59,10,9,104,97,114,
114,105,115,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,109,56,56,107,45,104,97,114,114,105,115,10,9,9,111,115,61,45,115,121,115,118,51,10,9,9,59,59,10,9,104,112,51,48,48,45,42,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,
109,54,56,107,45,104,112,10,9,9,59,59,10,9,104,112,51,48,48,98,115,100,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,109,54,56,107,45,104,112,10,9,9,111,115,61,45,98,115,100,10,9,9,59,59,10,9,104,112,51,48,48,104,112,117,120,41,10,9,9,98,
97,115,105,99,95,109,97,99,104,105,110,101,61,109,54,56,107,45,104,112,10,9,9,111,115,61,45,104,112,117,120,10,9,9,59,59,10,9,104,112,51,107,57,91,48,45,57,93,91,48,45,57,93,32,124,32,104,112,57,91,48,45,57,93,91,48,45,57,93,41,10,9,9,98,97,115,105,99,
95,109,97,99,104,105,110,101,61,104,112,112,97,49,46,48,45,104,112,10,9,9,59,59,10,9,104,112,57,107,50,91,48,45,57,93,91,48,45,57,93,32,124,32,104,112,57,107,51,49,91,48,45,57,93,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,109,54,56,48,
48,48,45,104,112,10,9,9,59,59,10,9,104,112,57,107,51,91,50,45,57,93,91,48,45,57,93,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,109,54,56,107,45,104,112,10,9,9,59,59,10,9,104,112,57,107,54,91,48,45,57,93,91,48,45,57,93,32,124,32,104,112,
54,91,48,45,57,93,91,48,45,57,93,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,104,112,112,97,49,46,48,45,104,112,10,9,9,59,59,10,9,104,112,57,107,55,91,48,45,55,57,93,91,48,45,57,93,32,124,32,104,112,55,91,48,45,55,57,93,91,48,45,57,93,
41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,104,112,112,97,49,46,49,45,104,112,10,9,9,59,59,10,9,104,112,57,107,55,56,91,48,45,57,93,32,124,32,104,112,55,56,91,48,45,57,93,41,10,9,9,35,32,70,73,88,77,69,58,32,114,101,97,108,108,121,32,
104,112,112,97,50,46,48,45,104,112,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,104,112,112,97,49,46,49,45,104,112,10,9,9,59,59,10,9,104,112,57,107,56,91,54,55,93,49,32,124,32,104,112,56,91,54,55,93,49,32,124,32,104,112,57,107,56,48,91,50,
52,93,32,124,32,104,112,56,48,91,50,52,93,32,124,32,104,112,57,107,56,91,55,56,93,57,32,124,32,104,112,56,91,55,56,93,57,32,124,32,104,112,57,107,56,57,51,32,124,32,104,112,56,57,51,41,10,9,9,35,32,70,73,88,77,69,58,32,114,101,97,108,108,121,32,104,112,
112,97,50,46,48,45,104,112,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,104,112,112,97,49,46,49,45,104,112,10,9,9,59,59,10,9,104,112,57,107,56,91,48,45,57,93,91,49,51,54,55,57,93,32,124,32,104,112,56,91,48,45,57,93,91,49,51,54,55,57,93,41,
10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,104,112,112,97,49,46,49,45,104,112,10,9,9,59,59,10,9,104,112,57,107,56,91,48,45,57,93,91,48,45,57,93,32,124,32,104,112,56,91,48,45,57,93,91,48,45,57,93,41,10,9,9,98,97,115,105,99,95,109,97,99,104,
105,110,101,61,104,112,112,97,49,46,48,45,104,112,10,9,9,59,59,10,9,104,112,112,97,45,110,101,120,116,41,10,9,9,111,115,61,45,110,101,120,116,115,116,101,112,51,10,9,9,59,59,10,9,104,112,112,97,111,115,102,41,10,9,9,98,97,115,105,99,95,109,97,99,104,
105,110,101,61,104,112,112,97,49,46,49,45,104,112,10,9,9,111,115,61,45,111,115,102,10,9,9,59,59,10,9,104,112,112,114,111,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,104,112,112,97,49,46,49,45,104,112,10,9,9,111,115,61,45,112,114,111,101,
108,102,10,9,9,59,59,10,9,105,51,55,48,45,105,98,109,42,32,124,32,105,98,109,42,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,105,51,55,48,45,105,98,109,10,9,9,59,59,10,9,105,42,56,54,118,51,50,41,10,9,9,98,97,115,105,99,95,109,97,99,104,
105,110,101,61,96,101,99,104,111,32,36,49,32,124,32,115,101,100,32,45,101,32,39,115,47,56,54,46,42,47,56,54,45,112,99,47,39,96,10,9,9,111,115,61,45,115,121,115,118,51,50,10,9,9,59,59,10,9,105,42,56,54,118,52,42,41,10,9,9,98,97,115,105,99,95,109,97,99,
104,105,110,101,61,96,101,99,104,111,32,36,49,32,124,32,115,101,100,32,45,101,32,39,115,47,56,54,46,42,47,56,54,45,112,99,47,39,96,10,9,9,111,115,61,45,115,121,115,118,52,10,9,9,59,59,10,9,105,42,56,54,118,41,10,9,9,98,97,115,105,99,95,109,97,99,104,
105,110,101,61,96,101,99,104,111,32,36,49,32,124,32,115,101,100,32,45,101,32,39,115,47,56,54,46,42,47,56,54,45,112,99,47,39,96,10,9,9,111,115,61,45,115,121,115,118,10,9,9,59,59,10,9,105,42,56,54,115,111,108,50,41,10,9,9,98,97,115,105,99,95,109,97,99,
104,105,110,101,61,96,101,99,104,111,32,36,49,32,124,32,115,101,100,32,45,101,32,39,115,47,56,54,46,42,47,56,54,45,112,99,47,39,96,10,9,9,111,115,61,45,115,111,108,97,114,105,115,50,10,9,9,59,59,10,9,105,51,56,54,109,97,99,104,41,10,9,9,98,97,115,105,
99,95,109,97,99,104,105,110,101,61,105,51,56,54,45,109,97,99,104,10,9,9,111,115,61,45,109,97,99,104,10,9,9,59,59,10,9,105,51,56,54,45,118,115,116,97,32,124,32,118,115,116,97,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,105,51,56,54,45,117,
110,107,110,111,119,110,10,9,9,111,115,61,45,118,115,116,97,10,9,9,59,59,10,9,105,114,105,115,32,124,32,105,114,105,115,52,100,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,109,105,112,115,45,115,103,105,10,9,9,99,97,115,101,32,36,111,115,
32,105,110,10,9,9,32,32,32,32,45,105,114,105,120,42,41,10,9,9,9,59,59,10,9,9,32,32,32,32,42,41,10,9,9,9,111,115,61,45,105,114,105,120,52,10,9,9,9,59,59,10,9,9,101,115,97,99,10,9,9,59,59,10,9,105,115,105,54,56,32,124,32,105,115,105,41,10,9,9,98,97,115,
105,99,95,109,97,99,104,105,110,101,61,109,54,56,107,45,105,115,105,10,9,9,111,115,61,45,115,121,115,118,10,9,9,59,59,10,9,109,54,56,107,110,111,109,109,117,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,109,54,56,107,45,117,110,107,110,111,
119,110,10,9,9,111,115,61,45,108,105,110,117,120,10,9,9,59,59,10,9,109,54,56,107,110,111,109,109,117,45,42,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,109,54,56,107,45,96,101,99,104,111,32,36,98,97,115,105,99,95,109,97,99,104,105,110,101,
32,124,32,115,101,100,32,39,115,47,94,91,94,45,93,42,45,47,47,39,96,10,9,9,111,115,61,45,108,105,110,117,120,10,9,9,59,59,10,9,109,56,56,107,45,111,109,114,111,110,42,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,109,56,56,107,45,111,109,
114,111,110,10,9,9,59,59,10,9,109,97,103,110,117,109,32,124,32,109,51,50,51,48,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,109,105,112,115,45,109,105,112,115,10,9,9,111,115,61,45,115,121,115,118,10,9,9,59,59,10,9,109,101,114,108,105,110,
41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,110,115,51,50,107,45,117,116,101,107,10,9,9,111,115,61,45,115,121,115,118,10,9,9,59,59,10,9,109,105,99,114,111,98,108,97,122,101,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,109,
105,99,114,111,98,108,97,122,101,45,120,105,108,105,110,120,10,9,9,59,59,10,9,109,105,110,103,119,51,50,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,105,51,56,54,45,112,99,10,9,9,111,115,61,45,109,105,110,103,119,51,50,10,9,9,59,59,10,9,
109,105,110,103,119,51,50,99,101,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,97,114,109,45,117,110,107,110,111,119,110,10,9,9,111,115,61,45,109,105,110,103,119,51,50,99,101,10,9,9,59,59,10,9,109,105,110,105,102,114,97,109,101,41,10,9,9,
98,97,115,105,99,95,109,97,99,104,105,110,101,61,109,54,56,48,48,48,45,99,111,110,118,101,114,103,101,110,116,10,9,9,59,59,10,9,42,109,105,110,116,32,124,32,45,109,105,110,116,91,48,45,57,93,42,32,124,32,42,77,105,78,84,32,124,32,42,77,105,78,84,91,48,
45,57,93,42,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,109,54,56,107,45,97,116,97,114,105,10,9,9,111,115,61,45,109,105,110,116,10,9,9,59,59,10,9,109,105,112,115,51,42,45,42,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,96,
101,99,104,111,32,36,98,97,115,105,99,95,109,97,99,104,105,110,101,32,124,32,115,101,100,32,45,101,32,39,115,47,109,105,112,115,51,47,109,105,112,115,54,52,47,39,96,10,9,9,59,59,10,9,109,105,112,115,51,42,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,
110,101,61,96,101,99,104,111,32,36,98,97,115,105,99,95,109,97,99,104,105,110,101,32,124,32,115,101,100,32,45,101,32,39,115,47,109,105,112,115,51,47,109,105,112,115,54,52,47,39,96,45,117,110,107,110,111,119,110,10,9,9,59,59,10,9,109,111,110,105,116,111,
114,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,109,54,56,107,45,114,111,109,54,56,107,10,9,9,111,115,61,45,99,111,102,102,10,9,9,59,59,10,9,109,111,114,112,104,111,115,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,112,111,
119,101,114,112,99,45,117,110,107,110,111,119,110,10,9,9,111,115,61,45,109,111,114,112,104,111,115,10,9,9,59,59,10,9,109,115,100,111,115,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,105,51,56,54,45,112,99,10,9,9,111,115,61,45,109,115,100,
111,115,10,9,9,59,59,10,9,109,115,49,45,42,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,96,101,99,104,111,32,36,98,97,115,105,99,95,109,97,99,104,105,110,101,32,124,32,115,101,100,32,45,101,32,39,115,47,109,115,49,45,47,109,116,45,47,39,
96,10,9,9,59,59,10,9,109,115,121,115,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,105,51,56,54,45,112,99,10,9,9,111,115,61,45,109,115,121,115,10,9,9,59,59,10,9,109,118,115,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,105,51,
55,48,45,105,98,109,10,9,9,111,115,61,45,109,118,115,10,9,9,59,59,10,9,110,97,99,108,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,108,101,51,50,45,117,110,107,110,111,119,110,10,9,9,111,115,61,45,110,97,99,108,10,9,9,59,59,10,9,110,99,114,
51,48,48,48,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,105,52,56,54,45,110,99,114,10,9,9,111,115,61,45,115,121,115,118,52,10,9,9,59,59,10,9,110,101,116,98,115,100,51,56,54,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,105,
51,56,54,45,117,110,107,110,111,119,110,10,9,9,111,115,61,45,110,101,116,98,115,100,10,9,9,59,59,10,9,110,101,116,119,105,110,100,101,114,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,97,114,109,118,52,108,45,114,101,98,101,108,10,9,9,111,
115,61,45,108,105,110,117,120,10,9,9,59,59,10,9,110,101,119,115,32,124,32,110,101,119,115,55,48,48,32,124,32,110,101,119,115,56,48,48,32,124,32,110,101,119,115,57,48,48,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,109,54,56,107,45,115,111,
110,121,10,9,9,111,115,61,45,110,101,119,115,111,115,10,9,9,59,59,10,9,110,101,119,115,49,48,48,48,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,109,54,56,48,51,48,45,115,111,110,121,10,9,9,111,115,61,45,110,101,119,115,111,115,10,9,9,59,
59,10,9,110,101,119,115,45,51,54,48,48,32,124,32,114,105,115,99,45,110,101,119,115,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,109,105,112,115,45,115,111,110,121,10,9,9,111,115,61,45,110,101,119,115,111,115,10,9,9,59,59,10,9,110,101,99,
118,55,48,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,118,55,48,45,110,101,99,10,9,9,111,115,61,45,115,121,115,118,10,9,9,59,59,10,9,110,101,120,116,32,124,32,109,42,45,110,101,120,116,32,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,
110,101,61,109,54,56,107,45,110,101,120,116,10,9,9,99,97,115,101,32,36,111,115,32,105,110,10,9,9,32,32,32,32,45,110,101,120,116,115,116,101,112,42,32,41,10,9,9,9,59,59,10,9,9,32,32,32,32,45,110,115,50,42,41,10,9,9,32,32,32,32,32,32,111,115,61,45,110,
101,120,116,115,116,101,112,50,10,9,9,9,59,59,10,9,9,32,32,32,32,42,41,10,9,9,32,32,32,32,32,32,111,115,61,45,110,101,120,116,115,116,101,112,51,10,9,9,9,59,59,10,9,9,101,115,97,99,10,9,9,59,59,10,9,110,104,51,48,48,48,41,10,9,9,98,97,115,105,99,95,109,
97,99,104,105,110,101,61,109,54,56,107,45,104,97,114,114,105,115,10,9,9,111,115,61,45,99,120,117,120,10,9,9,59,59,10,9,110,104,91,52,53,93,48,48,48,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,109,56,56,107,45,104,97,114,114,105,115,10,
9,9,111,115,61,45,99,120,117,120,10,9,9,59,59,10,9,110,105,110,100,121,57,54,48,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,105,57,54,48,45,105,110,116,101,108,10,9,9,111,115,61,45,110,105,110,100,121,10,9,9,59,59,10,9,109,111,110,57,54,
48,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,105,57,54,48,45,105,110,116,101,108,10,9,9,111,115,61,45,109,111,110,57,54,48,10,9,9,59,59,10,9,110,111,110,115,116,111,112,117,120,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,
61,109,105,112,115,45,99,111,109,112,97,113,10,9,9,111,115,61,45,110,111,110,115,116,111,112,117,120,10,9,9,59,59,10,9,110,112,49,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,110,112,49,45,103,111,117,108,100,10,9,9,59,59,10,9,110,101,111,
45,116,97,110,100,101,109,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,110,101,111,45,116,97,110,100,101,109,10,9,9,59,59,10,9,110,115,101,45,116,97,110,100,101,109,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,110,115,101,
45,116,97,110,100,101,109,10,9,9,59,59,10,9,110,115,114,45,116,97,110,100,101,109,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,110,115,114,45,116,97,110,100,101,109,10,9,9,59,59,10,9,111,112,53,48,110,45,42,32,124,32,111,112,54,48,99,45,
42,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,104,112,112,97,49,46,49,45,111,107,105,10,9,9,111,115,61,45,112,114,111,101,108,102,10,9,9,59,59,10,9,111,112,101,110,114,105,115,99,32,124,32,111,112,101,110,114,105,115,99,45,42,41,10,9,
9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,111,114,51,50,45,117,110,107,110,111,119,110,10,9,9,59,59,10,9,111,115,52,48,48,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,112,111,119,101,114,112,99,45,105,98,109,10,9,9,111,115,61,45,
111,115,52,48,48,10,9,9,59,59,10,9,79,83,69,54,56,48,48,48,32,124,32,111,115,101,54,56,48,48,48,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,109,54,56,48,48,48,45,101,114,105,99,115,115,111,110,10,9,9,111,115,61,45,111,115,101,10,9,9,59,
59,10,9,111,115,54,56,107,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,109,54,56,107,45,110,111,110,101,10,9,9,111,115,61,45,111,115,54,56,107,10,9,9,59,59,10,9,112,97,45,104,105,116,97,99,104,105,41,10,9,9,98,97,115,105,99,95,109,97,99,
104,105,110,101,61,104,112,112,97,49,46,49,45,104,105,116,97,99,104,105,10,9,9,111,115,61,45,104,105,117,120,119,101,50,10,9,9,59,59,10,9,112,97,114,97,103,111,110,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,105,56,54,48,45,105,110,116,
101,108,10,9,9,111,115,61,45,111,115,102,10,9,9,59,59,10,9,112,97,114,105,115,99,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,104,112,112,97,45,117,110,107,110,111,119,110,10,9,9,111,115,61,45,108,105,110,117,120,10,9,9,59,59,10,9,112,97,
114,105,115,99,45,42,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,104,112,112,97,45,96,101,99,104,111,32,36,98,97,115,105,99,95,109,97,99,104,105,110,101,32,124,32,115,101,100,32,39,115,47,94,91,94,45,93,42,45,47,47,39,96,10,9,9,111,115,
61,45,108,105,110,117,120,10,9,9,59,59,10,9,112,98,100,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,115,112,97,114,99,45,116,116,105,10,9,9,59,59,10,9,112,98,98,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,109,54,56,107,45,
116,116,105,10,9,9,59,59,10,9,112,99,53,51,50,32,124,32,112,99,53,51,50,45,42,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,110,115,51,50,107,45,112,99,53,51,50,10,9,9,59,59,10,9,112,99,57,56,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,
110,101,61,105,51,56,54,45,112,99,10,9,9,59,59,10,9,112,99,57,56,45,42,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,105,51,56,54,45,96,101,99,104,111,32,36,98,97,115,105,99,95,109,97,99,104,105,110,101,32,124,32,115,101,100,32,39,115,47,
94,91,94,45,93,42,45,47,47,39,96,10,9,9,59,59,10,9,112,101,110,116,105,117,109,32,124,32,112,53,32,124,32,107,53,32,124,32,107,54,32,124,32,110,101,120,103,101,110,32,124,32,118,105,97,99,51,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,
105,53,56,54,45,112,99,10,9,9,59,59,10,9,112,101,110,116,105,117,109,112,114,111,32,124,32,112,54,32,124,32,54,120,56,54,32,124,32,97,116,104,108,111,110,32,124,32,97,116,104,108,111,110,95,42,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,
105,54,56,54,45,112,99,10,9,9,59,59,10,9,112,101,110,116,105,117,109,105,105,32,124,32,112,101,110,116,105,117,109,50,32,124,32,112,101,110,116,105,117,109,105,105,105,32,124,32,112,101,110,116,105,117,109,51,41,10,9,9,98,97,115,105,99,95,109,97,99,104,
105,110,101,61,105,54,56,54,45,112,99,10,9,9,59,59,10,9,112,101,110,116,105,117,109,52,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,105,55,56,54,45,112,99,10,9,9,59,59,10,9,112,101,110,116,105,117,109,45,42,32,124,32,112,53,45,42,32,124,
32,107,53,45,42,32,124,32,107,54,45,42,32,124,32,110,101,120,103,101,110,45,42,32,124,32,118,105,97,99,51,45,42,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,105,53,56,54,45,96,101,99,104,111,32,36,98,97,115,105,99,95,109,97,99,104,105,110,
101,32,124,32,115,101,100,32,39,115,47,94,91,94,45,93,42,45,47,47,39,96,10,9,9,59,59,10,9,112,101,110,116,105,117,109,112,114,111,45,42,32,124,32,112,54,45,42,32,124,32,54,120,56,54,45,42,32,124,32,97,116,104,108,111,110,45,42,41,10,9,9,98,97,115,105,
99,95,109,97,99,104,105,110,101,61,105,54,56,54,45,96,101,99,104,111,32,36,98,97,115,105,99,95,109,97,99,104,105,110,101,32,124,32,115,101,100,32,39,115,47,94,91,94,45,93,42,45,47,47,39,96,10,9,9,59,59,10,9,112,101,110,116,105,117,109,105,105,45,42,32,
124,32,112,101,110,116,105,117,109,50,45,42,32,124,32,112,101,110,116,105,117,109,105,105,105,45,42,32,124,32,112,101,110,116,105,117,109,51,45,42,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,105,54,56,54,45,96,101,99,104,111,32,36,98,97,
115,105,99,95,109,97,99,104,105,110,101,32,124,32,115,101,100,32,39,115,47,94,91,94,45,93,42,45,47,47,39,96,10,9,9,59,59,10,9,112,101,110,116,105,117,109,52,45,42,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,105,55,56,54,45,96,101,99,104,
111,32,36,98,97,115,105,99,95,109,97,99,104,105,110,101,32,124,32,115,101,100,32,39,115,47,94,91,94,45,93,42,45,47,47,39,96,10,9,9,59,59,10,9,112,110,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,112,110,45,103,111,117,108,100,10,9,9,59,
59,10,9,112,111,119,101,114,41,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,112,111,119,101,114,45,105,98,109,10,9,9,59,59,10,9,112,112,99,32,124,32,112,112,99,98,101,41,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,112,111,119,101,114,112,
99,45,117,110,107,110,111,119,110,10,9,9,59,59,10,9,112,112,99,45,42,32,124,32,112,112,99,98,101,45,42,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,112,111,119,101,114,112,99,45,96,101,99,104,111,32,36,98,97,115,105,99,95,109,97,99,104,
105,110,101,32,124,32,115,101,100,32,39,115,47,94,91,94,45,93,42,45,47,47,39,96,10,9,9,59,59,10,9,112,112,99,108,101,32,124,32,112,111,119,101,114,112,99,108,105,116,116,108,101,32,124,32,112,112,99,45,108,101,32,124,32,112,111,119,101,114,112,99,45,
108,105,116,116,108,101,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,112,111,119,101,114,112,99,108,101,45,117,110,107,110,111,119,110,10,9,9,59,59,10,9,112,112,99,108,101,45,42,32,124,32,112,111,119,101,114,112,99,108,105,116,116,108,101,
45,42,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,112,111,119,101,114,112,99,108,101,45,96,101,99,104,111,32,36,98,97,115,105,99,95,109,97,99,104,105,110,101,32,124,32,115,101,100,32,39,115,47,94,91,94,45,93,42,45,47,47,39,96,10,9,9,59,
59,10,9,112,112,99,54,52,41,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,112,111,119,101,114,112,99,54,52,45,117,110,107,110,111,119,110,10,9,9,59,59,10,9,112,112,99,54,52,45,42,41,32,98,97,115,105,99,95,109,97,99,104,105,110,101,61,112,111,119,
101,114,112,99,54,52,45,96,101,99,104,111,32,36,98,97,115,105,99,95,109,97,99,104,105,110,101,32,124,32,115,101,100,32,39,115,47,94,91,94,45,93,42,45,47,47,39,96,10,9,9,59,59,10,9,112,112,99,54,52,108,101,32,124,32,112,111,119,101,114,112,99,54,52,108,
105,116,116,108,101,32,124,32,112,112,99,54,52,45,108,101,32,124,32,112,111,119,101,114,112,99,54,52,45,108,105,116,116,108,101,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,112,111,119,101,114,112,99,54,52,108,101,45,117,110,107,110,111,
119,110,10,9,9,59,59,10,9,112,112,99,54,52,108,101,45,42,32,124,32,112,111,119,101,114,112,99,54,52,108,105,116,116,108,101,45,42,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,112,111,119,101,114,112,99,54,52,108,101,45,96,101,99,104,111,
32,36,98,97,115,105,99,95,109,97,99,104,105,110,101,32,124,32,115,101,100,32,39,115,47,94,91,94,45,93,42,45,47,47,39,96,10,9,9,59,59,10,9,112,115,50,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,105,51,56,54,45,105,98,109,10,9,9,59,59,10,
9,112,119,51,50,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,105,53,56,54,45,117,110,107,110,111,119,110,10,9,9,111,115,61,45,112,119,51,50,10,9,9,59,59,10,9,114,100,111,115,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,105,
51,56,54,45,112,99,10,9,9,111,115,61,45,114,100,111,115,10,9,9,59,59,10,9,114,111,109,54,56,107,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,109,54,56,107,45,114,111,109,54,56,107,10,9,9,111,115,61,45,99,111,102,102,10,9,9,59,59,10,9,114,
109,91,52,54,93,48,48,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,109,105,112,115,45,115,105,101,109,101,110,115,10,9,9,59,59,10,9,114,116,112,99,32,124,32,114,116,112,99,45,42,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,
114,111,109,112,45,105,98,109,10,9,9,59,59,10,9,115,51,57,48,32,124,32,115,51,57,48,45,42,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,115,51,57,48,45,105,98,109,10,9,9,59,59,10,9,115,51,57,48,120,32,124,32,115,51,57,48,120,45,42,41,10,
9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,115,51,57,48,120,45,105,98,109,10,9,9,59,59,10,9,115,97,50,57,50,48,48,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,97,50,57,107,45,97,109,100,10,9,9,111,115,61,45,117,100,105,10,9,9,
59,59,10,9,115,98,49,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,109,105,112,115,105,115,97,54,52,115,98,49,45,117,110,107,110,111,119,110,10,9,9,59,59,10,9,115,98,49,101,108,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,109,
105,112,115,105,115,97,54,52,115,98,49,101,108,45,117,110,107,110,111,119,110,10,9,9,59,59,10,9,115,100,101,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,109,105,112,115,105,115,97,51,50,45,115,100,101,10,9,9,111,115,61,45,101,108,102,10,
9,9,59,59,10,9,115,101,105,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,109,105,112,115,45,115,101,105,10,9,9,111,115,61,45,115,101,105,117,120,10,9,9,59,59,10,9,115,101,113,117,101,110,116,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,
110,101,61,105,51,56,54,45,115,101,113,117,101,110,116,10,9,9,59,59,10,9,115,104,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,115,104,45,104,105,116,97,99,104,105,10,9,9,111,115,61,45,104,109,115,10,9,9,59,59,10,9,115,104,53,101,108,41,
10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,115,104,53,108,101,45,117,110,107,110,111,119,110,10,9,9,59,59,10,9,115,104,54,52,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,115,104,54,52,45,117,110,107,110,111,119,110,10,9,9,59,
59,10,9,115,112,97,114,99,108,105,116,101,45,119,114,115,32,124,32,115,105,109,115,111,45,119,114,115,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,115,112,97,114,99,108,105,116,101,45,119,114,115,10,9,9,111,115,61,45,118,120,119,111,114,
107,115,10,9,9,59,59,10,9,115,112,115,55,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,109,54,56,107,45,98,117,108,108,10,9,9,111,115,61,45,115,121,115,118,50,10,9,9,59,59,10,9,115,112,117,114,41,10,9,9,98,97,115,105,99,95,109,97,99,104,
105,110,101,61,115,112,117,114,45,117,110,107,110,111,119,110,10,9,9,59,59,10,9,115,116,50,48,48,48,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,109,54,56,107,45,116,97,110,100,101,109,10,9,9,59,59,10,9,115,116,114,97,116,117,115,41,10,
9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,105,56,54,48,45,115,116,114,97,116,117,115,10,9,9,111,115,61,45,115,121,115,118,52,10,9,9,59,59,10,9,115,116,114,111,110,103,97,114,109,45,42,32,124,32,116,104,117,109,98,45,42,41,10,9,9,98,97,115,
105,99,95,109,97,99,104,105,110,101,61,97,114,109,45,96,101,99,104,111,32,36,98,97,115,105,99,95,109,97,99,104,105,110,101,32,124,32,115,101,100,32,39,115,47,94,91,94,45,93,42,45,47,47,39,96,10,9,9,59,59,10,9,115,117,110,50,41,10,9,9,98,97,115,105,99,
95,109,97,99,104,105,110,101,61,109,54,56,48,48,48,45,115,117,110,10,9,9,59,59,10,9,115,117,110,50,111,115,51,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,109,54,56,48,48,48,45,115,117,110,10,9,9,111,115,61,45,115,117,110,111,115,51,10,
9,9,59,59,10,9,115,117,110,50,111,115,52,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,109,54,56,48,48,48,45,115,117,110,10,9,9,111,115,61,45,115,117,110,111,115,52,10,9,9,59,59,10,9,115,117,110,51,111,115,51,41,10,9,9,98,97,115,105,99,95,
109,97,99,104,105,110,101,61,109,54,56,107,45,115,117,110,10,9,9,111,115,61,45,115,117,110,111,115,51,10,9,9,59,59,10,9,115,117,110,51,111,115,52,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,109,54,56,107,45,115,117,110,10,9,9,111,115,61,
45,115,117,110,111,115,52,10,9,9,59,59,10,9,115,117,110,52,111,115,51,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,115,112,97,114,99,45,115,117,110,10,9,9,111,115,61,45,115,117,110,111,115,51,10,9,9,59,59,10,9,115,117,110,52,111,115,52,
41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,115,112,97,114,99,45,115,117,110,10,9,9,111,115,61,45,115,117,110,111,115,52,10,9,9,59,59,10,9,115,117,110,52,115,111,108,50,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,115,112,
97,114,99,45,115,117,110,10,9,9,111,115,61,45,115,111,108,97,114,105,115,50,10,9,9,59,59,10,9,115,117,110,51,32,124,32,115,117,110,51,45,42,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,109,54,56,107,45,115,117,110,10,9,9,59,59,10,9,115,
117,110,52,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,115,112,97,114,99,45,115,117,110,10,9,9,59,59,10,9,115,117,110,51,56,54,32,124,32,115,117,110,51,56,54,105,32,124,32,114,111,97,100,114,117,110,110,101,114,41,10,9,9,98,97,115,105,
99,95,109,97,99,104,105,110,101,61,105,51,56,54,45,115,117,110,10,9,9,59,59,10,9,115,118,49,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,115,118,49,45,99,114,97,121,10,9,9,111,115,61,45,117,110,105,99,111,115,10,9,9,59,59,10,9,115,121,109,
109,101,116,114,121,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,105,51,56,54,45,115,101,113,117,101,110,116,10,9,9,111,115,61,45,100,121,110,105,120,10,9,9,59,59,10,9,116,51,101,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,
97,108,112,104,97,101,118,53,45,99,114,97,121,10,9,9,111,115,61,45,117,110,105,99,111,115,10,9,9,59,59,10,9,116,57,48,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,116,57,48,45,99,114,97,121,10,9,9,111,115,61,45,117,110,105,99,111,115,10,
9,9,59,59,10,9,116,105,108,101,42,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,36,98,97,115,105,99,95,109,97,99,104,105,110,101,45,117,110,107,110,111,119,110,10,9,9,111,115,61,45,108,105,110,117,120,45,103,110,117,10,9,9,59,59,10,9,116,
120,51,57,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,109,105,112,115,116,120,51,57,45,117,110,107,110,111,119,110,10,9,9,59,59,10,9,116,120,51,57,101,108,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,109,105,112,115,116,120,
51,57,101,108,45,117,110,107,110,111,119,110,10,9,9,59,59,10,9,116,111,97,100,49,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,112,100,112,49,48,45,120,107,108,10,9,9,111,115,61,45,116,111,112,115,50,48,10,9,9,59,59,10,9,116,111,119,101,
114,32,124,32,116,111,119,101,114,45,51,50,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,109,54,56,107,45,110,99,114,10,9,9,59,59,10,9,116,112,102,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,115,51,57,48,120,45,105,98,109,
10,9,9,111,115,61,45,116,112,102,10,9,9,59,59,10,9,117,100,105,50,57,107,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,97,50,57,107,45,97,109,100,10,9,9,111,115,61,45,117,100,105,10,9,9,59,59,10,9,117,108,116,114,97,51,41,10,9,9,98,97,115,
105,99,95,109,97,99,104,105,110,101,61,97,50,57,107,45,110,121,117,10,9,9,111,115,61,45,115,121,109,49,10,9,9,59,59,10,9,118,56,49,48,32,124,32,110,101,99,118,56,49,48,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,118,56,49,48,45,110,101,
99,10,9,9,111,115,61,45,110,111,110,101,10,9,9,59,59,10,9,118,97,120,118,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,118,97,120,45,100,101,99,10,9,9,111,115,61,45,115,121,115,118,10,9,9,59,59,10,9,118,109,115,41,10,9,9,98,97,115,105,99,
95,109,97,99,104,105,110,101,61,118,97,120,45,100,101,99,10,9,9,111,115,61,45,118,109,115,10,9,9,59,59,10,9,118,112,112,42,124,118,120,124,118,120,45,42,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,102,51,48,49,45,102,117,106,105,116,115,
117,10,9,9,59,59,10,9,118,120,119,111,114,107,115,57,54,48,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,105,57,54,48,45,119,114,115,10,9,9,111,115,61,45,118,120,119,111,114,107,115,10,9,9,59,59,10,9,118,120,119,111,114,107,115,54,56,41,
10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,109,54,56,107,45,119,114,115,10,9,9,111,115,61,45,118,120,119,111,114,107,115,10,9,9,59,59,10,9,118,120,119,111,114,107,115,50,57,107,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,97,
50,57,107,45,119,114,115,10,9,9,111,115,61,45,118,120,119,111,114,107,115,10,9,9,59,59,10,9,119,54,53,42,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,119,54,53,45,119,100,99,10,9,9,111,115,61,45,110,111,110,101,10,9,9,59,59,10,9,119,56,
57,107,45,42,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,104,112,112,97,49,46,49,45,119,105,110,98,111,110,100,10,9,9,111,115,61,45,112,114,111,101,108,102,10,9,9,59,59,10,9,120,98,111,120,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,
110,101,61,105,54,56,54,45,112,99,10,9,9,111,115,61,45,109,105,110,103,119,51,50,10,9,9,59,59,10,9,120,112,115,32,124,32,120,112,115,49,48,48,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,120,112,115,49,48,48,45,104,111,110,101,121,119,101,
108,108,10,9,9,59,59,10,9,120,115,99,97,108,101,45,42,32,124,32,120,115,99,97,108,101,101,91,98,108,93,45,42,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,96,101,99,104,111,32,36,98,97,115,105,99,95,109,97,99,104,105,110,101,32,124,32,115,
101,100,32,39,115,47,94,120,115,99,97,108,101,47,97,114,109,47,39,96,10,9,9,59,59,10,9,121,109,112,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,121,109,112,45,99,114,97,121,10,9,9,111,115,61,45,117,110,105,99,111,115,10,9,9,59,59,10,9,122,
56,107,45,42,45,99,111,102,102,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,122,56,107,45,117,110,107,110,111,119,110,10,9,9,111,115,61,45,115,105,109,10,9,9,59,59,10,9,122,56,48,45,42,45,99,111,102,102,41,10,9,9,98,97,115,105,99,95,109,
97,99,104,105,110,101,61,122,56,48,45,117,110,107,110,111,119,110,10,9,9,111,115,61,45,115,105,109,10,9,9,59,59,10,9,110,111,110,101,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,110,111,110,101,45,110,111,110,101,10,9,9,111,115,61,45,110,
111,110,101,10,9,9,59,59,10,10,35,32,72,101,114,101,32,119,101,32,104,97,110,100,108,101,32,116,104,101,32,100,101,102,97,117,108,116,32,109,97,110,117,102,97,99,116,117,114,101,114,32,111,102,32,99,101,114,116,97,105,110,32,67,80,85,32,116,121,112,101,
115,46,32,32,73,116,32,105,115,32,105,110,10,35,32,115,111,109,101,32,99,97,115,101,115,32,116,104,101,32,111,110,108,121,32,109,97,110,117,102,97,99,116,117,114,101,114,44,32,105,110,32,111,116,104,101,114,115,44,32,105,116,32,105,115,32,116,104,101,
32,109,111,115,116,32,112,111,112,117,108,97,114,46,10,9,119,56,57,107,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,104,112,112,97,49,46,49,45,119,105,110,98,111,110,100,10,9,9,59,59,10,9,111,112,53,48,110,41,10,9,9,98,97,115,105,99,95,
109,97,99,104,105,110,101,61,104,112,112,97,49,46,49,45,111,107,105,10,9,9,59,59,10,9,111,112,54,48,99,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,104,112,112,97,49,46,49,45,111,107,105,10,9,9,59,59,10,9,114,111,109,112,41,10,9,9,98,97,
115,105,99,95,109,97,99,104,105,110,101,61,114,111,109,112,45,105,98,109,10,9,9,59,59,10,9,109,109,105,120,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,109,109,105,120,45,107,110,117,116,104,10,9,9,59,59,10,9,114,115,54,48,48,48,41,10,9,
9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,114,115,54,48,48,48,45,105,98,109,10,9,9,59,59,10,9,118,97,120,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,118,97,120,45,100,101,99,10,9,9,59,59,10,9,112,100,112,49,48,41,10,9,9,35,32,
116,104,101,114,101,32,97,114,101,32,109,97,110,121,32,99,108,111,110,101,115,44,32,115,111,32,68,69,67,32,105,115,32,110,111,116,32,97,32,115,97,102,101,32,98,101,116,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,112,100,112,49,48,45,117,110,
107,110,111,119,110,10,9,9,59,59,10,9,112,100,112,49,49,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,112,100,112,49,49,45,100,101,99,10,9,9,59,59,10,9,119,101,51,50,107,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,119,101,
51,50,107,45,97,116,116,10,9,9,59,59,10,9,115,104,91,49,50,51,52,93,32,124,32,115,104,91,50,52,93,97,32,124,32,115,104,91,50,52,93,97,101,98,32,124,32,115,104,91,51,52,93,101,98,32,124,32,115,104,91,49,50,51,52,93,108,101,32,124,32,115,104,91,50,51,93,
101,108,101,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,115,104,45,117,110,107,110,111,119,110,10,9,9,59,59,10,9,115,112,97,114,99,32,124,32,115,112,97,114,99,118,56,32,124,32,115,112,97,114,99,118,57,32,124,32,115,112,97,114,99,118,57,
98,32,124,32,115,112,97,114,99,118,57,118,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,115,112,97,114,99,45,115,117,110,10,9,9,59,59,10,9,99,121,100,114,97,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,99,121,100,114,97,45,
99,121,100,114,111,109,101,10,9,9,59,59,10,9,111,114,105,111,110,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,111,114,105,111,110,45,104,105,103,104,108,101,118,101,108,10,9,9,59,59,10,9,111,114,105,111,110,49,48,53,41,10,9,9,98,97,115,
105,99,95,109,97,99,104,105,110,101,61,99,108,105,112,112,101,114,45,104,105,103,104,108,101,118,101,108,10,9,9,59,59,10,9,109,97,99,32,124,32,109,112,119,32,124,32,109,97,99,45,109,112,119,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,109,
54,56,107,45,97,112,112,108,101,10,9,9,59,59,10,9,112,109,97,99,32,124,32,112,109,97,99,45,109,112,119,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,112,111,119,101,114,112,99,45,97,112,112,108,101,10,9,9,59,59,10,9,42,45,117,110,107,110,
111,119,110,41,10,9,9,35,32,77,97,107,101,32,115,117,114,101,32,116,111,32,109,97,116,99,104,32,97,110,32,97,108,114,101,97,100,121,45,99,97,110,111,110,105,99,97,108,105,122,101,100,32,109,97,99,104,105,110,101,32,110,97,109,101,46,10,9,9,59,59,10,9,
42,41,10,9,9,101,99,104,111,32,73,110,118,97,108,105,100,32,99,111,110,102,105,103,117,114,97,116,105,111,110,32,92,96,36,49,92,39,58,32,109,97,99,104,105,110,101,32,92,96,36,98,97,115,105,99,95,109,97,99,104,105,110,101,92,39,32,110,111,116,32,114,101,
99,111,103,110,105,122,101,100,32,49,62,38,50,10,9,9,101,120,105,116,32,49,10,9,9,59,59,10,101,115,97,99,10,10,35,32,72,101,114,101,32,119,101,32,99,97,110,111,110,105,99,97,108,105,122,101,32,99,101,114,116,97,105,110,32,97,108,105,97,115,101,115,32,
102,111,114,32,109,97,110,117,102,97,99,116,117,114,101,114,115,46,10,99,97,115,101,32,36,98,97,115,105,99,95,109,97,99,104,105,110,101,32,105,110,10,9,42,45,100,105,103,105,116,97,108,42,41,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,96,
101,99,104,111,32,36,98,97,115,105,99,95,109,97,99,104,105,110,101,32,124,32,115,101,100,32,39,115,47,100,105,103,105,116,97,108,46,42,47,100,101,99,47,39,96,10,9,9,59,59,10,9,42,45,99,111,109,109,111,100,111,114,101,42,41,10,9,9,98,97,115,105,99,95,
109,97,99,104,105,110,101,61,96,101,99,104,111,32,36,98,97,115,105,99,95,109,97,99,104,105,110,101,32,124,32,115,101,100,32,39,115,47,99,111,109,109,111,100,111,114,101,46,42,47,99,98,109,47,39,96,10,9,9,59,59,10,9,42,41,10,9,9,59,59,10,101,115,97,99,
10,10,35,32,68,101,99,111,100,101,32,109,97,110,117,102,97,99,116,117,114,101,114,45,115,112,101,99,105,102,105,99,32,97,108,105,97,115,101,115,32,102,111,114,32,99,101,114,116,97,105,110,32,111,112,101,114,97,116,105,110,103,32,115,121,115,116,101,109,
115,46,10,10,105,102,32,91,32,120,34,36,111,115,34,32,33,61,32,120,34,34,32,93,10,116,104,101,110,10,99,97,115,101,32,36,111,115,32,105,110,10,9,35,32,70,105,114,115,116,32,109,97,116,99,104,32,115,111,109,101,32,115,121,115,116,101,109,32,116,121,112,
101,32,97,108,105,97,115,101,115,10,9,35,32,116,104,97,116,32,109,105,103,104,116,32,103,101,116,32,99,111,110,102,117,115,101,100,32,119,105,116,104,32,118,97,108,105,100,32,115,121,115,116,101,109,32,116,121,112,101,115,46,10,9,35,32,45,115,111,108,
97,114,105,115,42,32,105,115,32,97,32,98,97,115,105,99,32,115,121,115,116,101,109,32,116,121,112,101,44,32,119,105,116,104,32,116,104,105,115,32,111,110,101,32,101,120,99,101,112,116,105,111,110,46,10,9,45,97,117,114,111,114,97,117,120,41,10,9,9,111,
115,61,45,97,117,114,111,114,97,117,120,10,9,9,59,59,10,9,45,115,111,108,97,114,105,115,49,32,124,32,45,115,111,108,97,114,105,115,49,46,42,41,10,9,9,111,115,61,96,101,99,104,111,32,36,111,115,32,124,32,115,101,100,32,45,101,32,39,115,124,115,111,108,
97,114,105,115,49,124,115,117,110,111,115,52,124,39,96,10,9,9,59,59,10,9,45,115,111,108,97,114,105,115,41,10,9,9,111,115,61,45,115,111,108,97,114,105,115,50,10,9,9,59,59,10,9,45,115,118,114,52,42,41,10,9,9,111,115,61,45,115,121,115,118,52,10,9,9,59,59,
10,9,45,117,110,105,120,119,97,114,101,42,41,10,9,9,111,115,61,45,115,121,115,118,52,46,50,117,119,10,9,9,59,59,10,9,45,103,110,117,47,108,105,110,117,120,42,41,10,9,9,111,115,61,96,101,99,104,111,32,36,111,115,32,124,32,115,101,100,32,45,101,32,39,115,
124,103,110,117,47,108,105,110,117,120,124,108,105,110,117,120,45,103,110,117,124,39,96,10,9,9,59,59,10,9,35,32,70,105,114,115,116,32,97,99,99,101,112,116,32,116,104,101,32,98,97,115,105,99,32,115,121,115,116,101,109,32,116,121,112,101,115,46,10,9,35,
32,84,104,101,32,112,111,114,116,97,98,108,101,32,115,121,115,116,101,109,115,32,99,111,109,101,115,32,102,105,114,115,116,46,10,9,35,32,69,97,99,104,32,97,108,116,101,114,110,97,116,105,118,101,32,77,85,83,84,32,69,78,68,32,73,78,32,65,32,42,44,32,116,
111,32,109,97,116,99,104,32,97,32,118,101,114,115,105,111,110,32,110,117,109,98,101,114,46,10,9,35,32,45,115,121,115,118,42,32,105,115,32,110,111,116,32,104,101,114,101,32,98,101,99,97,117,115,101,32,105,116,32,99,111,109,101,115,32,108,97,116,101,114,
44,32,97,102,116,101,114,32,115,121,115,118,114,52,46,10,9,45,103,110,117,42,32,124,32,45,98,115,100,42,32,124,32,45,109,97,99,104,42,32,124,32,45,109,105,110,105,120,42,32,124,32,45,103,101,110,105,120,42,32,124,32,45,117,108,116,114,105,120,42,32,124,
32,45,105,114,105,120,42,32,92,10,9,32,32,32,32,32,32,124,32,45,42,118,109,115,42,32,124,32,45,115,99,111,42,32,124,32,45,101,115,105,120,42,32,124,32,45,105,115,99,42,32,124,32,45,97,105,120,42,32,124,32,45,99,110,107,42,32,124,32,45,115,117,110,111,
115,32,124,32,45,115,117,110,111,115,91,51,52,93,42,92,10,9,32,32,32,32,32,32,124,32,45,104,112,117,120,42,32,124,32,45,117,110,111,115,42,32,124,32,45,111,115,102,42,32,124,32,45,108,117,110,97,42,32,124,32,45,100,103,117,120,42,32,124,32,45,97,117,
114,111,114,97,117,120,42,32,124,32,45,115,111,108,97,114,105,115,42,32,92,10,9,32,32,32,32,32,32,124,32,45,115,121,109,42,32,124,32,45,107,111,112,101,110,115,111,108,97,114,105,115,42,32,92,10,9,32,32,32,32,32,32,124,32,45,97,109,105,103,97,111,115,
42,32,124,32,45,97,109,105,103,97,100,111,115,42,32,124,32,45,109,115,100,111,115,42,32,124,32,45,110,101,119,115,111,115,42,32,124,32,45,117,110,105,99,111,115,42,32,124,32,45,97,111,102,42,32,92,10,9,32,32,32,32,32,32,124,32,45,97,111,115,42,32,124,
32,45,97,114,111,115,42,32,92,10,9,32,32,32,32,32,32,124,32,45,110,105,110,100,121,42,32,124,32,45,118,120,115,105,109,42,32,124,32,45,118,120,119,111,114,107,115,42,32,124,32,45,101,98,109,111,110,42,32,124,32,45,104,109,115,42,32,124,32,45,109,118,
115,42,32,92,10,9,32,32,32,32,32,32,124,32,45,99,108,105,120,42,32,124,32,45,114,105,115,99,111,115,42,32,124,32,45,117,110,105,112,108,117,115,42,32,124,32,45,105,114,105,115,42,32,124,32,45,114,116,117,42,32,124,32,45,120,101,110,105,120,42,32,92,10,
9,32,32,32,32,32,32,124,32,45,104,105,117,120,42,32,124,32,45,51,56,54,98,115,100,42,32,124,32,45,107,110,101,116,98,115,100,42,32,124,32,45,109,105,114,98,115,100,42,32,124,32,45,110,101,116,98,115,100,42,32,92,10,9,32,32,32,32,32,32,124,32,45,111,112,
101,110,98,115,100,42,32,124,32,45,115,111,108,105,100,98,115,100,42,32,92,10,9,32,32,32,32,32,32,124,32,45,101,107,107,111,98,115,100,42,32,124,32,45,107,102,114,101,101,98,115,100,42,32,124,32,45,102,114,101,101,98,115,100,42,32,124,32,45,114,105,115,
99,105,120,42,32,124,32,45,108,121,110,120,111,115,42,32,92,10,9,32,32,32,32,32,32,124,32,45,98,111,115,120,42,32,124,32,45,110,101,120,116,115,116,101,112,42,32,124,32,45,99,120,117,120,42,32,124,32,45,97,111,117,116,42,32,124,32,45,101,108,102,42,32,
124,32,45,111,97,98,105,42,32,92,10,9,32,32,32,32,32,32,124,32,45,112,116,120,42,32,124,32,45,99,111,102,102,42,32,124,32,45,101,99,111,102,102,42,32,124,32,45,119,105,110,110,116,42,32,124,32,45,100,111,109,97,105,110,42,32,124,32,45,118,115,116,97,
42,32,92,10,9,32,32,32,32,32,32,124,32,45,117,100,105,42,32,124,32,45,101,97,98,105,42,32,124,32,45,108,105,116,101,115,42,32,124,32,45,105,101,101,101,42,32,124,32,45,103,111,51,50,42,32,124,32,45,97,117,120,42,32,92,10,9,32,32,32,32,32,32,124,32,45,
99,104,111,114,117,115,111,115,42,32,124,32,45,99,104,111,114,117,115,114,100,98,42,32,124,32,45,99,101,103,99,99,42,32,92,10,9,32,32,32,32,32,32,124,32,45,99,121,103,119,105,110,42,32,124,32,45,109,115,121,115,42,32,124,32,45,112,101,42,32,124,32,45,
112,115,111,115,42,32,124,32,45,109,111,115,115,42,32,124,32,45,112,114,111,101,108,102,42,32,124,32,45,114,116,101,109,115,42,32,92,10,9,32,32,32,32,32,32,124,32,45,109,105,110,103,119,51,50,42,32,124,32,45,108,105,110,117,120,45,103,110,117,42,32,124,
32,45,108,105,110,117,120,45,97,110,100,114,111,105,100,42,32,92,10,9,32,32,32,32,32,32,124,32,45,108,105,110,117,120,45,110,101,119,108,105,98,42,32,124,32,45,108,105,110,117,120,45,117,99,108,105,98,99,42,32,92,10,9,32,32,32,32,32,32,124,32,45,117,
120,112,118,42,32,124,32,45,98,101,111,115,42,32,124,32,45,109,112,101,105,120,42,32,124,32,45,117,100,107,42,32,92,10,9,32,32,32,32,32,32,124,32,45,105,110,116,101,114,105,120,42,32,124,32,45,117,119,105,110,42,32,124,32,45,109,107,115,42,32,124,32,
45,114,104,97,112,115,111,100,121,42,32,124,32,45,100,97,114,119,105,110,42,32,124,32,45,111,112,101,110,101,100,42,32,92,10,9,32,32,32,32,32,32,124,32,45,111,112,101,110,115,116,101,112,42,32,124,32,45,111,115,107,105,116,42,32,124,32,45,99,111,110,
105,120,42,32,124,32,45,112,119,51,50,42,32,124,32,45,110,111,110,115,116,111,112,117,120,42,32,92,10,9,32,32,32,32,32,32,124,32,45,115,116,111,114,109,45,99,104,97,111,115,42,32,124,32,45,116,111,112,115,49,48,42,32,124,32,45,116,101,110,101,120,42,
32,124,32,45,116,111,112,115,50,48,42,32,124,32,45,105,116,115,42,32,92,10,9,32,32,32,32,32,32,124,32,45,111,115,50,42,32,124,32,45,118,111,115,42,32,124,32,45,112,97,108,109,111,115,42,32,124,32,45,117,99,108,105,110,117,120,42,32,124,32,45,110,117,
99,108,101,117,115,42,32,92,10,9,32,32,32,32,32,32,124,32,45,109,111,114,112,104,111,115,42,32,124,32,45,115,117,112,101,114,117,120,42,32,124,32,45,114,116,109,107,42,32,124,32,45,114,116,109,107,45,110,111,118,97,42,32,124,32,45,119,105,110,100,105,
115,115,42,32,92,10,9,32,32,32,32,32,32,124,32,45,112,111,119,101,114,109,97,120,42,32,124,32,45,100,110,105,120,42,32,124,32,45,110,120,54,32,124,32,45,110,120,55,32,124,32,45,115,101,105,42,32,124,32,45,100,114,97,103,111,110,102,108,121,42,32,92,10,
9,32,32,32,32,32,32,124,32,45,115,107,121,111,115,42,32,124,32,45,104,97,105,107,117,42,32,124,32,45,114,100,111,115,42,32,124,32,45,116,111,112,112,101,114,115,42,32,124,32,45,100,114,111,112,115,42,32,124,32,45,101,115,42,41,10,9,35,32,82,101,109,101,
109,98,101,114,44,32,101,97,99,104,32,97,108,116,101,114,110,97,116,105,118,101,32,77,85,83,84,32,69,78,68,32,73,78,32,42,44,32,116,111,32,109,97,116,99,104,32,97,32,118,101,114,115,105,111,110,32,110,117,109,98,101,114,46,10,9,9,59,59,10,9,45,113,110,
120,42,41,10,9,9,99,97,115,101,32,36,98,97,115,105,99,95,109,97,99,104,105,110,101,32,105,110,10,9,9,32,32,32,32,120,56,54,45,42,32,124,32,105,42,56,54,45,42,41,10,9,9,9,59,59,10,9,9,32,32,32,32,42,41,10,9,9,9,111,115,61,45,110,116,111,36,111,115,10,
9,9,9,59,59,10,9,9,101,115,97,99,10,9,9,59,59,10,9,45,110,116,111,45,113,110,120,42,41,10,9,9,59,59,10,9,45,110,116,111,42,41,10,9,9,111,115,61,96,101,99,104,111,32,36,111,115,32,124,32,115,101,100,32,45,101,32,39,115,124,110,116,111,124,110,116,111,
45,113,110,120,124,39,96,10,9,9,59,59,10,9,45,115,105,109,32,124,32,45,101,115,49,56,48,48,42,32,124,32,45,104,109,115,42,32,124,32,45,120,114,97,121,32,124,32,45,111,115,54,56,107,42,32,124,32,45,110,111,110,101,42,32,124,32,45,118,56,56,114,42,32,92,
10,9,32,32,32,32,32,32,124,32,45,119,105,110,100,111,119,115,42,32,124,32,45,111,115,120,32,124,32,45,97,98,117,103,32,124,32,45,110,101,116,119,97,114,101,42,32,124,32,45,111,115,57,42,32,124,32,45,98,101,111,115,42,32,124,32,45,104,97,105,107,117,42,
32,92,10,9,32,32,32,32,32,32,124,32,45,109,97,99,111,115,42,32,124,32,45,109,112,119,42,32,124,32,45,109,97,103,105,99,42,32,124,32,45,109,109,105,120,119,97,114,101,42,32,124,32,45,109,111,110,57,54,48,42,32,124,32,45,108,110,101,119,115,42,41,10,9,
9,59,59,10,9,45,109,97,99,42,41,10,9,9,111,115,61,96,101,99,104,111,32,36,111,115,32,124,32,115,101,100,32,45,101,32,39,115,124,109,97,99,124,109,97,99,111,115,124,39,96,10,9,9,59,59,10,9,45,108,105,110,117,120,45,100,105,101,116,108,105,98,99,41,10,
9,9,111,115,61,45,108,105,110,117,120,45,100,105,101,116,108,105,98,99,10,9,9,59,59,10,9,45,108,105,110,117,120,42,41,10,9,9,111,115,61,96,101,99,104,111,32,36,111,115,32,124,32,115,101,100,32,45,101,32,39,115,124,108,105,110,117,120,124,108,105,110,
117,120,45,103,110,117,124,39,96,10,9,9,59,59,10,9,45,115,117,110,111,115,53,42,41,10,9,9,111,115,61,96,101,99,104,111,32,36,111,115,32,124,32,115,101,100,32,45,101,32,39,115,124,115,117,110,111,115,53,124,115,111,108,97,114,105,115,50,124,39,96,10,9,
9,59,59,10,9,45,115,117,110,111,115,54,42,41,10,9,9,111,115,61,96,101,99,104,111,32,36,111,115,32,124,32,115,101,100,32,45,101,32,39,115,124,115,117,110,111,115,54,124,115,111,108,97,114,105,115,51,124,39,96,10,9,9,59,59,10,9,45,111,112,101,110,101,100,
42,41,10,9,9,111,115,61,45,111,112,101,110,101,100,105,116,105,111,110,10,9,9,59,59,10,9,45,111,115,52,48,48,42,41,10,9,9,111,115,61,45,111,115,52,48,48,10,9,9,59,59,10,9,45,119,105,110,99,101,42,41,10,9,9,111,115,61,45,119,105,110,99,101,10,9,9,59,59,
10,9,45,111,115,102,114,111,115,101,42,41,10,9,9,111,115,61,45,111,115,102,114,111,115,101,10,9,9,59,59,10,9,45,111,115,102,42,41,10,9,9,111,115,61,45,111,115,102,10,9,9,59,59,10,9,45,117,116,101,107,42,41,10,9,9,111,115,61,45,98,115,100,10,9,9,59,59,
10,9,45,100,121,110,105,120,42,41,10,9,9,111,115,61,45,98,115,100,10,9,9,59,59,10,9,45,97,99,105,115,42,41,10,9,9,111,115,61,45,97,111,115,10,9,9,59,59,10,9,45,97,116,104,101,111,115,42,41,10,9,9,111,115,61,45,97,116,104,101,111,115,10,9,9,59,59,10,9,
45,115,121,108,108,97,98,108,101,42,41,10,9,9,111,115,61,45,115,121,108,108,97,98,108,101,10,9,9,59,59,10,9,45,51,56,54,98,115,100,41,10,9,9,111,115,61,45,98,115,100,10,9,9,59,59,10,9,45,99,116,105,120,42,32,124,32,45,117,116,115,42,41,10,9,9,111,115,
61,45,115,121,115,118,10,9,9,59,59,10,9,45,110,111,118,97,42,41,10,9,9,111,115,61,45,114,116,109,107,45,110,111,118,97,10,9,9,59,59,10,9,45,110,115,50,32,41,10,9,9,111,115,61,45,110,101,120,116,115,116,101,112,50,10,9,9,59,59,10,9,45,110,115,107,42,41,
10,9,9,111,115,61,45,110,115,107,10,9,9,59,59,10,9,35,32,80,114,101,115,101,114,118,101,32,116,104,101,32,118,101,114,115,105,111,110,32,110,117,109,98,101,114,32,111,102,32,115,105,110,105,120,53,46,10,9,45,115,105,110,105,120,53,46,42,41,10,9,9,111,
115,61,96,101,99,104,111,32,36,111,115,32,124,32,115,101,100,32,45,101,32,39,115,124,115,105,110,105,120,124,115,121,115,118,124,39,96,10,9,9,59,59,10,9,45,115,105,110,105,120,42,41,10,9,9,111,115,61,45,115,121,115,118,52,10,9,9,59,59,10,9,45,116,112,
102,42,41,10,9,9,111,115,61,45,116,112,102,10,9,9,59,59,10,9,45,116,114,105,116,111,110,42,41,10,9,9,111,115,61,45,115,121,115,118,51,10,9,9,59,59,10,9,45,111,115,115,42,41,10,9,9,111,115,61,45,115,121,115,118,51,10,9,9,59,59,10,9,45,115,118,114,52,41,
10,9,9,111,115,61,45,115,121,115,118,52,10,9,9,59,59,10,9,45,115,118,114,51,41,10,9,9,111,115,61,45,115,121,115,118,51,10,9,9,59,59,10,9,45,115,121,115,118,114,52,41,10,9,9,111,115,61,45,115,121,115,118,52,10,9,9,59,59,10,9,35,32,84,104,105,115,32,109,
117,115,116,32,99,111,109,101,32,97,102,116,101,114,32,45,115,121,115,118,114,52,46,10,9,45,115,121,115,118,42,41,10,9,9,59,59,10,9,45,111,115,101,42,41,10,9,9,111,115,61,45,111,115,101,10,9,9,59,59,10,9,45,101,115,49,56,48,48,42,41,10,9,9,111,115,61,
45,111,115,101,10,9,9,59,59,10,9,45,120,101,110,105,120,41,10,9,9,111,115,61,45,120,101,110,105,120,10,9,9,59,59,10,9,45,42,109,105,110,116,32,124,32,45,109,105,110,116,91,48,45,57,93,42,32,124,32,45,42,77,105,78,84,32,124,32,45,77,105,78,84,91,48,45,
57,93,42,41,10,9,9,111,115,61,45,109,105,110,116,10,9,9,59,59,10,9,45,97,114,111,115,42,41,10,9,9,111,115,61,45,97,114,111,115,10,9,9,59,59,10,9,45,107,97,111,115,42,41,10,9,9,111,115,61,45,107,97,111,115,10,9,9,59,59,10,9,45,122,118,109,111,101,41,10,
9,9,111,115,61,45,122,118,109,111,101,10,9,9,59,59,10,9,45,100,105,99,111,115,42,41,10,9,9,111,115,61,45,100,105,99,111,115,10,9,9,59,59,10,9,45,110,97,99,108,42,41,10,9,9,59,59,10,9,45,110,111,110,101,41,10,9,9,59,59,10,9,42,41,10,9,9,35,32,71,101,116,
32,114,105,100,32,111,102,32,116,104,101,32,96,45,39,32,97,116,32,116,104,101,32,98,101,103,105,110,110,105,110,103,32,111,102,32,36,111,115,46,10,9,9,111,115,61,96,101,99,104,111,32,36,111,115,32,124,32,115,101,100,32,39,115,47,91,94,45,93,42,45,47,
47,39,96,10,9,9,101,99,104,111,32,73,110,118,97,108,105,100,32,99,111,110,102,105,103,117,114,97,116,105,111,110,32,92,96,36,49,92,39,58,32,115,121,115,116,101,109,32,92,96,36,111,115,92,39,32,110,111,116,32,114,101,99,111,103,110,105,122,101,100,32,
49,62,38,50,10,9,9,101,120,105,116,32,49,10,9,9,59,59,10,101,115,97,99,10,101,108,115,101,10,10,35,32,72,101,114,101,32,119,101,32,104,97,110,100,108,101,32,116,104,101,32,100,101,102,97,117,108,116,32,111,112,101,114,97,116,105,110,103,32,115,121,115,
116,101,109,115,32,116,104,97,116,32,99,111,109,101,32,119,105,116,104,32,118,97,114,105,111,117,115,32,109,97,99,104,105,110,101,115,46,10,35,32,84,104,101,32,118,97,108,117,101,32,115,104,111,117,108,100,32,98,101,32,119,104,97,116,32,116,104,101,32,
118,101,110,100,111,114,32,99,117,114,114,101,110,116,108,121,32,115,104,105,112,115,32,111,117,116,32,116,104,101,32,100,111,111,114,32,119,105,116,104,32,116,104,101,105,114,10,35,32,109,97,99,104,105,110,101,32,111,114,32,112,117,116,32,97,110,111,
116,104,101,114,32,119,97,121,44,32,116,104,101,32,109,111,115,116,32,112,111,112,117,108,97,114,32,111,115,32,112,114,111,118,105,100,101,100,32,119,105,116,104,32,116,104,101,32,109,97,99,104,105,110,101,46,10,10,35,32,78,111,116,101,32,116,104,97,
116,32,105,102,32,121,111,117,39,114,101,32,103,111,105,110,103,32,116,111,32,116,114,121,32,116,111,32,109,97,116,99,104,32,34,45,77,65,78,85,70,65,67,84,85,82,69,82,34,32,104,101,114,101,32,40,115,97,121,44,10,35,32,34,45,115,117,110,34,41,44,32,116,
104,101,110,32,121,111,117,32,104,97,118,101,32,116,111,32,116,101,108,108,32,116,104,101,32,99,97,115,101,32,115,116,97,116,101,109,101,110,116,32,117,112,32,116,111,119,97,114,100,115,32,116,104,101,32,116,111,112,10,35,32,116,104,97,116,32,77,65,78,
85,70,65,67,84,85,82,69,82,32,105,115,110,39,116,32,97,110,32,111,112,101,114,97,116,105,110,103,32,115,121,115,116,101,109,46,32,32,79,116,104,101,114,119,105,115,101,44,32,99,111,100,101,32,97,98,111,118,101,10,35,32,119,105,108,108,32,115,105,103,
110,97,108,32,97,110,32,101,114,114,111,114,32,115,97,121,105,110,103,32,116,104,97,116,32,77,65,78,85,70,65,67,84,85,82,69,82,32,105,115,110,39,116,32,97,110,32,111,112,101,114,97,116,105,110,103,10,35,32,115,121,115,116,101,109,44,32,97,110,100,32,
119,101,39,108,108,32,110,101,118,101,114,32,103,101,116,32,116,111,32,116,104,105,115,32,112,111,105,110,116,46,10,10,99,97,115,101,32,36,98,97,115,105,99,95,109,97,99,104,105,110,101,32,105,110,10,9,115,99,111,114,101,45,42,41,10,9,9,111,115,61,45,
101,108,102,10,9,9,59,59,10,9,115,112,117,45,42,41,10,9,9,111,115,61,45,101,108,102,10,9,9,59,59,10,9,42,45,97,99,111,114,110,41,10,9,9,111,115,61,45,114,105,115,99,105,120,49,46,50,10,9,9,59,59,10,9,97,114,109,42,45,114,101,98,101,108,41,10,9,9,111,
115,61,45,108,105,110,117,120,10,9,9,59,59,10,9,97,114,109,42,45,115,101,109,105,41,10,9,9,111,115,61,45,97,111,117,116,10,9,9,59,59,10,9,99,52,120,45,42,32,124,32,116,105,99,52,120,45,42,41,10,9,9,111,115,61,45,99,111,102,102,10,9,9,59,59,10,9,116,105,
99,53,52,120,45,42,41,10,9,9,111,115,61,45,99,111,102,102,10,9,9,59,59,10,9,116,105,99,53,53,120,45,42,41,10,9,9,111,115,61,45,99,111,102,102,10,9,9,59,59,10,9,116,105,99,54,120,45,42,41,10,9,9,111,115,61,45,99,111,102,102,10,9,9,59,59,10,9,35,32,84,
104,105,115,32,109,117,115,116,32,99,111,109,101,32,98,101,102,111,114,101,32,116,104,101,32,42,45,100,101,99,32,101,110,116,114,121,46,10,9,112,100,112,49,48,45,42,41,10,9,9,111,115,61,45,116,111,112,115,50,48,10,9,9,59,59,10,9,112,100,112,49,49,45,
42,41,10,9,9,111,115,61,45,110,111,110,101,10,9,9,59,59,10,9,42,45,100,101,99,32,124,32,118,97,120,45,42,41,10,9,9,111,115,61,45,117,108,116,114,105,120,52,46,50,10,9,9,59,59,10,9,109,54,56,42,45,97,112,111,108,108,111,41,10,9,9,111,115,61,45,100,111,
109,97,105,110,10,9,9,59,59,10,9,105,51,56,54,45,115,117,110,41,10,9,9,111,115,61,45,115,117,110,111,115,52,46,48,46,50,10,9,9,59,59,10,9,109,54,56,48,48,48,45,115,117,110,41,10,9,9,111,115,61,45,115,117,110,111,115,51,10,9,9,59,59,10,9,109,54,56,42,
45,99,105,115,99,111,41,10,9,9,111,115,61,45,97,111,117,116,10,9,9,59,59,10,9,109,101,112,45,42,41,10,9,9,111,115,61,45,101,108,102,10,9,9,59,59,10,9,109,105,112,115,42,45,99,105,115,99,111,41,10,9,9,111,115,61,45,101,108,102,10,9,9,59,59,10,9,109,105,
112,115,42,45,42,41,10,9,9,111,115,61,45,101,108,102,10,9,9,59,59,10,9,111,114,51,50,45,42,41,10,9,9,111,115,61,45,99,111,102,102,10,9,9,59,59,10,9,42,45,116,116,105,41,9,35,32,109,117,115,116,32,98,101,32,98,101,102,111,114,101,32,115,112,97,114,99,
32,101,110,116,114,121,32,111,114,32,119,101,32,103,101,116,32,116,104,101,32,119,114,111,110,103,32,111,115,46,10,9,9,111,115,61,45,115,121,115,118,51,10,9,9,59,59,10,9,115,112,97,114,99,45,42,32,124,32,42,45,115,117,110,41,10,9,9,111,115,61,45,115,
117,110,111,115,52,46,49,46,49,10,9,9,59,59,10,9,42,45,98,101,41,10,9,9,111,115,61,45,98,101,111,115,10,9,9,59,59,10,9,42,45,104,97,105,107,117,41,10,9,9,111,115,61,45,104,97,105,107,117,10,9,9,59,59,10,9,42,45,105,98,109,41,10,9,9,111,115,61,45,97,105,
120,10,9,9,59,59,10,9,42,45,107,110,117,116,104,41,10,9,9,111,115,61,45,109,109,105,120,119,97,114,101,10,9,9,59,59,10,9,42,45,119,101,99,41,10,9,9,111,115,61,45,112,114,111,101,108,102,10,9,9,59,59,10,9,42,45,119,105,110,98,111,110,100,41,10,9,9,111,
115,61,45,112,114,111,101,108,102,10,9,9,59,59,10,9,42,45,111,107,105,41,10,9,9,111,115,61,45,112,114,111,101,108,102,10,9,9,59,59,10,9,42,45,104,112,41,10,9,9,111,115,61,45,104,112,117,120,10,9,9,59,59,10,9,42,45,104,105,116,97,99,104,105,41,10,9,9,
111,115,61,45,104,105,117,120,10,9,9,59,59,10,9,105,56,54,48,45,42,32,124,32,42,45,97,116,116,32,124,32,42,45,110,99,114,32,124,32,42,45,97,108,116,111,115,32,124,32,42,45,109,111,116,111,114,111,108,97,32,124,32,42,45,99,111,110,118,101,114,103,101,
110,116,41,10,9,9,111,115,61,45,115,121,115,118,10,9,9,59,59,10,9,42,45,99,98,109,41,10,9,9,111,115,61,45,97,109,105,103,97,111,115,10,9,9,59,59,10,9,42,45,100,103,41,10,9,9,111,115,61,45,100,103,117,120,10,9,9,59,59,10,9,42,45,100,111,108,112,104,105,
110,41,10,9,9,111,115,61,45,115,121,115,118,51,10,9,9,59,59,10,9,109,54,56,107,45,99,99,117,114,41,10,9,9,111,115,61,45,114,116,117,10,9,9,59,59,10,9,109,56,56,107,45,111,109,114,111,110,42,41,10,9,9,111,115,61,45,108,117,110,97,10,9,9,59,59,10,9,42,
45,110,101,120,116,32,41,10,9,9,111,115,61,45,110,101,120,116,115,116,101,112,10,9,9,59,59,10,9,42,45,115,101,113,117,101,110,116,41,10,9,9,111,115,61,45,112,116,120,10,9,9,59,59,10,9,42,45,99,114,100,115,41,10,9,9,111,115,61,45,117,110,111,115,10,9,
9,59,59,10,9,42,45,110,115,41,10,9,9,111,115,61,45,103,101,110,105,120,10,9,9,59,59,10,9,105,51,55,48,45,42,41,10,9,9,111,115,61,45,109,118,115,10,9,9,59,59,10,9,42,45,110,101,120,116,41,10,9,9,111,115,61,45,110,101,120,116,115,116,101,112,51,10,9,9,
59,59,10,9,42,45,103,111,117,108,100,41,10,9,9,111,115,61,45,115,121,115,118,10,9,9,59,59,10,9,42,45,104,105,103,104,108,101,118,101,108,41,10,9,9,111,115,61,45,98,115,100,10,9,9,59,59,10,9,42,45,101,110,99,111,114,101,41,10,9,9,111,115,61,45,98,115,
100,10,9,9,59,59,10,9,42,45,115,103,105,41,10,9,9,111,115,61,45,105,114,105,120,10,9,9,59,59,10,9,42,45,115,105,101,109,101,110,115,41,10,9,9,111,115,61,45,115,121,115,118,52,10,9,9,59,59,10,9,42,45,109,97,115,115,99,111,109,112,41,10,9,9,111,115,61,
45,114,116,117,10,9,9,59,59,10,9,102,51,48,91,48,49,93,45,102,117,106,105,116,115,117,32,124,32,102,55,48,48,45,102,117,106,105,116,115,117,41,10,9,9,111,115,61,45,117,120,112,118,10,9,9,59,59,10,9,42,45,114,111,109,54,56,107,41,10,9,9,111,115,61,45,
99,111,102,102,10,9,9,59,59,10,9,42,45,42,98,117,103,41,10,9,9,111,115,61,45,99,111,102,102,10,9,9,59,59,10,9,42,45,97,112,112,108,101,41,10,9,9,111,115,61,45,109,97,99,111,115,10,9,9,59,59,10,9,42,45,97,116,97,114,105,42,41,10,9,9,111,115,61,45,109,
105,110,116,10,9,9,59,59,10,9,42,41,10,9,9,111,115,61,45,110,111,110,101,10,9,9,59,59,10,101,115,97,99,10,102,105,10,10,35,32,72,101,114,101,32,119,101,32,104,97,110,100,108,101,32,116,104,101,32,99,97,115,101,32,119,104,101,114,101,32,119,101,32,107,
110,111,119,32,116,104,101,32,111,115,44,32,97,110,100,32,116,104,101,32,67,80,85,32,116,121,112,101,44,32,98,117,116,32,110,111,116,32,116,104,101,10,35,32,109,97,110,117,102,97,99,116,117,114,101,114,46,32,32,87,101,32,112,105,99,107,32,116,104,101,
32,108,111,103,105,99,97,108,32,109,97,110,117,102,97,99,116,117,114,101,114,46,10,118,101,110,100,111,114,61,117,110,107,110,111,119,110,10,99,97,115,101,32,36,98,97,115,105,99,95,109,97,99,104,105,110,101,32,105,110,10,9,42,45,117,110,107,110,111,119,
110,41,10,9,9,99,97,115,101,32,36,111,115,32,105,110,10,9,9,9,45,114,105,115,99,105,120,42,41,10,9,9,9,9,118,101,110,100,111,114,61,97,99,111,114,110,10,9,9,9,9,59,59,10,9,9,9,45,115,117,110,111,115,42,41,10,9,9,9,9,118,101,110,100,111,114,61,115,117,
110,10,9,9,9,9,59,59,10,9,9,9,45,99,110,107,42,124,45,97,105,120,42,41,10,9,9,9,9,118,101,110,100,111,114,61,105,98,109,10,9,9,9,9,59,59,10,9,9,9,45,98,101,111,115,42,41,10,9,9,9,9,118,101,110,100,111,114,61,98,101,10,9,9,9,9,59,59,10,9,9,9,45,104,112,
117,120,42,41,10,9,9,9,9,118,101,110,100,111,114,61,104,112,10,9,9,9,9,59,59,10,9,9,9,45,109,112,101,105,120,42,41,10,9,9,9,9,118,101,110,100,111,114,61,104,112,10,9,9,9,9,59,59,10,9,9,9,45,104,105,117,120,42,41,10,9,9,9,9,118,101,110,100,111,114,61,
104,105,116,97,99,104,105,10,9,9,9,9,59,59,10,9,9,9,45,117,110,111,115,42,41,10,9,9,9,9,118,101,110,100,111,114,61,99,114,100,115,10,9,9,9,9,59,59,10,9,9,9,45,100,103,117,120,42,41,10,9,9,9,9,118,101,110,100,111,114,61,100,103,10,9,9,9,9,59,59,10,9,9,
9,45,108,117,110,97,42,41,10,9,9,9,9,118,101,110,100,111,114,61,111,109,114,111,110,10,9,9,9,9,59,59,10,9,9,9,45,103,101,110,105,120,42,41,10,9,9,9,9,118,101,110,100,111,114,61,110,115,10,9,9,9,9,59,59,10,9,9,9,45,109,118,115,42,32,124,32,45,111,112,
101,110,101,100,42,41,10,9,9,9,9,118,101,110,100,111,114,61,105,98,109,10,9,9,9,9,59,59,10,9,9,9,45,111,115,52,48,48,42,41,10,9,9,9,9,118,101,110,100,111,114,61,105,98,109,10,9,9,9,9,59,59,10,9,9,9,45,112,116,120,42,41,10,9,9,9,9,118,101,110,100,111,
114,61,115,101,113,117,101,110,116,10,9,9,9,9,59,59,10,9,9,9,45,116,112,102,42,41,10,9,9,9,9,118,101,110,100,111,114,61,105,98,109,10,9,9,9,9,59,59,10,9,9,9,45,118,120,115,105,109,42,32,124,32,45,118,120,119,111,114,107,115,42,32,124,32,45,119,105,110,
100,105,115,115,42,41,10,9,9,9,9,118,101,110,100,111,114,61,119,114,115,10,9,9,9,9,59,59,10,9,9,9,45,97,117,120,42,41,10,9,9,9,9,118,101,110,100,111,114,61,97,112,112,108,101,10,9,9,9,9,59,59,10,9,9,9,45,104,109,115,42,41,10,9,9,9,9,118,101,110,100,111,
114,61,104,105,116,97,99,104,105,10,9,9,9,9,59,59,10,9,9,9,45,109,112,119,42,32,124,32,45,109,97,99,111,115,42,41,10,9,9,9,9,118,101,110,100,111,114,61,97,112,112,108,101,10,9,9,9,9,59,59,10,9,9,9,45,42,109,105,110,116,32,124,32,45,109,105,110,116,91,
48,45,57,93,42,32,124,32,45,42,77,105,78,84,32,124,32,45,77,105,78,84,91,48,45,57,93,42,41,10,9,9,9,9,118,101,110,100,111,114,61,97,116,97,114,105,10,9,9,9,9,59,59,10,9,9,9,45,118,111,115,42,41,10,9,9,9,9,118,101,110,100,111,114,61,115,116,114,97,116,
117,115,10,9,9,9,9,59,59,10,9,9,101,115,97,99,10,9,9,98,97,115,105,99,95,109,97,99,104,105,110,101,61,96,101,99,104,111,32,36,98,97,115,105,99,95,109,97,99,104,105,110,101,32,124,32,115,101,100,32,34,115,47,117,110,107,110,111,119,110,47,36,118,101,110,
100,111,114,47,34,96,10,9,9,59,59,10,101,115,97,99,10,10,101,99,104,111,32,36,98,97,115,105,99,95,109,97,99,104,105,110,101,36,111,115,10,101,120,105,116,10,10,35,32,76,111,99,97,108,32,118,97,114,105,97,98,108,101,115,58,10,35,32,101,118,97,108,58,32,
40,97,100,100,45,104,111,111,107,32,39,119,114,105,116,101,45,102,105,108,101,45,104,111,111,107,115,32,39,116,105,109,101,45,115,116,97,109,112,41,10,35,32,116,105,109,101,45,115,116,97,109,112,45,115,116,97,114,116,58,32,34,116,105,109,101,115,116,
97,109,112,61,39,34,10,35,32,116,105,109,101,45,115,116,97,109,112,45,102,111,114,109,97,116,58,32,34,37,58,121,45,37,48,50,109,45,37,48,50,100,34,10,35,32,116,105,109,101,45,115,116,97,109,112,45,101,110,100,58,32,34,39,34,10,35,32,69,110,100,58,10,
0,0 };

const char* config_sub = (const char*) temp_binary_data_19;

//================== configure.ac ==================
static const unsigned char temp_binary_data_20[] =
"dnl Process this file with autoconf to produce a configure script.\n"
"AC_PREREQ([2.60])\n"
"\n"
"AC_INIT([zexy], [2.2.6svn], [zmoelnig@iem.at], [zexy], [http://get.puredata.info/zexy])\n"
"AM_INIT_AUTOMAKE([1.10 foreign])\n"
"m4_ifdef([LT_INIT], \n"
"\t[LT_INIT([disable-static win32-dll])],\n"
"\t[AC_ENABLE_SHARED\n"
"\t AC_DISABLE_STATIC\n"
"\t AC_LIBTOOL_WIN32_DLL])\n"
"\n"
"AC_CONFIG_MACRO_DIR([m4])\n"
"\n"
"AC_CONFIG_HEADERS([config.h])\n"
"AC_CONFIG_FILES([Makefile src/Makefile abs/Makefile reference/Makefile])\n"
"AC_CONFIG_FILES([tests/Makefile build/Makefile])\n"
"AC_CONFIG_FILES([zexy-meta.pd])\n"
"\n"
"AC_CONFIG_SRCDIR([src/zexy.c])\n"
"\n"
"IEM_OPERATING_SYSTEM\n"
"ARCH=$(uname -m)\n"
"KERN=$(uname -s)\n"
"\n"
"dnl m4_ifdef([AC_LIB_RPATH], [AC_LIB_RPATH])\n"
"\n"
"dnl Checks for programs.\n"
"AC_PROG_CC\n"
"AC_PROG_LN_S\n"
"AC_LIBTOOL_WIN32_DLL\n"
"AC_PROG_LIBTOOL\n"
"\n"
"AC_ARG_WITH([pd],       [  --with-pd=</path/to/pd> where to look for pd-headers and and -libs])\n"
"AC_ARG_WITH([extension],[  --with-extension=<ext>  enforce a certain extension for the dynamic library (e.g. dll)])\n"
"AC_ARG_ENABLE([library],[  --enable-library        build zexy as multi-object library (default, \"yes\"), as single-object externals (\"no\") or as both (\"both\")])\n"
"AM_CONDITIONAL([LIBRARY], [test \"x${enable_library}\" != \"xno\"])\n"
"AM_CONDITIONAL([SINGLEOBJECTS], [test \"x${enable_library}\" = \"xno\" || test \"x${enable_library}\" = \"xboth\"])\n"
"\n"
"\n"
"if test \"x${libdir}\" = \"x\\${exec_prefix}/lib\"; then\n"
" libdir='${exec_prefix}/lib/pd/extra'\n"
"fi\n"
"\n"
"\n"
"if test \"x$with_pd\" != \"x\"; then\n"
" if test -d \"${with_pd}\"; then\n"
"   PDPATH=${with_pd}\n"
" fi\n"
" if test -d \"${PDPATH}/src\"; then\n"
"  AC_MSG_RESULT([adding ${PDPATH}/src to INCLUDES])\n"
"  CPPFLAGS=\"-I${PDPATH}/src ${CPPFLAGS}\"\n"
"\n"
"  AC_MSG_RESULT([adding ${PDPATH}/src to LDFLAGS])\n"
"  LDFLAGS=\"-L${PDPATH}/src ${LDFLAGS}\"\n"
" else\n"
"  if test -d \"${PDPATH}\"; then\n"
"   AC_MSG_RESULT([adding ${PDPATH} to INCLUDES])\n"
"   CPPFLAGS=\"-I${PDPATH} ${CPPFLAGS}\"\n"
"  fi\n"
" fi\n"
" if test -d \"${PDPATH}/bin\"; then\n"
"  AC_MSG_RESULT([adding ${PDPATH}/bin to LDFLAGS])\n"
"  LDFLAGS=\"-L${PDPATH}/bin ${LDFLAGS}\"\n"
" else\n"
"  if test -d \"${PDPATH}\"; then\n"
"   AC_MSG_RESULT([adding ${PDPATH} to LDFLAGS])\n"
"   LDFLAGS=\"-L${PDPATH} ${LDFLAGS}\"\n"
"  fi\n"
" fi\n"
"fi\n"
"\n"
"dnl Checks for libraries.\n"
"dnl Replace `main' with a function in -lc:\n"
"AC_CHECK_LIB([c], [main])\n"
"AC_CHECK_LIB([crtdll], [fclose])\n"
"\n"
"AC_CHECK_LIB([coldname], [lseek])\n"
"AC_CHECK_LIB([kernel32], [main])\n"
"AC_CHECK_LIB([user32], [main])\n"
"AC_CHECK_LIB([gdi32], [main])\n"
"\n"
"dnl Replace `main' with a function in -lm:\n"
"AC_CHECK_LIB([m], [main])\n"
"dnl Replace `main' with a function in -lpthread:\n"
"dnl AC_CHECK_LIB([pthread], [main])\n"
"dnl Replace `main' with a function in -lstk:\n"
"dnl AC_CHECK_LIB([stk], [main], [STK=yes])\n"
"\n"
"tmp_pddll_LIBS=$LIBS\n"
"AC_CHECK_LIB([:pd.dll], [nullfn], have_pddll=\"yes\", have_pddll=\"no\")\n"
"LIBS=$tmp_pddll_LIBS\n"
"\n"
"if test \"x$have_pddll\" = \"xyes\"\n"
"then\n"
"  EXTRA_LTFLAGS=\"$EXTRA_LTFLAGS -Xlinker -l:pd.dll\"\n"
"else\n"
"  AC_CHECK_LIB([pd], [nullfn])\n"
"fi\n"
"\n"
"AC_CHECK_LIB([regex], [regcomp])\n"
"\n"
"dnl Checks for header files.\n"
"AC_HEADER_STDC\n"
"AC_CHECK_HEADERS([stdlib.h stdio.h string.h math.h time.h sys/time.h regex.h alloca.h])\n"
"\n"
"dnl Checks for typedefs, structures, and compiler characteristics.\n"
"AC_HEADER_TIME\n"
"\n"
"dnl Checks for library functions.\n"
"AC_FUNC_MMAP\n"
"AC_CHECK_FUNCS([select socket strerror])\n"
"\n"
"IEM_CHECK_FAT(ARCH_FLAG)\n"
"\n"
"IEM_CHECK_CFLAGS([-mms-bitfields])\n"
"IEM_CHECK_SIMD\n"
"IEM_CHECK_LPT\n"
"\n"
"AC_MSG_CHECKING([extension])\n"
"if test \"x$with_extension\" != \"x\"\n"
"then\n"
" EXTENSION=$with_extension\n"
"else\n"
" case \"$KERN\" in\n"
" Darwin)\n"
"   EXTENSION=pd_darwin\n"
"   ;;\n"
" Linux)\n"
"   EXTENSION=pd_linux\n"
"   ;;\n"
" IRIX64)\n"
"   EXTENSION=pd_irix6\n"
"   ;;\n"
" IRIX32)\n"
"   EXTENSION=pd_irix5\n"
"   ;;\n"
" IRIX64)\n"
"   EXTENSION=pd_irix6\n"
"   ;;\n"
" *CYGWIN*)\n"
"   EXTENSION=dll\n"
"   ;;\n"
" *MINGW*)\n"
"   EXTENSION=dll\n"
"   ;;\n"
" *)\n"
"   EXTENSION=pd_linux\n"
"   ;;\n"
" esac\n"
"fi\n"
"AC_MSG_RESULT([$EXTENSION])\n"
"\n"
"\n"
"have_pd=\"no\"\n"
"AC_CHECK_HEADERS([pd/m_pd.h m_pd.h], [have_pd=\"yes\"])\n"
"if test \"x${have_pd}\" = \"xno\"\n"
"then\n"
"AC_ERROR([m_pd.h is desperately needed!\n"
"        install pd and/or use\n"
"        \"--with-pd=</path/to/pd/>\"])\n"
"fi\n"
"\n"
"AC_SUBST(CFLAGS)\n"
"AC_SUBST(CPPFLAGS)\n"
"AC_SUBST(DEFS)\n"
"AC_SUBST(INCLUDES)\n"
"AC_SUBST(ARCH_FLAG)\n"
"AC_SUBST([LIBTOOL_DEPS])\n"
"AC_SUBST([EXTRA_LTFLAGS])\n"
"\n"
"AC_SUBST(EXTENSION)\n"
"\n"
"AC_OUTPUT()\n";

const char* configure_ac = (const char*) temp_binary_data_20;

//================== depcomp ==================
static const unsigned char temp_binary_data_21[] =
"#! /bin/sh\n"
"# depcomp - compile a program generating dependencies as side-effects\n"
"\n"
"scriptversion=2011-12-04.11; # UTC\n"
"\n"
"# Copyright (C) 1999, 2000, 2003, 2004, 2005, 2006, 2007, 2009, 2010,\n"
"# 2011 Free Software Foundation, Inc.\n"
"\n"
"# This program is free software; you can redistribute it and/or modify\n"
"# it under the terms of the GNU General Public License as published by\n"
"# the Free Software Foundation; either version 2, or (at your option)\n"
"# any later version.\n"
"\n"
"# This program is distributed in the hope that it will be useful,\n"
"# but WITHOUT ANY WARRANTY; without even the implied warranty of\n"
"# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n"
"# GNU General Public License for more details.\n"
"\n"
"# You should have received a copy of the GNU General Public License\n"
"# along with this program.  If not, see <http://www.gnu.org/licenses/>.\n"
"\n"
"# As a special exception to the GNU General Public License, if you\n"
"# distribute this file as part of a program that contains a\n"
"# configuration script generated by Autoconf, you may include it under\n"
"# the same distribution terms that you use for the rest of that program.\n"
"\n"
"# Originally written by Alexandre Oliva <oliva@dcc.unicamp.br>.\n"
"\n"
"case $1 in\n"
"  '')\n"
"     echo \"$0: No command.  Try \\`$0 --help' for more information.\" 1>&2\n"
"     exit 1;\n"
"     ;;\n"
"  -h | --h*)\n"
"    cat <<\\EOF\n"
"Usage: depcomp [--help] [--version] PROGRAM [ARGS]\n"
"\n"
"Run PROGRAMS ARGS to compile a file, generating dependencies\n"
"as side-effects.\n"
"\n"
"Environment variables:\n"
"  depmode     Dependency tracking mode.\n"
"  source      Source file read by `PROGRAMS ARGS'.\n"
"  object      Object file output by `PROGRAMS ARGS'.\n"
"  DEPDIR      directory where to store dependencies.\n"
"  depfile     Dependency file to output.\n"
"  tmpdepfile  Temporary file to use when outputting dependencies.\n"
"  libtool     Whether libtool is used (yes/no).\n"
"\n"
"Report bugs to <bug-automake@gnu.org>.\n"
"EOF\n"
"    exit $?\n"
"    ;;\n"
"  -v | --v*)\n"
"    echo \"depcomp $scriptversion\"\n"
"    exit $?\n"
"    ;;\n"
"esac\n"
"\n"
"if test -z \"$depmode\" || test -z \"$source\" || test -z \"$object\"; then\n"
"  echo \"depcomp: Variables source, object and depmode must be set\" 1>&2\n"
"  exit 1\n"
"fi\n"
"\n"
"# Dependencies for sub/bar.o or sub/bar.obj go into sub/.deps/bar.Po.\n"
"depfile=${depfile-`echo \"$object\" |\n"
"  sed 's|[^\\\\/]*$|'${DEPDIR-.deps}'/&|;s|\\.\\([^.]*\\)$|.P\\1|;s|Pobj$|Po|'`}\n"
"tmpdepfile=${tmpdepfile-`echo \"$depfile\" | sed 's/\\.\\([^.]*\\)$/.T\\1/'`}\n"
"\n"
"rm -f \"$tmpdepfile\"\n"
"\n"
"# Some modes work just like other modes, but use different flags.  We\n"
"# parameterize here, but still list the modes in the big case below,\n"
"# to make depend.m4 easier to write.  Note that we *cannot* use a case\n"
"# here, because this file can only contain one case statement.\n"
"if test \"$depmode\" = hp; then\n"
"  # HP compiler uses -M and no extra arg.\n"
"  gccflag=-M\n"
"  depmode=gcc\n"
"fi\n"
"\n"
"if test \"$depmode\" = dashXmstdout; then\n"
"   # This is just like dashmstdout with a different argument.\n"
"   dashmflag=-xM\n"
"   depmode=dashmstdout\n"
"fi\n"
"\n"
"cygpath_u=\"cygpath -u -f -\"\n"
"if test \"$depmode\" = msvcmsys; then\n"
"   # This is just like msvisualcpp but w/o cygpath translation.\n"
"   # Just convert the backslash-escaped backslashes to single forward\n"
"   # slashes to satisfy depend.m4\n"
"   cygpath_u='sed s,\\\\\\\\,/,g'\n"
"   depmode=msvisualcpp\n"
"fi\n"
"\n"
"if test \"$depmode\" = msvc7msys; then\n"
"   # This is just like msvc7 but w/o cygpath translation.\n"
"   # Just convert the backslash-escaped backslashes to single forward\n"
"   # slashes to satisfy depend.m4\n"
"   cygpath_u='sed s,\\\\\\\\,/,g'\n"
"   depmode=msvc7\n"
"fi\n"
"\n"
"case \"$depmode\" in\n"
"gcc3)\n"
"## gcc 3 implements dependency tracking that does exactly what\n"
"## we want.  Yay!  Note: for some reason libtool 1.4 doesn't like\n"
"## it if -MD -MP comes after the -MF stuff.  Hmm.\n"
"## Unfortunately, FreeBSD c89 acceptance of flags depends upon\n"
"## the command line argument order; so add the flags where they\n"
"## appear in depend2.am.  Note that the slowdown incurred here\n"
"## affects only configure: in makefiles, %FASTDEP% shortcuts this.\n"
"  for arg\n"
"  do\n"
"    case $arg in\n"
"    -c) set fnord \"$@\" -MT \"$object\" -MD -MP -MF \"$tmpdepfile\" \"$arg\" ;;\n"
"    *)  set fnord \"$@\" \"$arg\" ;;\n"
"    esac\n"
"    shift # fnord\n"
"    shift # $arg\n"
"  done\n"
"  \"$@\"\n"
"  stat=$?\n"
"  if test $stat -eq 0; then :\n"
"  else\n"
"    rm -f \"$tmpdepfile\"\n"
"    exit $stat\n"
"  fi\n"
"  mv \"$tmpdepfile\" \"$depfile\"\n"
"  ;;\n"
"\n"
"gcc)\n"
"## There are various ways to get dependency output from gcc.  Here's\n"
"## why we pick this rather obscure method:\n"
"## - Don't want to use -MD because we'd like the dependencies to end\n"
"##   up in a subdir.  Having to rename by hand is ugly.\n"
"##   (We might end up doing this anyway to support other compilers.)\n"
"## - The DEPENDENCIES_OUTPUT environment variable makes gcc act like\n"
"##   -MM, not -M (despite what the docs say).\n"
"## - Using -M directly means running the compiler twice (even worse\n"
"##   than renaming).\n"
"  if test -z \"$gccflag\"; then\n"
"    gccflag=-MD,\n"
"  fi\n"
"  \"$@\" -Wp,\"$gccflag$tmpdepfile\"\n"
"  stat=$?\n"
"  if test $stat -eq 0; then :\n"
"  else\n"
"    rm -f \"$tmpdepfile\"\n"
"    exit $stat\n"
"  fi\n"
"  rm -f \"$depfile\"\n"
"  echo \"$object : \\\\\" > \"$depfile\"\n"
"  alpha=ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz\n"
"## The second -e expression handles DOS-style file names with drive letters.\n"
"  sed -e 's/^[^:]*: / /' \\\n"
"      -e 's/^['$alpha']:\\/[^:]*: / /' < \"$tmpdepfile\" >> \"$depfile\"\n"
"## This next piece of magic avoids the `deleted header file' problem.\n"
"## The problem is that when a header file which appears in a .P file\n"
"## is deleted, the dependency causes make to die (because there is\n"
"## typically no way to rebuild the header).  We avoid this by adding\n"
"## dummy dependencies for each header file.  Too bad gcc doesn't do\n"
"## this for us directly.\n"
"  tr ' ' '\n"
"' < \"$tmpdepfile\" |\n"
"## Some versions of gcc put a space before the `:'.  On the theory\n"
"## that the space means something, we add a space to the output as\n"
"## well.  hp depmode also adds that space, but also prefixes the VPATH\n"
"## to the object.  Take care to not repeat it in the output.\n"
"## Some versions of the HPUX 10.20 sed can't process this invocation\n"
"## correctly.  Breaking it into two sed invocations is a workaround.\n"
"    sed -e 's/^\\\\$//' -e '/^$/d' -e \"s|.*$object$||\" -e '/:$/d' \\\n"
"      | sed -e 's/$/ :/' >> \"$depfile\"\n"
"  rm -f \"$tmpdepfile\"\n"
"  ;;\n"
"\n"
"hp)\n"
"  # This case exists only to let depend.m4 do its work.  It works by\n"
"  # looking at the text of this script.  This case will never be run,\n"
"  # since it is checked for above.\n"
"  exit 1\n"
"  ;;\n"
"\n"
"sgi)\n"
"  if test \"$libtool\" = yes; then\n"
"    \"$@\" \"-Wp,-MDupdate,$tmpdepfile\"\n"
"  else\n"
"    \"$@\" -MDupdate \"$tmpdepfile\"\n"
"  fi\n"
"  stat=$?\n"
"  if test $stat -eq 0; then :\n"
"  else\n"
"    rm -f \"$tmpdepfile\"\n"
"    exit $stat\n"
"  fi\n"
"  rm -f \"$depfile\"\n"
"\n"
"  if test -f \"$tmpdepfile\"; then  # yes, the sourcefile depend on other files\n"
"    echo \"$object : \\\\\" > \"$depfile\"\n"
"\n"
"    # Clip off the initial element (the dependent).  Don't try to be\n"
"    # clever and replace this with sed code, as IRIX sed won't handle\n"
"    # lines with more than a fixed number of characters (4096 in\n"
"    # IRIX 6.2 sed, 8192 in IRIX 6.5).  We also remove comment lines;\n"
"    # the IRIX cc adds comments like `#:fec' to the end of the\n"
"    # dependency line.\n"
"    tr ' ' '\n"
"' < \"$tmpdepfile\" \\\n"
"    | sed -e 's/^.*\\.o://' -e 's/#.*$//' -e '/^$/ d' | \\\n"
"    tr '\n"
"' ' ' >> \"$depfile\"\n"
"    echo >> \"$depfile\"\n"
"\n"
"    # The second pass generates a dummy entry for each header file.\n"
"    tr ' ' '\n"
"' < \"$tmpdepfile\" \\\n"
"   | sed -e 's/^.*\\.o://' -e 's/#.*$//' -e '/^$/ d' -e 's/$/:/' \\\n"
"   >> \"$depfile\"\n"
"  else\n"
"    # The sourcefile does not contain any dependencies, so just\n"
"    # store a dummy comment line, to avoid errors with the Makefile\n"
"    # \"include basename.Plo\" scheme.\n"
"    echo \"#dummy\" > \"$depfile\"\n"
"  fi\n"
"  rm -f \"$tmpdepfile\"\n"
"  ;;\n"
"\n"
"aix)\n"
"  # The C for AIX Compiler uses -M and outputs the dependencies\n"
"  # in a .u file.  In older versions, this file always lives in the\n"
"  # current directory.  Also, the AIX compiler puts `$object:' at the\n"
"  # start of each line; $object doesn't have directory information.\n"
"  # Version 6 uses the directory in both cases.\n"
"  dir=`echo \"$object\" | sed -e 's|/[^/]*$|/|'`\n"
"  test \"x$dir\" = \"x$object\" && dir=\n"
"  base=`echo \"$object\" | sed -e 's|^.*/||' -e 's/\\.o$//' -e 's/\\.lo$//'`\n"
"  if test \"$libtool\" = yes; then\n"
"    tmpdepfile1=$dir$base.u\n"
"    tmpdepfile2=$base.u\n"
"    tmpdepfile3=$dir.libs/$base.u\n"
"    \"$@\" -Wc,-M\n"
"  else\n"
"    tmpdepfile1=$dir$base.u\n"
"    tmpdepfile2=$dir$base.u\n"
"    tmpdepfile3=$dir$base.u\n"
"    \"$@\" -M\n"
"  fi\n"
"  stat=$?\n"
"\n"
"  if test $stat -eq 0; then :\n"
"  else\n"
"    rm -f \"$tmpdepfile1\" \"$tmpdepfile2\" \"$tmpdepfile3\"\n"
"    exit $stat\n"
"  fi\n"
"\n"
"  for tmpdepfile in \"$tmpdepfile1\" \"$tmpdepfile2\" \"$tmpdepfile3\"\n"
"  do\n"
"    test -f \"$tmpdepfile\" && break\n"
"  done\n"
"  if test -f \"$tmpdepfile\"; then\n"
"    # Each line is of the form `foo.o: dependent.h'.\n"
"    # Do two passes, one to just change these to\n"
"    # `$object: dependent.h' and one to simply `dependent.h:'.\n"
"    sed -e \"s,^.*\\.[a-z]*:,$object:,\" < \"$tmpdepfile\" > \"$depfile\"\n"
"    # That's a tab and a space in the [].\n"
"    sed -e 's,^.*\\.[a-z]*:[\t ]*,,' -e 's,$,:,' < \"$tmpdepfile\" >> \"$depfile\"\n"
"  else\n"
"    # The sourcefile does not contain any dependencies, so just\n"
"    # store a dummy comment line, to avoid errors with the Makefile\n"
"    # \"include basename.Plo\" scheme.\n"
"    echo \"#dummy\" > \"$depfile\"\n"
"  fi\n"
"  rm -f \"$tmpdepfile\"\n"
"  ;;\n"
"\n"
"icc)\n"
"  # Intel's C compiler understands `-MD -MF file'.  However on\n"
"  #    icc -MD -MF foo.d -c -o sub/foo.o sub/foo.c\n"
"  # ICC 7.0 will fill foo.d with something like\n"
"  #    foo.o: sub/foo.c\n"
"  #    foo.o: sub/foo.h\n"
"  # which is wrong.  We want:\n"
"  #    sub/foo.o: sub/foo.c\n"
"  #    sub/foo.o: sub/foo.h\n"
"  #    sub/foo.c:\n"
"  #    sub/foo.h:\n"
"  # ICC 7.1 will output\n"
"  #    foo.o: sub/foo.c sub/foo.h\n"
"  # and will wrap long lines using \\ :\n"
"  #    foo.o: sub/foo.c ... \\\n"
"  #     sub/foo.h ... \\\n"
"  #     ...\n"
"\n"
"  \"$@\" -MD -MF \"$tmpdepfile\"\n"
"  stat=$?\n"
"  if test $stat -eq 0; then :\n"
"  else\n"
"    rm -f \"$tmpdepfile\"\n"
"    exit $stat\n"
"  fi\n"
"  rm -f \"$depfile\"\n"
"  # Each line is of the form `foo.o: dependent.h',\n"
"  # or `foo.o: dep1.h dep2.h \\', or ` dep3.h dep4.h \\'.\n"
"  # Do two passes, one to just change these to\n"
"  # `$object: dependent.h' and one to simply `dependent.h:'.\n"
"  sed \"s,^[^:]*:,$object :,\" < \"$tmpdepfile\" > \"$depfile\"\n"
"  # Some versions of the HPUX 10.20 sed can't process this invocation\n"
"  # correctly.  Breaking it into two sed invocations is a workaround.\n"
"  sed 's,^[^:]*: \\(.*\\)$,\\1,;s/^\\\\$//;/^$/d;/:$/d' < \"$tmpdepfile\" |\n"
"    sed -e 's/$/ :/' >> \"$depfile\"\n"
"  rm -f \"$tmpdepfile\"\n"
"  ;;\n"
"\n"
"hp2)\n"
"  # The \"hp\" stanza above does not work with aCC (C++) and HP's ia64\n"
"  # compilers, which have integrated preprocessors.  The correct option\n"
"  # to use with these is +Maked; it writes dependencies to a file named\n"
"  # 'foo.d', which lands next to the object file, wherever that\n"
"  # happens to be.\n"
"  # Much of this is similar to the tru64 case; see comments there.\n"
"  dir=`echo \"$object\" | sed -e 's|/[^/]*$|/|'`\n"
"  test \"x$dir\" = \"x$object\" && dir=\n"
"  base=`echo \"$object\" | sed -e 's|^.*/||' -e 's/\\.o$//' -e 's/\\.lo$//'`\n"
"  if test \"$libtool\" = yes; then\n"
"    tmpdepfile1=$dir$base.d\n"
"    tmpdepfile2=$dir.libs/$base.d\n"
"    \"$@\" -Wc,+Maked\n"
"  else\n"
"    tmpdepfile1=$dir$base.d\n"
"    tmpdepfile2=$dir$base.d\n"
"    \"$@\" +Maked\n"
"  fi\n"
"  stat=$?\n"
"  if test $stat -eq 0; then :\n"
"  else\n"
"     rm -f \"$tmpdepfile1\" \"$tmpdepfile2\"\n"
"     exit $stat\n"
"  fi\n"
"\n"
"  for tmpdepfile in \"$tmpdepfile1\" \"$tmpdepfile2\"\n"
"  do\n"
"    test -f \"$tmpdepfile\" && break\n"
"  done\n"
"  if test -f \"$tmpdepfile\"; then\n"
"    sed -e \"s,^.*\\.[a-z]*:,$object:,\" \"$tmpdepfile\" > \"$depfile\"\n"
"    # Add `dependent.h:' lines.\n"
"    sed -ne '2,${\n"
"\t       s/^ *//\n"
"\t       s/ \\\\*$//\n"
"\t       s/$/:/\n"
"\t       p\n"
"\t     }' \"$tmpdepfile\" >> \"$depfile\"\n"
"  else\n"
"    echo \"#dummy\" > \"$depfile\"\n"
"  fi\n"
"  rm -f \"$tmpdepfile\" \"$tmpdepfile2\"\n"
"  ;;\n"
"\n"
"tru64)\n"
"   # The Tru64 compiler uses -MD to generate dependencies as a side\n"
"   # effect.  `cc -MD -o foo.o ...' puts the dependencies into `foo.o.d'.\n"
"   # At least on Alpha/Redhat 6.1, Compaq CCC V6.2-504 seems to put\n"
"   # dependencies in `foo.d' instead, so we check for that too.\n"
"   # Subdirectories are respected.\n"
"   dir=`echo \"$object\" | sed -e 's|/[^/]*$|/|'`\n"
"   test \"x$dir\" = \"x$object\" && dir=\n"
"   base=`echo \"$object\" | sed -e 's|^.*/||' -e 's/\\.o$//' -e 's/\\.lo$//'`\n"
"\n"
"   if test \"$libtool\" = yes; then\n"
"      # With Tru64 cc, shared objects can also be used to make a\n"
"      # static library.  This mechanism is used in libtool 1.4 series to\n"
"      # handle both shared and static libraries in a single compilation.\n"
"      # With libtool 1.4, dependencies were output in $dir.libs/$base.lo.d.\n"
"      #\n"
"      # With libtool 1.5 this exception was removed, and libtool now\n"
"      # generates 2 separate objects for the 2 libraries.  These two\n"
"      # compilations output dependencies in $dir.libs/$base.o.d and\n"
"      # in $dir$base.o.d.  We have to check for both files, because\n"
"      # one of the two compilations can be disabled.  We should prefer\n"
"      # $dir$base.o.d over $dir.libs/$base.o.d because the latter is\n"
"      # automatically cleaned when .libs/ is deleted, while ignoring\n"
"      # the former would cause a distcleancheck panic.\n"
"      tmpdepfile1=$dir.libs/$base.lo.d   # libtool 1.4\n"
"      tmpdepfile2=$dir$base.o.d          # libtool 1.5\n"
"      tmpdepfile3=$dir.libs/$base.o.d    # libtool 1.5\n"
"      tmpdepfile4=$dir.libs/$base.d      # Compaq CCC V6.2-504\n"
"      \"$@\" -Wc,-MD\n"
"   else\n"
"      tmpdepfile1=$dir$base.o.d\n"
"      tmpdepfile2=$dir$base.d\n"
"      tmpdepfile3=$dir$base.d\n"
"      tmpdepfile4=$dir$base.d\n"
"      \"$@\" -MD\n"
"   fi\n"
"\n"
"   stat=$?\n"
"   if test $stat -eq 0; then :\n"
"   else\n"
"      rm -f \"$tmpdepfile1\" \"$tmpdepfile2\" \"$tmpdepfile3\" \"$tmpdepfile4\"\n"
"      exit $stat\n"
"   fi\n"
"\n"
"   for tmpdepfile in \"$tmpdepfile1\" \"$tmpdepfile2\" \"$tmpdepfile3\" \"$tmpdepfile4\"\n"
"   do\n"
"     test -f \"$tmpdepfile\" && break\n"
"   done\n"
"   if test -f \"$tmpdepfile\"; then\n"
"      sed -e \"s,^.*\\.[a-z]*:,$object:,\" < \"$tmpdepfile\" > \"$depfile\"\n"
"      # That's a tab and a space in the [].\n"
"      sed -e 's,^.*\\.[a-z]*:[\t ]*,,' -e 's,$,:,' < \"$tmpdepfile\" >> \"$depfile\"\n"
"   else\n"
"      echo \"#dummy\" > \"$depfile\"\n"
"   fi\n"
"   rm -f \"$tmpdepfile\"\n"
"   ;;\n"
"\n"
"msvc7)\n"
"  if test \"$libtool\" = yes; then\n"
"    showIncludes=-Wc,-showIncludes\n"
"  else\n"
"    showIncludes=-showIncludes\n"
"  fi\n"
"  \"$@\" $showIncludes > \"$tmpdepfile\"\n"
"  stat=$?\n"
"  grep -v '^Note: including file: ' \"$tmpdepfile\"\n"
"  if test \"$stat\" = 0; then :\n"
"  else\n"
"    rm -f \"$tmpdepfile\"\n"
"    exit $stat\n"
"  fi\n"
"  rm -f \"$depfile\"\n"
"  echo \"$object : \\\\\" > \"$depfile\"\n"
"  # The first sed program below extracts the file names and escapes\n"
"  # backslashes for cygpath.  The second sed program outputs the file\n"
"  # name when reading, but also accumulates all include files in the\n"
"  # hold buffer in order to output them again at the end.  This only\n"
"  # works with sed implementations that can handle large buffers.\n"
"  sed < \"$tmpdepfile\" -n '\n"
"/^Note: including file:  *\\(.*\\)/ {\n"
"  s//\\1/\n"
"  s/\\\\/\\\\\\\\/g\n"
"  p\n"
"}' | $cygpath_u | sort -u | sed -n '\n"
"s/ /\\\\ /g\n"
"s/\\(.*\\)/\t\\1 \\\\/p\n"
"s/.\\(.*\\) \\\\/\\1:/\n"
"H\n"
"$ {\n"
"  s/.*/\t/\n"
"  G\n"
"  p\n"
"}' >> \"$depfile\"\n"
"  rm -f \"$tmpdepfile\"\n"
"  ;;\n"
"\n"
"msvc7msys)\n"
"  # This case exists only to let depend.m4 do its work.  It works by\n"
"  # looking at the text of this script.  This case will never be run,\n"
"  # since it is checked for above.\n"
"  exit 1\n"
"  ;;\n"
"\n"
"#nosideeffect)\n"
"  # This comment above is used by automake to tell side-effect\n"
"  # dependency tracking mechanisms from slower ones.\n"
"\n"
"dashmstdout)\n"
"  # Important note: in order to support this mode, a compiler *must*\n"
"  # always write the preprocessed file to stdout, regardless of -o.\n"
"  \"$@\" || exit $?\n"
"\n"
"  # Remove the call to Libtool.\n"
"  if test \"$libtool\" = yes; then\n"
"    while test \"X$1\" != 'X--mode=compile'; do\n"
"      shift\n"
"    done\n"
"    shift\n"
"  fi\n"
"\n"
"  # Remove `-o $object'.\n"
"  IFS=\" \"\n"
"  for arg\n"
"  do\n"
"    case $arg in\n"
"    -o)\n"
"      shift\n"
"      ;;\n"
"    $object)\n"
"      shift\n"
"      ;;\n"
"    *)\n"
"      set fnord \"$@\" \"$arg\"\n"
"      shift # fnord\n"
"      shift # $arg\n"
"      ;;\n"
"    esac\n"
"  done\n"
"\n"
"  test -z \"$dashmflag\" && dashmflag=-M\n"
"  # Require at least two characters before searching for `:'\n"
"  # in the target name.  This is to cope with DOS-style filenames:\n"
"  # a dependency such as `c:/foo/bar' could be seen as target `c' otherwise.\n"
"  \"$@\" $dashmflag |\n"
"    sed 's:^[  ]*[^: ][^:][^:]*\\:[    ]*:'\"$object\"'\\: :' > \"$tmpdepfile\"\n"
"  rm -f \"$depfile\"\n"
"  cat < \"$tmpdepfile\" > \"$depfile\"\n"
"  tr ' ' '\n"
"' < \"$tmpdepfile\" | \\\n"
"## Some versions of the HPUX 10.20 sed can't process this invocation\n"
"## correctly.  Breaking it into two sed invocations is a workaround.\n"
"    sed -e 's/^\\\\$//' -e '/^$/d' -e '/:$/d' | sed -e 's/$/ :/' >> \"$depfile\"\n"
"  rm -f \"$tmpdepfile\"\n"
"  ;;\n"
"\n"
"dashXmstdout)\n"
"  # This case only exists to satisfy depend.m4.  It is never actually\n"
"  # run, as this mode is specially recognized in the preamble.\n"
"  exit 1\n"
"  ;;\n"
"\n"
"makedepend)\n"
"  \"$@\" || exit $?\n"
"  # Remove any Libtool call\n"
"  if test \"$libtool\" = yes; then\n"
"    while test \"X$1\" != 'X--mode=compile'; do\n"
"      shift\n"
"    done\n"
"    shift\n"
"  fi\n"
"  # X makedepend\n"
"  shift\n"
"  cleared=no eat=no\n"
"  for arg\n"
"  do\n"
"    case $cleared in\n"
"    no)\n"
"      set \"\"; shift\n"
"      cleared=yes ;;\n"
"    esac\n"
"    if test $eat = yes; then\n"
"      eat=no\n"
"      continue\n"
"    fi\n"
"    case \"$arg\" in\n"
"    -D*|-I*)\n"
"      set fnord \"$@\" \"$arg\"; shift ;;\n"
"    # Strip any option that makedepend may not understand.  Remove\n"
"    # the object too, otherwise makedepend will parse it as a source file.\n"
"    -arch)\n"
"      eat=yes ;;\n"
"    -*|$object)\n"
"      ;;\n"
"    *)\n"
"      set fnord \"$@\" \"$arg\"; shift ;;\n"
"    esac\n"
"  done\n"
"  obj_suffix=`echo \"$object\" | sed 's/^.*\\././'`\n"
"  touch \"$tmpdepfile\"\n"
"  ${MAKEDEPEND-makedepend} -o\"$obj_suffix\" -f\"$tmpdepfile\" \"$@\"\n"
"  rm -f \"$depfile\"\n"
"  # makedepend may prepend the VPATH from the source file name to the object.\n"
"  # No need to regex-escape $object, excess matching of '.' is harmless.\n"
"  sed \"s|^.*\\($object *:\\)|\\1|\" \"$tmpdepfile\" > \"$depfile\"\n"
"  sed '1,2d' \"$tmpdepfile\" | tr ' ' '\n"
"' | \\\n"
"## Some versions of the HPUX 10.20 sed can't process this invocation\n"
"## correctly.  Breaking it into two sed invocations is a workaround.\n"
"    sed -e 's/^\\\\$//' -e '/^$/d' -e '/:$/d' | sed -e 's/$/ :/' >> \"$depfile\"\n"
"  rm -f \"$tmpdepfile\" \"$tmpdepfile\".bak\n"
"  ;;\n"
"\n"
"cpp)\n"
"  # Important note: in order to support this mode, a compiler *must*\n"
"  # always write the preprocessed file to stdout.\n"
"  \"$@\" || exit $?\n"
"\n"
"  # Remove the call to Libtool.\n"
"  if test \"$libtool\" = yes; then\n"
"    while test \"X$1\" != 'X--mode=compile'; do\n"
"      shift\n"
"    done\n"
"    shift\n"
"  fi\n"
"\n"
"  # Remove `-o $object'.\n"
"  IFS=\" \"\n"
"  for arg\n"
"  do\n"
"    case $arg in\n"
"    -o)\n"
"      shift\n"
"      ;;\n"
"    $object)\n"
"      shift\n"
"      ;;\n"
"    *)\n"
"      set fnord \"$@\" \"$arg\"\n"
"      shift # fnord\n"
"      shift # $arg\n"
"      ;;\n"
"    esac\n"
"  done\n"
"\n"
"  \"$@\" -E |\n"
"    sed -n -e '/^# [0-9][0-9]* \"\\([^\"]*\\)\".*/ s:: \\1 \\\\:p' \\\n"
"       -e '/^#line [0-9][0-9]* \"\\([^\"]*\\)\".*/ s:: \\1 \\\\:p' |\n"
"    sed '$ s: \\\\$::' > \"$tmpdepfile\"\n"
"  rm -f \"$depfile\"\n"
"  echo \"$object : \\\\\" > \"$depfile\"\n"
"  cat < \"$tmpdepfile\" >> \"$depfile\"\n"
"  sed < \"$tmpdepfile\" '/^$/d;s/^ //;s/ \\\\$//;s/$/ :/' >> \"$depfile\"\n"
"  rm -f \"$tmpdepfile\"\n"
"  ;;\n"
"\n"
"msvisualcpp)\n"
"  # Important note: in order to support this mode, a compiler *must*\n"
"  # always write the preprocessed file to stdout.\n"
"  \"$@\" || exit $?\n"
"\n"
"  # Remove the call to Libtool.\n"
"  if test \"$libtool\" = yes; then\n"
"    while test \"X$1\" != 'X--mode=compile'; do\n"
"      shift\n"
"    done\n"
"    shift\n"
"  fi\n"
"\n"
"  IFS=\" \"\n"
"  for arg\n"
"  do\n"
"    case \"$arg\" in\n"
"    -o)\n"
"      shift\n"
"      ;;\n"
"    $object)\n"
"      shift\n"
"      ;;\n"
"    \"-Gm\"|\"/Gm\"|\"-Gi\"|\"/Gi\"|\"-ZI\"|\"/ZI\")\n"
"\tset fnord \"$@\"\n"
"\tshift\n"
"\tshift\n"
"\t;;\n"
"    *)\n"
"\tset fnord \"$@\" \"$arg\"\n"
"\tshift\n"
"\tshift\n"
"\t;;\n"
"    esac\n"
"  done\n"
"  \"$@\" -E 2>/dev/null |\n"
"  sed -n '/^#line [0-9][0-9]* \"\\([^\"]*\\)\"/ s::\\1:p' | $cygpath_u | sort -u > \"$tmpdepfile\"\n"
"  rm -f \"$depfile\"\n"
"  echo \"$object : \\\\\" > \"$depfile\"\n"
"  sed < \"$tmpdepfile\" -n -e 's% %\\\\ %g' -e '/^\\(.*\\)$/ s::\t\\1 \\\\:p' >> \"$depfile\"\n"
"  echo \"\t\" >> \"$depfile\"\n"
"  sed < \"$tmpdepfile\" -n -e 's% %\\\\ %g' -e '/^\\(.*\\)$/ s::\\1\\::p' >> \"$depfile\"\n"
"  rm -f \"$tmpdepfile\"\n"
"  ;;\n"
"\n"
"msvcmsys)\n"
"  # This case exists only to let depend.m4 do its work.  It works by\n"
"  # looking at the text of this script.  This case will never be run,\n"
"  # since it is checked for above.\n"
"  exit 1\n"
"  ;;\n"
"\n"
"none)\n"
"  exec \"$@\"\n"
"  ;;\n"
"\n"
"*)\n"
"  echo \"Unknown depmode $depmode\" 1>&2\n"
"  exit 1\n"
"  ;;\n"
"esac\n"
"\n"
"exit 0\n"
"\n"
"# Local Variables:\n"
"# mode: shell-script\n"
"# sh-indentation: 2\n"
"# eval: (add-hook 'write-file-hooks 'time-stamp)\n"
"# time-stamp-start: \"scriptversion=\"\n"
"# time-stamp-format: \"%:y-%02m-%02d.%02H\"\n"
"# time-stamp-time-zone: \"UTC\"\n"
"# time-stamp-end: \"; # UTC\"\n"
"# End:\n";

const char* depcomp = (const char*) temp_binary_data_21;

//================== INSTALL ==================
static const unsigned char temp_binary_data_22[] =
"Installation Instructions\n"
"*************************\n"
"\n"
"Copyright (C) 1994, 1995, 1996, 1999, 2000, 2001, 2002, 2004, 2005,\n"
"2006, 2007, 2008, 2009 Free Software Foundation, Inc.\n"
"\n"
"   Copying and distribution of this file, with or without modification,\n"
"are permitted in any medium without royalty provided the copyright\n"
"notice and this notice are preserved.  This file is offered as-is,\n"
"without warranty of any kind.\n"
"\n"
"Basic Installation\n"
"==================\n"
"\n"
"   Briefly, the shell commands `./configure; make; make install' should\n"
"configure, build, and install this package.  The following\n"
"more-detailed instructions are generic; see the `README' file for\n"
"instructions specific to this package.  Some packages provide this\n"
"`INSTALL' file but do not implement all of the features documented\n"
"below.  The lack of an optional feature in a given package is not\n"
"necessarily a bug.  More recommendations for GNU packages can be found\n"
"in *note Makefile Conventions: (standards)Makefile Conventions.\n"
"\n"
"   The `configure' shell script attempts to guess correct values for\n"
"various system-dependent variables used during compilation.  It uses\n"
"those values to create a `Makefile' in each directory of the package.\n"
"It may also create one or more `.h' files containing system-dependent\n"
"definitions.  Finally, it creates a shell script `config.status' that\n"
"you can run in the future to recreate the current configuration, and a\n"
"file `config.log' containing compiler output (useful mainly for\n"
"debugging `configure').\n"
"\n"
"   It can also use an optional file (typically called `config.cache'\n"
"and enabled with `--cache-file=config.cache' or simply `-C') that saves\n"
"the results of its tests to speed up reconfiguring.  Caching is\n"
"disabled by default to prevent problems with accidental use of stale\n"
"cache files.\n"
"\n"
"   If you need to do unusual things to compile the package, please try\n"
"to figure out how `configure' could check whether to do them, and mail\n"
"diffs or instructions to the address given in the `README' so they can\n"
"be considered for the next release.  If you are using the cache, and at\n"
"some point `config.cache' contains results you don't want to keep, you\n"
"may remove or edit it.\n"
"\n"
"   The file `configure.ac' (or `configure.in') is used to create\n"
"`configure' by a program called `autoconf'.  You need `configure.ac' if\n"
"you want to change it or regenerate `configure' using a newer version\n"
"of `autoconf'.\n"
"\n"
"   The simplest way to compile this package is:\n"
"\n"
"  1. `cd' to the directory containing the package's source code and type\n"
"     `./configure' to configure the package for your system.\n"
"\n"
"     Running `configure' might take a while.  While running, it prints\n"
"     some messages telling which features it is checking for.\n"
"\n"
"  2. Type `make' to compile the package.\n"
"\n"
"  3. Optionally, type `make check' to run any self-tests that come with\n"
"     the package, generally using the just-built uninstalled binaries.\n"
"\n"
"  4. Type `make install' to install the programs and any data files and\n"
"     documentation.  When installing into a prefix owned by root, it is\n"
"     recommended that the package be configured and built as a regular\n"
"     user, and only the `make install' phase executed with root\n"
"     privileges.\n"
"\n"
"  5. Optionally, type `make installcheck' to repeat any self-tests, but\n"
"     this time using the binaries in their final installed location.\n"
"     This target does not install anything.  Running this target as a\n"
"     regular user, particularly if the prior `make install' required\n"
"     root privileges, verifies that the installation completed\n"
"     correctly.\n"
"\n"
"  6. You can remove the program binaries and object files from the\n"
"     source code directory by typing `make clean'.  To also remove the\n"
"     files that `configure' created (so you can compile the package for\n"
"     a different kind of computer), type `make distclean'.  There is\n"
"     also a `make maintainer-clean' target, but that is intended mainly\n"
"     for the package's developers.  If you use it, you may have to get\n"
"     all sorts of other programs in order to regenerate files that came\n"
"     with the distribution.\n"
"\n"
"  7. Often, you can also type `make uninstall' to remove the installed\n"
"     files again.  In practice, not all packages have tested that\n"
"     uninstallation works correctly, even though it is required by the\n"
"     GNU Coding Standards.\n"
"\n"
"  8. Some packages, particularly those that use Automake, provide `make\n"
"     distcheck', which can by used by developers to test that all other\n"
"     targets like `make install' and `make uninstall' work correctly.\n"
"     This target is generally not run by end users.\n"
"\n"
"Compilers and Options\n"
"=====================\n"
"\n"
"   Some systems require unusual options for compilation or linking that\n"
"the `configure' script does not know about.  Run `./configure --help'\n"
"for details on some of the pertinent environment variables.\n"
"\n"
"   You can give `configure' initial values for configuration parameters\n"
"by setting variables in the command line or in the environment.  Here\n"
"is an example:\n"
"\n"
"     ./configure CC=c99 CFLAGS=-g LIBS=-lposix\n"
"\n"
"   *Note Defining Variables::, for more details.\n"
"\n"
"Compiling For Multiple Architectures\n"
"====================================\n"
"\n"
"   You can compile the package for more than one kind of computer at the\n"
"same time, by placing the object files for each architecture in their\n"
"own directory.  To do this, you can use GNU `make'.  `cd' to the\n"
"directory where you want the object files and executables to go and run\n"
"the `configure' script.  `configure' automatically checks for the\n"
"source code in the directory that `configure' is in and in `..'.  This\n"
"is known as a \"VPATH\" build.\n"
"\n"
"   With a non-GNU `make', it is safer to compile the package for one\n"
"architecture at a time in the source code directory.  After you have\n"
"installed the package for one architecture, use `make distclean' before\n"
"reconfiguring for another architecture.\n"
"\n"
"   On MacOS X 10.5 and later systems, you can create libraries and\n"
"executables that work on multiple system types--known as \"fat\" or\n"
"\"universal\" binaries--by specifying multiple `-arch' options to the\n"
"compiler but only a single `-arch' option to the preprocessor.  Like\n"
"this:\n"
"\n"
"     ./configure CC=\"gcc -arch i386 -arch x86_64 -arch ppc -arch ppc64\" \\\n"
"                 CXX=\"g++ -arch i386 -arch x86_64 -arch ppc -arch ppc64\" \\\n"
"                 CPP=\"gcc -E\" CXXCPP=\"g++ -E\"\n"
"\n"
"   This is not guaranteed to produce working output in all cases, you\n"
"may have to build one architecture at a time and combine the results\n"
"using the `lipo' tool if you have problems.\n"
"\n"
"Installation Names\n"
"==================\n"
"\n"
"   By default, `make install' installs the package's commands under\n"
"`/usr/local/bin', include files under `/usr/local/include', etc.  You\n"
"can specify an installation prefix other than `/usr/local' by giving\n"
"`configure' the option `--prefix=PREFIX', where PREFIX must be an\n"
"absolute file name.\n"
"\n"
"   You can specify separate installation prefixes for\n"
"architecture-specific files and architecture-independent files.  If you\n"
"pass the option `--exec-prefix=PREFIX' to `configure', the package uses\n"
"PREFIX as the prefix for installing programs and libraries.\n"
"Documentation and other data files still use the regular prefix.\n"
"\n"
"   In addition, if you use an unusual directory layout you can give\n"
"options like `--bindir=DIR' to specify different values for particular\n"
"kinds of files.  Run `configure --help' for a list of the directories\n"
"you can set and what kinds of files go in them.  In general, the\n"
"default for these options is expressed in terms of `${prefix}', so that\n"
"specifying just `--prefix' will affect all of the other directory\n"
"specifications that were not explicitly provided.\n"
"\n"
"   The most portable way to affect installation locations is to pass the\n"
"correct locations to `configure'; however, many packages provide one or\n"
"both of the following shortcuts of passing variable assignments to the\n"
"`make install' command line to change installation locations without\n"
"having to reconfigure or recompile.\n"
"\n"
"   The first method involves providing an override variable for each\n"
"affected directory.  For example, `make install\n"
"prefix=/alternate/directory' will choose an alternate location for all\n"
"directory configuration variables that were expressed in terms of\n"
"`${prefix}'.  Any directories that were specified during `configure',\n"
"but not in terms of `${prefix}', must each be overridden at install\n"
"time for the entire installation to be relocated.  The approach of\n"
"makefile variable overrides for each directory variable is required by\n"
"the GNU Coding Standards, and ideally causes no recompilation.\n"
"However, some platforms have known limitations with the semantics of\n"
"shared libraries that end up requiring recompilation when using this\n"
"method, particularly noticeable in packages that use GNU Libtool.\n"
"\n"
"   The second method involves providing the `DESTDIR' variable.  For\n"
"example, `make install DESTDIR=/alternate/directory' will prepend\n"
"`/alternate/directory' before all installation names.  The approach of\n"
"`DESTDIR' overrides is not required by the GNU Coding Standards, and\n"
"does not work on platforms that have drive letters.  On the other hand,\n"
"it does better at avoiding recompilation issues, and works well even\n"
"when some directory options were not specified in terms of `${prefix}'\n"
"at `configure' time.\n"
"\n"
"Optional Features\n"
"=================\n"
"\n"
"   If the package supports it, you can cause programs to be installed\n"
"with an extra prefix or suffix on their names by giving `configure' the\n"
"option `--program-prefix=PREFIX' or `--program-suffix=SUFFIX'.\n"
"\n"
"   Some packages pay attention to `--enable-FEATURE' options to\n"
"`configure', where FEATURE indicates an optional part of the package.\n"
"They may also pay attention to `--with-PACKAGE' options, where PACKAGE\n"
"is something like `gnu-as' or `x' (for the X Window System).  The\n"
"`README' should mention any `--enable-' and `--with-' options that the\n"
"package recognizes.\n"
"\n"
"   For packages that use the X Window System, `configure' can usually\n"
"find the X include and library files automatically, but if it doesn't,\n"
"you can use the `configure' options `--x-includes=DIR' and\n"
"`--x-libraries=DIR' to specify their locations.\n"
"\n"
"   Some packages offer the ability to configure how verbose the\n"
"execution of `make' will be.  For these packages, running `./configure\n"
"--enable-silent-rules' sets the default to minimal output, which can be\n"
"overridden with `make V=1'; while running `./configure\n"
"--disable-silent-rules' sets the default to verbose, which can be\n"
"overridden with `make V=0'.\n"
"\n"
"Particular systems\n"
"==================\n"
"\n"
"   On HP-UX, the default C compiler is not ANSI C compatible.  If GNU\n"
"CC is not installed, it is recommended to use the following options in\n"
"order to use an ANSI C compiler:\n"
"\n"
"     ./configure CC=\"cc -Ae -D_XOPEN_SOURCE=500\"\n"
"\n"
"and if that doesn't work, install pre-built binaries of GCC for HP-UX.\n"
"\n"
"   On OSF/1 a.k.a. Tru64, some versions of the default C compiler cannot\n"
"parse its `<wchar.h>' header file.  The option `-nodtk' can be used as\n"
"a workaround.  If GNU CC is not installed, it is therefore recommended\n"
"to try\n"
"\n"
"     ./configure CC=\"cc\"\n"
"\n"
"and if that doesn't work, try\n"
"\n"
"     ./configure CC=\"cc -nodtk\"\n"
"\n"
"   On Solaris, don't put `/usr/ucb' early in your `PATH'.  This\n"
"directory contains several dysfunctional programs; working variants of\n"
"these programs are available in `/usr/bin'.  So, if you need `/usr/ucb'\n"
"in your `PATH', put it _after_ `/usr/bin'.\n"
"\n"
"   On Haiku, software installed for all users goes in `/boot/common',\n"
"not `/usr/local'.  It is recommended to use the following options:\n"
"\n"
"     ./configure --prefix=/boot/common\n"
"\n"
"Specifying the System Type\n"
"==========================\n"
"\n"
"   There may be some features `configure' cannot figure out\n"
"automatically, but needs to determine by the type of machine the package\n"
"will run on.  Usually, assuming the package is built to be run on the\n"
"_same_ architectures, `configure' can figure that out, but if it prints\n"
"a message saying it cannot guess the machine type, give it the\n"
"`--build=TYPE' option.  TYPE can either be a short name for the system\n"
"type, such as `sun4', or a canonical name which has the form:\n"
"\n"
"     CPU-COMPANY-SYSTEM\n"
"\n"
"where SYSTEM can have one of these forms:\n"
"\n"
"     OS\n"
"     KERNEL-OS\n"
"\n"
"   See the file `config.sub' for the possible values of each field.  If\n"
"`config.sub' isn't included in this package, then this package doesn't\n"
"need to know the machine type.\n"
"\n"
"   If you are _building_ compiler tools for cross-compiling, you should\n"
"use the option `--target=TYPE' to select the type of system they will\n"
"produce code for.\n"
"\n"
"   If you want to _use_ a cross compiler, that generates code for a\n"
"platform different from the build platform, you should specify the\n"
"\"host\" platform (i.e., that on which the generated programs will\n"
"eventually be run) with `--host=TYPE'.\n"
"\n"
"Sharing Defaults\n"
"================\n"
"\n"
"   If you want to set default values for `configure' scripts to share,\n"
"you can create a site shell script called `config.site' that gives\n"
"default values for variables like `CC', `cache_file', and `prefix'.\n"
"`configure' looks for `PREFIX/share/config.site' if it exists, then\n"
"`PREFIX/etc/config.site' if it exists.  Or, you can set the\n"
"`CONFIG_SITE' environment variable to the location of the site script.\n"
"A warning: not all `configure' scripts look for a site script.\n"
"\n"
"Defining Variables\n"
"==================\n"
"\n"
"   Variables not defined in a site shell script can be set in the\n"
"environment passed to `configure'.  However, some packages may run\n"
"configure again during the build, and the customized values of these\n"
"variables may be lost.  In order to avoid this problem, you should set\n"
"them in the `configure' command line, using `VAR=value'.  For example:\n"
"\n"
"     ./configure CC=/usr/local2/bin/gcc\n"
"\n"
"causes the specified `gcc' to be used as the C compiler (unless it is\n"
"overridden in the site shell script).\n"
"\n"
"Unfortunately, this technique does not work for `CONFIG_SHELL' due to\n"
"an Autoconf bug.  Until the bug is fixed you can use this workaround:\n"
"\n"
"     CONFIG_SHELL=/bin/bash /bin/bash ./configure CONFIG_SHELL=/bin/bash\n"
"\n"
"`configure' Invocation\n"
"======================\n"
"\n"
"   `configure' recognizes the following options to control how it\n"
"operates.\n"
"\n"
"`--help'\n"
"`-h'\n"
"     Print a summary of all of the options to `configure', and exit.\n"
"\n"
"`--help=short'\n"
"`--help=recursive'\n"
"     Print a summary of the options unique to this package's\n"
"     `configure', and exit.  The `short' variant lists options used\n"
"     only in the top level, while the `recursive' variant lists options\n"
"     also present in any nested packages.\n"
"\n"
"`--version'\n"
"`-V'\n"
"     Print the version of Autoconf used to generate the `configure'\n"
"     script, and exit.\n"
"\n"
"`--cache-file=FILE'\n"
"     Enable the cache: use and save the results of the tests in FILE,\n"
"     traditionally `config.cache'.  FILE defaults to `/dev/null' to\n"
"     disable caching.\n"
"\n"
"`--config-cache'\n"
"`-C'\n"
"     Alias for `--cache-file=config.cache'.\n"
"\n"
"`--quiet'\n"
"`--silent'\n"
"`-q'\n"
"     Do not print messages saying which checks are being made.  To\n"
"     suppress all normal output, redirect it to `/dev/null' (any error\n"
"     messages will still be shown).\n"
"\n"
"`--srcdir=DIR'\n"
"     Look for the package's source code in directory DIR.  Usually\n"
"     `configure' can determine that directory automatically.\n"
"\n"
"`--prefix=DIR'\n"
"     Use DIR as the installation prefix.  *note Installation Names::\n"
"     for more details, including other options available for fine-tuning\n"
"     the installation locations.\n"
"\n"
"`--no-create'\n"
"`-n'\n"
"     Run the configure checks, but stop before creating any output\n"
"     files.\n"
"\n"
"`configure' also accepts some other, not widely useful, options.  Run\n"
"`configure --help' for more details.\n"
"\n";

const char* INSTALL = (const char*) temp_binary_data_22;

//================== install-sh ==================
static const unsigned char temp_binary_data_23[] =
"#!/bin/sh\n"
"# install - install a program, script, or datafile\n"
"\n"
"scriptversion=2011-01-19.21; # UTC\n"
"\n"
"# This originates from X11R5 (mit/util/scripts/install.sh), which was\n"
"# later released in X11R6 (xc/config/util/install.sh) with the\n"
"# following copyright and license.\n"
"#\n"
"# Copyright (C) 1994 X Consortium\n"
"#\n"
"# Permission is hereby granted, free of charge, to any person obtaining a copy\n"
"# of this software and associated documentation files (the \"Software\"), to\n"
"# deal in the Software without restriction, including without limitation the\n"
"# rights to use, copy, modify, merge, publish, distribute, sublicense, and/or\n"
"# sell copies of the Software, and to permit persons to whom the Software is\n"
"# furnished to do so, subject to the following conditions:\n"
"#\n"
"# The above copyright notice and this permission notice shall be included in\n"
"# all copies or substantial portions of the Software.\n"
"#\n"
"# THE SOFTWARE IS PROVIDED \"AS IS\", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR\n"
"# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,\n"
"# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE\n"
"# X CONSORTIUM BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN\n"
"# AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNEC-\n"
"# TION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.\n"
"#\n"
"# Except as contained in this notice, the name of the X Consortium shall not\n"
"# be used in advertising or otherwise to promote the sale, use or other deal-\n"
"# ings in this Software without prior written authorization from the X Consor-\n"
"# tium.\n"
"#\n"
"#\n"
"# FSF changes to this file are in the public domain.\n"
"#\n"
"# Calling this script install-sh is preferred over install.sh, to prevent\n"
"# `make' implicit rules from creating a file called install from it\n"
"# when there is no Makefile.\n"
"#\n"
"# This script is compatible with the BSD install script, but was written\n"
"# from scratch.\n"
"\n"
"nl='\n"
"'\n"
"IFS=\" \"\"\t$nl\"\n"
"\n"
"# set DOITPROG to echo to test this script\n"
"\n"
"# Don't use :- since 4.3BSD and earlier shells don't like it.\n"
"doit=${DOITPROG-}\n"
"if test -z \"$doit\"; then\n"
"  doit_exec=exec\n"
"else\n"
"  doit_exec=$doit\n"
"fi\n"
"\n"
"# Put in absolute file names if you don't have them in your path;\n"
"# or use environment vars.\n"
"\n"
"chgrpprog=${CHGRPPROG-chgrp}\n"
"chmodprog=${CHMODPROG-chmod}\n"
"chownprog=${CHOWNPROG-chown}\n"
"cmpprog=${CMPPROG-cmp}\n"
"cpprog=${CPPROG-cp}\n"
"mkdirprog=${MKDIRPROG-mkdir}\n"
"mvprog=${MVPROG-mv}\n"
"rmprog=${RMPROG-rm}\n"
"stripprog=${STRIPPROG-strip}\n"
"\n"
"posix_glob='?'\n"
"initialize_posix_glob='\n"
"  test \"$posix_glob\" != \"?\" || {\n"
"    if (set -f) 2>/dev/null; then\n"
"      posix_glob=\n"
"    else\n"
"      posix_glob=:\n"
"    fi\n"
"  }\n"
"'\n"
"\n"
"posix_mkdir=\n"
"\n"
"# Desired mode of installed file.\n"
"mode=0755\n"
"\n"
"chgrpcmd=\n"
"chmodcmd=$chmodprog\n"
"chowncmd=\n"
"mvcmd=$mvprog\n"
"rmcmd=\"$rmprog -f\"\n"
"stripcmd=\n"
"\n"
"src=\n"
"dst=\n"
"dir_arg=\n"
"dst_arg=\n"
"\n"
"copy_on_change=false\n"
"no_target_directory=\n"
"\n"
"usage=\"\\\n"
"Usage: $0 [OPTION]... [-T] SRCFILE DSTFILE\n"
"   or: $0 [OPTION]... SRCFILES... DIRECTORY\n"
"   or: $0 [OPTION]... -t DIRECTORY SRCFILES...\n"
"   or: $0 [OPTION]... -d DIRECTORIES...\n"
"\n"
"In the 1st form, copy SRCFILE to DSTFILE.\n"
"In the 2nd and 3rd, copy all SRCFILES to DIRECTORY.\n"
"In the 4th, create DIRECTORIES.\n"
"\n"
"Options:\n"
"     --help     display this help and exit.\n"
"     --version  display version info and exit.\n"
"\n"
"  -c            (ignored)\n"
"  -C            install only if different (preserve the last data modification time)\n"
"  -d            create directories instead of installing files.\n"
"  -g GROUP      $chgrpprog installed files to GROUP.\n"
"  -m MODE       $chmodprog installed files to MODE.\n"
"  -o USER       $chownprog installed files to USER.\n"
"  -s            $stripprog installed files.\n"
"  -t DIRECTORY  install into DIRECTORY.\n"
"  -T            report an error if DSTFILE is a directory.\n"
"\n"
"Environment variables override the default commands:\n"
"  CHGRPPROG CHMODPROG CHOWNPROG CMPPROG CPPROG MKDIRPROG MVPROG\n"
"  RMPROG STRIPPROG\n"
"\"\n"
"\n"
"while test $# -ne 0; do\n"
"  case $1 in\n"
"    -c) ;;\n"
"\n"
"    -C) copy_on_change=true;;\n"
"\n"
"    -d) dir_arg=true;;\n"
"\n"
"    -g) chgrpcmd=\"$chgrpprog $2\"\n"
"\tshift;;\n"
"\n"
"    --help) echo \"$usage\"; exit $?;;\n"
"\n"
"    -m) mode=$2\n"
"\tcase $mode in\n"
"\t  *' '* | *'\t'* | *'\n"
"'*\t  | *'*'* | *'?'* | *'['*)\n"
"\t    echo \"$0: invalid mode: $mode\" >&2\n"
"\t    exit 1;;\n"
"\tesac\n"
"\tshift;;\n"
"\n"
"    -o) chowncmd=\"$chownprog $2\"\n"
"\tshift;;\n"
"\n"
"    -s) stripcmd=$stripprog;;\n"
"\n"
"    -t) dst_arg=$2\n"
"\t# Protect names problematic for `test' and other utilities.\n"
"\tcase $dst_arg in\n"
"\t  -* | [=\\(\\)!]) dst_arg=./$dst_arg;;\n"
"\tesac\n"
"\tshift;;\n"
"\n"
"    -T) no_target_directory=true;;\n"
"\n"
"    --version) echo \"$0 $scriptversion\"; exit $?;;\n"
"\n"
"    --)\tshift\n"
"\tbreak;;\n"
"\n"
"    -*)\techo \"$0: invalid option: $1\" >&2\n"
"\texit 1;;\n"
"\n"
"    *)  break;;\n"
"  esac\n"
"  shift\n"
"done\n"
"\n"
"if test $# -ne 0 && test -z \"$dir_arg$dst_arg\"; then\n"
"  # When -d is used, all remaining arguments are directories to create.\n"
"  # When -t is used, the destination is already specified.\n"
"  # Otherwise, the last argument is the destination.  Remove it from $@.\n"
"  for arg\n"
"  do\n"
"    if test -n \"$dst_arg\"; then\n"
"      # $@ is not empty: it contains at least $arg.\n"
"      set fnord \"$@\" \"$dst_arg\"\n"
"      shift # fnord\n"
"    fi\n"
"    shift # arg\n"
"    dst_arg=$arg\n"
"    # Protect names problematic for `test' and other utilities.\n"
"    case $dst_arg in\n"
"      -* | [=\\(\\)!]) dst_arg=./$dst_arg;;\n"
"    esac\n"
"  done\n"
"fi\n"
"\n"
"if test $# -eq 0; then\n"
"  if test -z \"$dir_arg\"; then\n"
"    echo \"$0: no input file specified.\" >&2\n"
"    exit 1\n"
"  fi\n"
"  # It's OK to call `install-sh -d' without argument.\n"
"  # This can happen when creating conditional directories.\n"
"  exit 0\n"
"fi\n"
"\n"
"if test -z \"$dir_arg\"; then\n"
"  do_exit='(exit $ret); exit $ret'\n"
"  trap \"ret=129; $do_exit\" 1\n"
"  trap \"ret=130; $do_exit\" 2\n"
"  trap \"ret=141; $do_exit\" 13\n"
"  trap \"ret=143; $do_exit\" 15\n"
"\n"
"  # Set umask so as not to create temps with too-generous modes.\n"
"  # However, 'strip' requires both read and write access to temps.\n"
"  case $mode in\n"
"    # Optimize common cases.\n"
"    *644) cp_umask=133;;\n"
"    *755) cp_umask=22;;\n"
"\n"
"    *[0-7])\n"
"      if test -z \"$stripcmd\"; then\n"
"\tu_plus_rw=\n"
"      else\n"
"\tu_plus_rw='% 200'\n"
"      fi\n"
"      cp_umask=`expr '(' 777 - $mode % 1000 ')' $u_plus_rw`;;\n"
"    *)\n"
"      if test -z \"$stripcmd\"; then\n"
"\tu_plus_rw=\n"
"      else\n"
"\tu_plus_rw=,u+rw\n"
"      fi\n"
"      cp_umask=$mode$u_plus_rw;;\n"
"  esac\n"
"fi\n"
"\n"
"for src\n"
"do\n"
"  # Protect names problematic for `test' and other utilities.\n"
"  case $src in\n"
"    -* | [=\\(\\)!]) src=./$src;;\n"
"  esac\n"
"\n"
"  if test -n \"$dir_arg\"; then\n"
"    dst=$src\n"
"    dstdir=$dst\n"
"    test -d \"$dstdir\"\n"
"    dstdir_status=$?\n"
"  else\n"
"\n"
"    # Waiting for this to be detected by the \"$cpprog $src $dsttmp\" command\n"
"    # might cause directories to be created, which would be especially bad\n"
"    # if $src (and thus $dsttmp) contains '*'.\n"
"    if test ! -f \"$src\" && test ! -d \"$src\"; then\n"
"      echo \"$0: $src does not exist.\" >&2\n"
"      exit 1\n"
"    fi\n"
"\n"
"    if test -z \"$dst_arg\"; then\n"
"      echo \"$0: no destination specified.\" >&2\n"
"      exit 1\n"
"    fi\n"
"    dst=$dst_arg\n"
"\n"
"    # If destination is a directory, append the input filename; won't work\n"
"    # if double slashes aren't ignored.\n"
"    if test -d \"$dst\"; then\n"
"      if test -n \"$no_target_directory\"; then\n"
"\techo \"$0: $dst_arg: Is a directory\" >&2\n"
"\texit 1\n"
"      fi\n"
"      dstdir=$dst\n"
"      dst=$dstdir/`basename \"$src\"`\n"
"      dstdir_status=0\n"
"    else\n"
"      # Prefer dirname, but fall back on a substitute if dirname fails.\n"
"      dstdir=`\n"
"\t(dirname \"$dst\") 2>/dev/null ||\n"
"\texpr X\"$dst\" : 'X\\(.*[^/]\\)//*[^/][^/]*/*$' \\| \\\n"
"\t     X\"$dst\" : 'X\\(//\\)[^/]' \\| \\\n"
"\t     X\"$dst\" : 'X\\(//\\)$' \\| \\\n"
"\t     X\"$dst\" : 'X\\(/\\)' \\| . 2>/dev/null ||\n"
"\techo X\"$dst\" |\n"
"\t    sed '/^X\\(.*[^/]\\)\\/\\/*[^/][^/]*\\/*$/{\n"
"\t\t   s//\\1/\n"
"\t\t   q\n"
"\t\t }\n"
"\t\t /^X\\(\\/\\/\\)[^/].*/{\n"
"\t\t   s//\\1/\n"
"\t\t   q\n"
"\t\t }\n"
"\t\t /^X\\(\\/\\/\\)$/{\n"
"\t\t   s//\\1/\n"
"\t\t   q\n"
"\t\t }\n"
"\t\t /^X\\(\\/\\).*/{\n"
"\t\t   s//\\1/\n"
"\t\t   q\n"
"\t\t }\n"
"\t\t s/.*/./; q'\n"
"      `\n"
"\n"
"      test -d \"$dstdir\"\n"
"      dstdir_status=$?\n"
"    fi\n"
"  fi\n"
"\n"
"  obsolete_mkdir_used=false\n"
"\n"
"  if test $dstdir_status != 0; then\n"
"    case $posix_mkdir in\n"
"      '')\n"
"\t# Create intermediate dirs using mode 755 as modified by the umask.\n"
"\t# This is like FreeBSD 'install' as of 1997-10-28.\n"
"\tumask=`umask`\n"
"\tcase $stripcmd.$umask in\n"
"\t  # Optimize common cases.\n"
"\t  *[2367][2367]) mkdir_umask=$umask;;\n"
"\t  .*0[02][02] | .[02][02] | .[02]) mkdir_umask=22;;\n"
"\n"
"\t  *[0-7])\n"
"\t    mkdir_umask=`expr $umask + 22 \\\n"
"\t      - $umask % 100 % 40 + $umask % 20 \\\n"
"\t      - $umask % 10 % 4 + $umask % 2\n"
"\t    `;;\n"
"\t  *) mkdir_umask=$umask,go-w;;\n"
"\tesac\n"
"\n"
"\t# With -d, create the new directory with the user-specified mode.\n"
"\t# Otherwise, rely on $mkdir_umask.\n"
"\tif test -n \"$dir_arg\"; then\n"
"\t  mkdir_mode=-m$mode\n"
"\telse\n"
"\t  mkdir_mode=\n"
"\tfi\n"
"\n"
"\tposix_mkdir=false\n"
"\tcase $umask in\n"
"\t  *[123567][0-7][0-7])\n"
"\t    # POSIX mkdir -p sets u+wx bits regardless of umask, which\n"
"\t    # is incompatible with FreeBSD 'install' when (umask & 300) != 0.\n"
"\t    ;;\n"
"\t  *)\n"
"\t    tmpdir=${TMPDIR-/tmp}/ins$RANDOM-$$\n"
"\t    trap 'ret=$?; rmdir \"$tmpdir/d\" \"$tmpdir\" 2>/dev/null; exit $ret' 0\n"
"\n"
"\t    if (umask $mkdir_umask &&\n"
"\t\texec $mkdirprog $mkdir_mode -p -- \"$tmpdir/d\") >/dev/null 2>&1\n"
"\t    then\n"
"\t      if test -z \"$dir_arg\" || {\n"
"\t\t   # Check for POSIX incompatibilities with -m.\n"
"\t\t   # HP-UX 11.23 and IRIX 6.5 mkdir -m -p sets group- or\n"
"\t\t   # other-writeable bit of parent directory when it shouldn't.\n"
"\t\t   # FreeBSD 6.1 mkdir -m -p sets mode of existing directory.\n"
"\t\t   ls_ld_tmpdir=`ls -ld \"$tmpdir\"`\n"
"\t\t   case $ls_ld_tmpdir in\n"
"\t\t     d????-?r-*) different_mode=700;;\n"
"\t\t     d????-?--*) different_mode=755;;\n"
"\t\t     *) false;;\n"
"\t\t   esac &&\n"
"\t\t   $mkdirprog -m$different_mode -p -- \"$tmpdir\" && {\n"
"\t\t     ls_ld_tmpdir_1=`ls -ld \"$tmpdir\"`\n"
"\t\t     test \"$ls_ld_tmpdir\" = \"$ls_ld_tmpdir_1\"\n"
"\t\t   }\n"
"\t\t }\n"
"\t      then posix_mkdir=:\n"
"\t      fi\n"
"\t      rmdir \"$tmpdir/d\" \"$tmpdir\"\n"
"\t    else\n"
"\t      # Remove any dirs left behind by ancient mkdir implementations.\n"
"\t      rmdir ./$mkdir_mode ./-p ./-- 2>/dev/null\n"
"\t    fi\n"
"\t    trap '' 0;;\n"
"\tesac;;\n"
"    esac\n"
"\n"
"    if\n"
"      $posix_mkdir && (\n"
"\tumask $mkdir_umask &&\n"
"\t$doit_exec $mkdirprog $mkdir_mode -p -- \"$dstdir\"\n"
"      )\n"
"    then :\n"
"    else\n"
"\n"
"      # The umask is ridiculous, or mkdir does not conform to POSIX,\n"
"      # or it failed possibly due to a race condition.  Create the\n"
"      # directory the slow way, step by step, checking for races as we go.\n"
"\n"
"      case $dstdir in\n"
"\t/*) prefix='/';;\n"
"\t[-=\\(\\)!]*) prefix='./';;\n"
"\t*)  prefix='';;\n"
"      esac\n"
"\n"
"      eval \"$initialize_posix_glob\"\n"
"\n"
"      oIFS=$IFS\n"
"      IFS=/\n"
"      $posix_glob set -f\n"
"      set fnord $dstdir\n"
"      shift\n"
"      $posix_glob set +f\n"
"      IFS=$oIFS\n"
"\n"
"      prefixes=\n"
"\n"
"      for d\n"
"      do\n"
"\ttest X\"$d\" = X && continue\n"
"\n"
"\tprefix=$prefix$d\n"
"\tif test -d \"$prefix\"; then\n"
"\t  prefixes=\n"
"\telse\n"
"\t  if $posix_mkdir; then\n"
"\t    (umask=$mkdir_umask &&\n"
"\t     $doit_exec $mkdirprog $mkdir_mode -p -- \"$dstdir\") && break\n"
"\t    # Don't fail if two instances are running concurrently.\n"
"\t    test -d \"$prefix\" || exit 1\n"
"\t  else\n"
"\t    case $prefix in\n"
"\t      *\\'*) qprefix=`echo \"$prefix\" | sed \"s/'/'\\\\\\\\\\\\\\\\''/g\"`;;\n"
"\t      *) qprefix=$prefix;;\n"
"\t    esac\n"
"\t    prefixes=\"$prefixes '$qprefix'\"\n"
"\t  fi\n"
"\tfi\n"
"\tprefix=$prefix/\n"
"      done\n"
"\n"
"      if test -n \"$prefixes\"; then\n"
"\t# Don't fail if two instances are running concurrently.\n"
"\t(umask $mkdir_umask &&\n"
"\t eval \"\\$doit_exec \\$mkdirprog $prefixes\") ||\n"
"\t  test -d \"$dstdir\" || exit 1\n"
"\tobsolete_mkdir_used=true\n"
"      fi\n"
"    fi\n"
"  fi\n"
"\n"
"  if test -n \"$dir_arg\"; then\n"
"    { test -z \"$chowncmd\" || $doit $chowncmd \"$dst\"; } &&\n"
"    { test -z \"$chgrpcmd\" || $doit $chgrpcmd \"$dst\"; } &&\n"
"    { test \"$obsolete_mkdir_used$chowncmd$chgrpcmd\" = false ||\n"
"      test -z \"$chmodcmd\" || $doit $chmodcmd $mode \"$dst\"; } || exit 1\n"
"  else\n"
"\n"
"    # Make a couple of temp file names in the proper directory.\n"
"    dsttmp=$dstdir/_inst.$$_\n"
"    rmtmp=$dstdir/_rm.$$_\n"
"\n"
"    # Trap to clean up those temp files at exit.\n"
"    trap 'ret=$?; rm -f \"$dsttmp\" \"$rmtmp\" && exit $ret' 0\n"
"\n"
"    # Copy the file name to the temp name.\n"
"    (umask $cp_umask && $doit_exec $cpprog \"$src\" \"$dsttmp\") &&\n"
"\n"
"    # and set any options; do chmod last to preserve setuid bits.\n"
"    #\n"
"    # If any of these fail, we abort the whole thing.  If we want to\n"
"    # ignore errors from any of these, just make sure not to ignore\n"
"    # errors from the above \"$doit $cpprog $src $dsttmp\" command.\n"
"    #\n"
"    { test -z \"$chowncmd\" || $doit $chowncmd \"$dsttmp\"; } &&\n"
"    { test -z \"$chgrpcmd\" || $doit $chgrpcmd \"$dsttmp\"; } &&\n"
"    { test -z \"$stripcmd\" || $doit $stripcmd \"$dsttmp\"; } &&\n"
"    { test -z \"$chmodcmd\" || $doit $chmodcmd $mode \"$dsttmp\"; } &&\n"
"\n"
"    # If -C, don't bother to copy if it wouldn't change the file.\n"
"    if $copy_on_change &&\n"
"       old=`LC_ALL=C ls -dlL \"$dst\"\t2>/dev/null` &&\n"
"       new=`LC_ALL=C ls -dlL \"$dsttmp\"\t2>/dev/null` &&\n"
"\n"
"       eval \"$initialize_posix_glob\" &&\n"
"       $posix_glob set -f &&\n"
"       set X $old && old=:$2:$4:$5:$6 &&\n"
"       set X $new && new=:$2:$4:$5:$6 &&\n"
"       $posix_glob set +f &&\n"
"\n"
"       test \"$old\" = \"$new\" &&\n"
"       $cmpprog \"$dst\" \"$dsttmp\" >/dev/null 2>&1\n"
"    then\n"
"      rm -f \"$dsttmp\"\n"
"    else\n"
"      # Rename the file to the real destination.\n"
"      $doit $mvcmd -f \"$dsttmp\" \"$dst\" 2>/dev/null ||\n"
"\n"
"      # The rename failed, perhaps because mv can't rename something else\n"
"      # to itself, or perhaps because mv is so ancient that it does not\n"
"      # support -f.\n"
"      {\n"
"\t# Now remove or move aside any old file at destination location.\n"
"\t# We try this two ways since rm can't unlink itself on some\n"
"\t# systems and the destination file might be busy for other\n"
"\t# reasons.  In this case, the final cleanup might fail but the new\n"
"\t# file should still install successfully.\n"
"\t{\n"
"\t  test ! -f \"$dst\" ||\n"
"\t  $doit $rmcmd -f \"$dst\" 2>/dev/null ||\n"
"\t  { $doit $mvcmd -f \"$dst\" \"$rmtmp\" 2>/dev/null &&\n"
"\t    { $doit $rmcmd -f \"$rmtmp\" 2>/dev/null; :; }\n"
"\t  } ||\n"
"\t  { echo \"$0: cannot unlink or rename $dst\" >&2\n"
"\t    (exit 1); exit 1\n"
"\t  }\n"
"\t} &&\n"
"\n"
"\t# Now rename the file to the real destination.\n"
"\t$doit $mvcmd \"$dsttmp\" \"$dst\"\n"
"      }\n"
"    fi || exit 1\n"
"\n"
"    trap '' 0\n"
"  fi\n"
"done\n"
"\n"
"# Local variables:\n"
"# eval: (add-hook 'write-file-hooks 'time-stamp)\n"
"# time-stamp-start: \"scriptversion=\"\n"
"# time-stamp-format: \"%:y-%02m-%02d.%02H\"\n"
"# time-stamp-time-zone: \"UTC\"\n"
"# time-stamp-end: \"; # UTC\"\n"
"# End:\n";

const char* installsh = (const char*) temp_binary_data_23;

//================== LICENSE.txt ==================
static const unsigned char temp_binary_data_24[] =
"                    GNU GENERAL PUBLIC LICENSE\n"
"                       Version 2, June 1991\n"
"\n"
" Copyright (C) 1989, 1991 Free Software Foundation, Inc.,\n"
" 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA\n"
" Everyone is permitted to copy and distribute verbatim copies\n"
" of this license document, but changing it is not allowed.\n"
"\n"
"                            Preamble\n"
"\n"
"  The licenses for most software are designed to take away your\n"
"freedom to share and change it.  By contrast, the GNU General Public\n"
"License is intended to guarantee your freedom to share and change free\n"
"software--to make sure the software is free for all its users.  This\n"
"General Public License applies to most of the Free Software\n"
"Foundation's software and to any other program whose authors commit to\n"
"using it.  (Some other Free Software Foundation software is covered by\n"
"the GNU Lesser General Public License instead.)  You can apply it to\n"
"your programs, too.\n"
"\n"
"  When we speak of free software, we are referring to freedom, not\n"
"price.  Our General Public Licenses are designed to make sure that you\n"
"have the freedom to distribute copies of free software (and charge for\n"
"this service if you wish), that you receive source code or can get it\n"
"if you want it, that you can change the software or use pieces of it\n"
"in new free programs; and that you know you can do these things.\n"
"\n"
"  To protect your rights, we need to make restrictions that forbid\n"
"anyone to deny you these rights or to ask you to surrender the rights.\n"
"These restrictions translate to certain responsibilities for you if you\n"
"distribute copies of the software, or if you modify it.\n"
"\n"
"  For example, if you distribute copies of such a program, whether\n"
"gratis or for a fee, you must give the recipients all the rights that\n"
"you have.  You must make sure that they, too, receive or can get the\n"
"source code.  And you must show them these terms so they know their\n"
"rights.\n"
"\n"
"  We protect your rights with two steps: (1) copyright the software, and\n"
"(2) offer you this license which gives you legal permission to copy,\n"
"distribute and/or modify the software.\n"
"\n"
"  Also, for each author's protection and ours, we want to make certain\n"
"that everyone understands that there is no warranty for this free\n"
"software.  If the software is modified by someone else and passed on, we\n"
"want its recipients to know that what they have is not the original, so\n"
"that any problems introduced by others will not reflect on the original\n"
"authors' reputations.\n"
"\n"
"  Finally, any free program is threatened constantly by software\n"
"patents.  We wish to avoid the danger that redistributors of a free\n"
"program will individually obtain patent licenses, in effect making the\n"
"program proprietary.  To prevent this, we have made it clear that any\n"
"patent must be licensed for everyone's free use or not licensed at all.\n"
"\n"
"  The precise terms and conditions for copying, distribution and\n"
"modification follow.\n"
"\n"
"                    GNU GENERAL PUBLIC LICENSE\n"
"   TERMS AND CONDITIONS FOR COPYING, DISTRIBUTION AND MODIFICATION\n"
"\n"
"  0. This License applies to any program or other work which contains\n"
"a notice placed by the copyright holder saying it may be distributed\n"
"under the terms of this General Public License.  The \"Program\", below,\n"
"refers to any such program or work, and a \"work based on the Program\"\n"
"means either the Program or any derivative work under copyright law:\n"
"that is to say, a work containing the Program or a portion of it,\n"
"either verbatim or with modifications and/or translated into another\n"
"language.  (Hereinafter, translation is included without limitation in\n"
"the term \"modification\".)  Each licensee is addressed as \"you\".\n"
"\n"
"Activities other than copying, distribution and modification are not\n"
"covered by this License; they are outside its scope.  The act of\n"
"running the Program is not restricted, and the output from the Program\n"
"is covered only if its contents constitute a work based on the\n"
"Program (independent of having been made by running the Program).\n"
"Whether that is true depends on what the Program does.\n"
"\n"
"  1. You may copy and distribute verbatim copies of the Program's\n"
"source code as you receive it, in any medium, provided that you\n"
"conspicuously and appropriately publish on each copy an appropriate\n"
"copyright notice and disclaimer of warranty; keep intact all the\n"
"notices that refer to this License and to the absence of any warranty;\n"
"and give any other recipients of the Program a copy of this License\n"
"along with the Program.\n"
"\n"
"You may charge a fee for the physical act of transferring a copy, and\n"
"you may at your option offer warranty protection in exchange for a fee.\n"
"\n"
"  2. You may modify your copy or copies of the Program or any portion\n"
"of it, thus forming a work based on the Program, and copy and\n"
"distribute such modifications or work under the terms of Section 1\n"
"above, provided that you also meet all of these conditions:\n"
"\n"
"    a) You must cause the modified files to carry prominent notices\n"
"    stating that you changed the files and the date of any change.\n"
"\n"
"    b) You must cause any work that you distribute or publish, that in\n"
"    whole or in part contains or is derived from the Program or any\n"
"    part thereof, to be licensed as a whole at no charge to all third\n"
"    parties under the terms of this License.\n"
"\n"
"    c) If the modified program normally reads commands interactively\n"
"    when run, you must cause it, when started running for such\n"
"    interactive use in the most ordinary way, to print or display an\n"
"    announcement including an appropriate copyright notice and a\n"
"    notice that there is no warranty (or else, saying that you provide\n"
"    a warranty) and that users may redistribute the program under\n"
"    these conditions, and telling the user how to view a copy of this\n"
"    License.  (Exception: if the Program itself is interactive but\n"
"    does not normally print such an announcement, your work based on\n"
"    the Program is not required to print an announcement.)\n"
"\n"
"These requirements apply to the modified work as a whole.  If\n"
"identifiable sections of that work are not derived from the Program,\n"
"and can be reasonably considered independent and separate works in\n"
"themselves, then this License, and its terms, do not apply to those\n"
"sections when you distribute them as separate works.  But when you\n"
"distribute the same sections as part of a whole which is a work based\n"
"on the Program, the distribution of the whole must be on the terms of\n"
"this License, whose permissions for other licensees extend to the\n"
"entire whole, and thus to each and every part regardless of who wrote it.\n"
"\n"
"Thus, it is not the intent of this section to claim rights or contest\n"
"your rights to work written entirely by you; rather, the intent is to\n"
"exercise the right to control the distribution of derivative or\n"
"collective works based on the Program.\n"
"\n"
"In addition, mere aggregation of another work not based on the Program\n"
"with the Program (or with a work based on the Program) on a volume of\n"
"a storage or distribution medium does not bring the other work under\n"
"the scope of this License.\n"
"\n"
"  3. You may copy and distribute the Program (or a work based on it,\n"
"under Section 2) in object code or executable form under the terms of\n"
"Sections 1 and 2 above provided that you also do one of the following:\n"
"\n"
"    a) Accompany it with the complete corresponding machine-readable\n"
"    source code, which must be distributed under the terms of Sections\n"
"    1 and 2 above on a medium customarily used for software interchange; or,\n"
"\n"
"    b) Accompany it with a written offer, valid for at least three\n"
"    years, to give any third party, for a charge no more than your\n"
"    cost of physically performing source distribution, a complete\n"
"    machine-readable copy of the corresponding source code, to be\n"
"    distributed under the terms of Sections 1 and 2 above on a medium\n"
"    customarily used for software interchange; or,\n"
"\n"
"    c) Accompany it with the information you received as to the offer\n"
"    to distribute corresponding source code.  (This alternative is\n"
"    allowed only for noncommercial distribution and only if you\n"
"    received the program in object code or executable form with such\n"
"    an offer, in accord with Subsection b above.)\n"
"\n"
"The source code for a work means the preferred form of the work for\n"
"making modifications to it.  For an executable work, complete source\n"
"code means all the source code for all modules it contains, plus any\n"
"associated interface definition files, plus the scripts used to\n"
"control compilation and installation of the executable.  However, as a\n"
"special exception, the source code distributed need not include\n"
"anything that is normally distributed (in either source or binary\n"
"form) with the major components (compiler, kernel, and so on) of the\n"
"operating system on which the executable runs, unless that component\n"
"itself accompanies the executable.\n"
"\n"
"If distribution of executable or object code is made by offering\n"
"access to copy from a designated place, then offering equivalent\n"
"access to copy the source code from the same place counts as\n"
"distribution of the source code, even though third parties are not\n"
"compelled to copy the source along with the object code.\n"
"\n"
"  4. You may not copy, modify, sublicense, or distribute the Program\n"
"except as expressly provided under this License.  Any attempt\n"
"otherwise to copy, modify, sublicense or distribute the Program is\n"
"void, and will automatically terminate your rights under this License.\n"
"However, parties who have received copies, or rights, from you under\n"
"this License will not have their licenses terminated so long as such\n"
"parties remain in full compliance.\n"
"\n"
"  5. You are not required to accept this License, since you have not\n"
"signed it.  However, nothing else grants you permission to modify or\n"
"distribute the Program or its derivative works.  These actions are\n"
"prohibited by law if you do not accept this License.  Therefore, by\n"
"modifying or distributing the Program (or any work based on the\n"
"Program), you indicate your acceptance of this License to do so, and\n"
"all its terms and conditions for copying, distributing or modifying\n"
"the Program or works based on it.\n"
"\n"
"  6. Each time you redistribute the Program (or any work based on the\n"
"Program), the recipient automatically receives a license from the\n"
"original licensor to copy, distribute or modify the Program subject to\n"
"these terms and conditions.  You may not impose any further\n"
"restrictions on the recipients' exercise of the rights granted herein.\n"
"You are not responsible for enforcing compliance by third parties to\n"
"this License.\n"
"\n"
"  7. If, as a consequence of a court judgment or allegation of patent\n"
"infringement or for any other reason (not limited to patent issues),\n"
"conditions are imposed on you (whether by court order, agreement or\n"
"otherwise) that contradict the conditions of this License, they do not\n"
"excuse you from the conditions of this License.  If you cannot\n"
"distribute so as to satisfy simultaneously your obligations under this\n"
"License and any other pertinent obligations, then as a consequence you\n"
"may not distribute the Program at all.  For example, if a patent\n"
"license would not permit royalty-free redistribution of the Program by\n"
"all those who receive copies directly or indirectly through you, then\n"
"the only way you could satisfy both it and this License would be to\n"
"refrain entirely from distribution of the Program.\n"
"\n"
"If any portion of this section is held invalid or unenforceable under\n"
"any particular circumstance, the balance of the section is intended to\n"
"apply and the section as a whole is intended to apply in other\n"
"circumstances.\n"
"\n"
"It is not the purpose of this section to induce you to infringe any\n"
"patents or other property right claims or to contest validity of any\n"
"such claims; this section has the sole purpose of protecting the\n"
"integrity of the free software distribution system, which is\n"
"implemented by public license practices.  Many people have made\n"
"generous contributions to the wide range of software distributed\n"
"through that system in reliance on consistent application of that\n"
"system; it is up to the author/donor to decide if he or she is willing\n"
"to distribute software through any other system and a licensee cannot\n"
"impose that choice.\n"
"\n"
"This section is intended to make thoroughly clear what is believed to\n"
"be a consequence of the rest of this License.\n"
"\n"
"  8. If the distribution and/or use of the Program is restricted in\n"
"certain countries either by patents or by copyrighted interfaces, the\n"
"original copyright holder who places the Program under this License\n"
"may add an explicit geographical distribution limitation excluding\n"
"those countries, so that distribution is permitted only in or among\n"
"countries not thus excluded.  In such case, this License incorporates\n"
"the limitation as if written in the body of this License.\n"
"\n"
"  9. The Free Software Foundation may publish revised and/or new versions\n"
"of the General Public License from time to time.  Such new versions will\n"
"be similar in spirit to the present version, but may differ in detail to\n"
"address new problems or concerns.\n"
"\n"
"Each version is given a distinguishing version number.  If the Program\n"
"specifies a version number of this License which applies to it and \"any\n"
"later version\", you have the option of following the terms and conditions\n"
"either of that version or of any later version published by the Free\n"
"Software Foundation.  If the Program does not specify a version number of\n"
"this License, you may choose any version ever published by the Free Software\n"
"Foundation.\n"
"\n"
"  10. If you wish to incorporate parts of the Program into other free\n"
"programs whose distribution conditions are different, write to the author\n"
"to ask for permission.  For software which is copyrighted by the Free\n"
"Software Foundation, write to the Free Software Foundation; we sometimes\n"
"make exceptions for this.  Our decision will be guided by the two goals\n"
"of preserving the free status of all derivatives of our free software and\n"
"of promoting the sharing and reuse of software generally.\n"
"\n"
"                            NO WARRANTY\n"
"\n"
"  11. BECAUSE THE PROGRAM IS LICENSED FREE OF CHARGE, THERE IS NO WARRANTY\n"
"FOR THE PROGRAM, TO THE EXTENT PERMITTED BY APPLICABLE LAW.  EXCEPT WHEN\n"
"OTHERWISE STATED IN WRITING THE COPYRIGHT HOLDERS AND/OR OTHER PARTIES\n"
"PROVIDE THE PROGRAM \"AS IS\" WITHOUT WARRANTY OF ANY KIND, EITHER EXPRESSED\n"
"OR IMPLIED, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF\n"
"MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.  THE ENTIRE RISK AS\n"
"TO THE QUALITY AND PERFORMANCE OF THE PROGRAM IS WITH YOU.  SHOULD THE\n"
"PROGRAM PROVE DEFECTIVE, YOU ASSUME THE COST OF ALL NECESSARY SERVICING,\n"
"REPAIR OR CORRECTION.\n"
"\n"
"  12. IN NO EVENT UNLESS REQUIRED BY APPLICABLE LAW OR AGREED TO IN WRITING\n"
"WILL ANY COPYRIGHT HOLDER, OR ANY OTHER PARTY WHO MAY MODIFY AND/OR\n"
"REDISTRIBUTE THE PROGRAM AS PERMITTED ABOVE, BE LIABLE TO YOU FOR DAMAGES,\n"
"INCLUDING ANY GENERAL, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES ARISING\n"
"OUT OF THE USE OR INABILITY TO USE THE PROGRAM (INCLUDING BUT NOT LIMITED\n"
"TO LOSS OF DATA OR DATA BEING RENDERED INACCURATE OR LOSSES SUSTAINED BY\n"
"YOU OR THIRD PARTIES OR A FAILURE OF THE PROGRAM TO OPERATE WITH ANY OTHER\n"
"PROGRAMS), EVEN IF SUCH HOLDER OR OTHER PARTY HAS BEEN ADVISED OF THE\n"
"POSSIBILITY OF SUCH DAMAGES.\n"
"\n"
"                     END OF TERMS AND CONDITIONS\n";

const char* LICENSE_txt = (const char*) temp_binary_data_24;

//================== Makefile.am ==================
static const unsigned char temp_binary_data_25[] =
"AUTOMAKE_OPTIONS = foreign\n"
"ACLOCAL_AMFLAGS = -I m4\n"
"\n"
"SUBDIRS = src abs reference\n"
"SUBDIRS += tests build\n"
"\n"
"zexydir=$(pkglibdir)\n"
"dist_zexy_DATA = \\\n"
"\tAUTHORS \\\n"
"\tREADME.txt \\\n"
"\tINSTALL \\\n"
"\tLICENSE.txt \\\n"
"\tChangeLog \\\n"
"\tzexy-meta.pd\n"
"\n"
"LIBTOOL_DEPS = @LIBTOOL_DEPS@\n"
"libtool: $(LIBTOOL_DEPS)\n"
"\t$(SHELL) ./config.status libtool\n";

const char* Makefile_am = (const char*) temp_binary_data_25;

//================== Makefile.in ==================
static const unsigned char temp_binary_data_26[] =
"# Makefile.in generated by automake 1.11.3 from Makefile.am.\n"
"# @configure_input@\n"
"\n"
"# Copyright (C) 1994, 1995, 1996, 1997, 1998, 1999, 2000, 2001, 2002,\n"
"# 2003, 2004, 2005, 2006, 2007, 2008, 2009, 2010, 2011 Free Software\n"
"# Foundation, Inc.\n"
"# This Makefile.in is free software; the Free Software Foundation\n"
"# gives unlimited permission to copy and/or distribute it,\n"
"# with or without modifications, as long as this notice is preserved.\n"
"\n"
"# This program is distributed in the hope that it will be useful,\n"
"# but WITHOUT ANY WARRANTY, to the extent permitted by law; without\n"
"# even the implied warranty of MERCHANTABILITY or FITNESS FOR A\n"
"# PARTICULAR PURPOSE.\n"
"\n"
"@SET_MAKE@\n"
"\n"
"VPATH = @srcdir@\n"
"pkgdatadir = $(datadir)/@PACKAGE@\n"
"pkgincludedir = $(includedir)/@PACKAGE@\n"
"pkglibdir = $(libdir)/@PACKAGE@\n"
"pkglibexecdir = $(libexecdir)/@PACKAGE@\n"
"am__cd = CDPATH=\"$${ZSH_VERSION+.}$(PATH_SEPARATOR)\" && cd\n"
"install_sh_DATA = $(install_sh) -c -m 644\n"
"install_sh_PROGRAM = $(install_sh) -c\n"
"install_sh_SCRIPT = $(install_sh) -c\n"
"INSTALL_HEADER = $(INSTALL_DATA)\n"
"transform = $(program_transform_name)\n"
"NORMAL_INSTALL = :\n"
"PRE_INSTALL = :\n"
"POST_INSTALL = :\n"
"NORMAL_UNINSTALL = :\n"
"PRE_UNINSTALL = :\n"
"POST_UNINSTALL = :\n"
"build_triplet = @build@\n"
"host_triplet = @host@\n"
"subdir = .\n"
"DIST_COMMON = $(am__configure_deps) $(dist_zexy_DATA) \\\n"
"\t$(srcdir)/Makefile.am $(srcdir)/Makefile.in \\\n"
"\t$(srcdir)/config.h.in $(srcdir)/zexy-meta.pd.in \\\n"
"\t$(top_srcdir)/configure AUTHORS ChangeLog INSTALL config.guess \\\n"
"\tconfig.sub depcomp install-sh ltmain.sh missing\n"
"ACLOCAL_M4 = $(top_srcdir)/aclocal.m4\n"
"am__aclocal_m4_deps = $(top_srcdir)/m4/iem_checkflags.m4 \\\n"
"\t$(top_srcdir)/m4/iem_fat.m4 \\\n"
"\t$(top_srcdir)/m4/iem_operatingsystem.m4 \\\n"
"\t$(top_srcdir)/m4/iem_parallelport.m4 \\\n"
"\t$(top_srcdir)/m4/iem_simd.m4 $(top_srcdir)/m4/libtool.m4 \\\n"
"\t$(top_srcdir)/m4/ltoptions.m4 $(top_srcdir)/m4/ltsugar.m4 \\\n"
"\t$(top_srcdir)/m4/ltversion.m4 $(top_srcdir)/m4/lt~obsolete.m4 \\\n"
"\t$(top_srcdir)/configure.ac\n"
"am__configure_deps = $(am__aclocal_m4_deps) $(CONFIGURE_DEPENDENCIES) \\\n"
"\t$(ACLOCAL_M4)\n"
"am__CONFIG_DISTCLEAN_FILES = config.status config.cache config.log \\\n"
" configure.lineno config.status.lineno\n"
"mkinstalldirs = $(install_sh) -d\n"
"CONFIG_HEADER = config.h\n"
"CONFIG_CLEAN_FILES = zexy-meta.pd\n"
"CONFIG_CLEAN_VPATH_FILES =\n"
"SOURCES =\n"
"DIST_SOURCES =\n"
"RECURSIVE_TARGETS = all-recursive check-recursive dvi-recursive \\\n"
"\thtml-recursive info-recursive install-data-recursive \\\n"
"\tinstall-dvi-recursive install-exec-recursive \\\n"
"\tinstall-html-recursive install-info-recursive \\\n"
"\tinstall-pdf-recursive install-ps-recursive install-recursive \\\n"
"\tinstallcheck-recursive installdirs-recursive pdf-recursive \\\n"
"\tps-recursive uninstall-recursive\n"
"am__vpath_adj_setup = srcdirstrip=`echo \"$(srcdir)\" | sed 's|.|.|g'`;\n"
"am__vpath_adj = case $$p in \\\n"
"    $(srcdir)/*) f=`echo \"$$p\" | sed \"s|^$$srcdirstrip/||\"`;; \\\n"
"    *) f=$$p;; \\\n"
"  esac;\n"
"am__strip_dir = f=`echo $$p | sed -e 's|^.*/||'`;\n"
"am__install_max = 40\n"
"am__nobase_strip_setup = \\\n"
"  srcdirstrip=`echo \"$(srcdir)\" | sed 's/[].[^$$\\\\*|]/\\\\\\\\&/g'`\n"
"am__nobase_strip = \\\n"
"  for p in $$list; do echo \"$$p\"; done | sed -e \"s|$$srcdirstrip/||\"\n"
"am__nobase_list = $(am__nobase_strip_setup); \\\n"
"  for p in $$list; do echo \"$$p $$p\"; done | \\\n"
"  sed \"s| $$srcdirstrip/| |;\"' / .*\\//!s/ .*/ ./; s,\\( .*\\)/[^/]*$$,\\1,' | \\\n"
"  $(AWK) 'BEGIN { files[\".\"] = \"\" } { files[$$2] = files[$$2] \" \" $$1; \\\n"
"    if (++n[$$2] == $(am__install_max)) \\\n"
"      { print $$2, files[$$2]; n[$$2] = 0; files[$$2] = \"\" } } \\\n"
"    END { for (dir in files) print dir, files[dir] }'\n"
"am__base_list = \\\n"
"  sed '$$!N;$$!N;$$!N;$$!N;$$!N;$$!N;$$!N;s/\\n/ /g' | \\\n"
"  sed '$$!N;$$!N;$$!N;$$!N;s/\\n/ /g'\n"
"am__uninstall_files_from_dir = { \\\n"
"  test -z \"$$files\" \\\n"
"    || { test ! -d \"$$dir\" && test ! -f \"$$dir\" && test ! -r \"$$dir\"; } \\\n"
"    || { echo \" ( cd '$$dir' && rm -f\" $$files \")\"; \\\n"
"         $(am__cd) \"$$dir\" && rm -f $$files; }; \\\n"
"  }\n"
"am__installdirs = \"$(DESTDIR)$(zexydir)\"\n"
"DATA = $(dist_zexy_DATA)\n"
"RECURSIVE_CLEAN_TARGETS = mostlyclean-recursive clean-recursive\t\\\n"
"  distclean-recursive maintainer-clean-recursive\n"
"AM_RECURSIVE_TARGETS = $(RECURSIVE_TARGETS:-recursive=) \\\n"
"\t$(RECURSIVE_CLEAN_TARGETS:-recursive=) tags TAGS ctags CTAGS \\\n"
"\tdistdir dist dist-all distcheck\n"
"ETAGS = etags\n"
"CTAGS = ctags\n"
"DIST_SUBDIRS = $(SUBDIRS)\n"
"DISTFILES = $(DIST_COMMON) $(DIST_SOURCES) $(TEXINFOS) $(EXTRA_DIST)\n"
"distdir = $(PACKAGE)-$(VERSION)\n"
"top_distdir = $(distdir)\n"
"am__remove_distdir = \\\n"
"  if test -d \"$(distdir)\"; then \\\n"
"    find \"$(distdir)\" -type d ! -perm -200 -exec chmod u+w {} ';' \\\n"
"      && rm -rf \"$(distdir)\" \\\n"
"      || { sleep 5 && rm -rf \"$(distdir)\"; }; \\\n"
"  else :; fi\n"
"am__relativize = \\\n"
"  dir0=`pwd`; \\\n"
"  sed_first='s,^\\([^/]*\\)/.*$$,\\1,'; \\\n"
"  sed_rest='s,^[^/]*/*,,'; \\\n"
"  sed_last='s,^.*/\\([^/]*\\)$$,\\1,'; \\\n"
"  sed_butlast='s,/*[^/]*$$,,'; \\\n"
"  while test -n \"$$dir1\"; do \\\n"
"    first=`echo \"$$dir1\" | sed -e \"$$sed_first\"`; \\\n"
"    if test \"$$first\" != \".\"; then \\\n"
"      if test \"$$first\" = \"..\"; then \\\n"
"        dir2=`echo \"$$dir0\" | sed -e \"$$sed_last\"`/\"$$dir2\"; \\\n"
"        dir0=`echo \"$$dir0\" | sed -e \"$$sed_butlast\"`; \\\n"
"      else \\\n"
"        first2=`echo \"$$dir2\" | sed -e \"$$sed_first\"`; \\\n"
"        if test \"$$first2\" = \"$$first\"; then \\\n"
"          dir2=`echo \"$$dir2\" | sed -e \"$$sed_rest\"`; \\\n"
"        else \\\n"
"          dir2=\"../$$dir2\"; \\\n"
"        fi; \\\n"
"        dir0=\"$$dir0\"/\"$$first\"; \\\n"
"      fi; \\\n"
"    fi; \\\n"
"    dir1=`echo \"$$dir1\" | sed -e \"$$sed_rest\"`; \\\n"
"  done; \\\n"
"  reldir=\"$$dir2\"\n"
"DIST_ARCHIVES = $(distdir).tar.gz\n"
"GZIP_ENV = --best\n"
"distuninstallcheck_listfiles = find . -type f -print\n"
"am__distuninstallcheck_listfiles = $(distuninstallcheck_listfiles) \\\n"
"  | sed 's|^\\./|$(prefix)/|' | grep -v '$(infodir)/dir$$'\n"
"distcleancheck_listfiles = find . -type f -print\n"
"ACLOCAL = @ACLOCAL@\n"
"AMTAR = @AMTAR@\n"
"AR = @AR@\n"
"ARCH_FLAG = @ARCH_FLAG@\n"
"AS = @AS@\n"
"AUTOCONF = @AUTOCONF@\n"
"AUTOHEADER = @AUTOHEADER@\n"
"AUTOMAKE = @AUTOMAKE@\n"
"AWK = @AWK@\n"
"CC = @CC@\n"
"CCDEPMODE = @CCDEPMODE@\n"
"CFLAGS = @CFLAGS@\n"
"CPP = @CPP@\n"
"CPPFLAGS = @CPPFLAGS@\n"
"CYGPATH_W = @CYGPATH_W@\n"
"DEFS = @DEFS@\n"
"DEPDIR = @DEPDIR@\n"
"DLLTOOL = @DLLTOOL@\n"
"DSYMUTIL = @DSYMUTIL@\n"
"DUMPBIN = @DUMPBIN@\n"
"ECHO_C = @ECHO_C@\n"
"ECHO_N = @ECHO_N@\n"
"ECHO_T = @ECHO_T@\n"
"EGREP = @EGREP@\n"
"EXEEXT = @EXEEXT@\n"
"EXTENSION = @EXTENSION@\n"
"EXTRA_LTFLAGS = @EXTRA_LTFLAGS@\n"
"FGREP = @FGREP@\n"
"GREP = @GREP@\n"
"INCLUDES = @INCLUDES@\n"
"INSTALL = @INSTALL@\n"
"INSTALL_DATA = @INSTALL_DATA@\n"
"INSTALL_PROGRAM = @INSTALL_PROGRAM@\n"
"INSTALL_SCRIPT = @INSTALL_SCRIPT@\n"
"INSTALL_STRIP_PROGRAM = @INSTALL_STRIP_PROGRAM@\n"
"LD = @LD@\n"
"LDFLAGS = @LDFLAGS@\n"
"LIBOBJS = @LIBOBJS@\n"
"LIBS = @LIBS@\n"
"LIBTOOL = @LIBTOOL@\n"
"LIBTOOL_DEPS = @LIBTOOL_DEPS@\n"
"LIPO = @LIPO@\n"
"LN_S = @LN_S@\n"
"LTLIBOBJS = @LTLIBOBJS@\n"
"MAKEINFO = @MAKEINFO@\n"
"MANIFEST_TOOL = @MANIFEST_TOOL@\n"
"MKDIR_P = @MKDIR_P@\n"
"NM = @NM@\n"
"NMEDIT = @NMEDIT@\n"
"OBJDUMP = @OBJDUMP@\n"
"OBJEXT = @OBJEXT@\n"
"OTOOL = @OTOOL@\n"
"OTOOL64 = @OTOOL64@\n"
"PACKAGE = @PACKAGE@\n"
"PACKAGE_BUGREPORT = @PACKAGE_BUGREPORT@\n"
"PACKAGE_NAME = @PACKAGE_NAME@\n"
"PACKAGE_STRING = @PACKAGE_STRING@\n"
"PACKAGE_TARNAME = @PACKAGE_TARNAME@\n"
"PACKAGE_URL = @PACKAGE_URL@\n"
"PACKAGE_VERSION = @PACKAGE_VERSION@\n"
"PATH_SEPARATOR = @PATH_SEPARATOR@\n"
"RANLIB = @RANLIB@\n"
"SED = @SED@\n"
"SET_MAKE = @SET_MAKE@\n"
"SHELL = @SHELL@\n"
"STRIP = @STRIP@\n"
"VERSION = @VERSION@\n"
"abs_builddir = @abs_builddir@\n"
"abs_srcdir = @abs_srcdir@\n"
"abs_top_builddir = @abs_top_builddir@\n"
"abs_top_srcdir = @abs_top_srcdir@\n"
"ac_ct_AR = @ac_ct_AR@\n"
"ac_ct_CC = @ac_ct_CC@\n"
"ac_ct_DUMPBIN = @ac_ct_DUMPBIN@\n"
"am__include = @am__include@\n"
"am__leading_dot = @am__leading_dot@\n"
"am__quote = @am__quote@\n"
"am__tar = @am__tar@\n"
"am__untar = @am__untar@\n"
"bindir = @bindir@\n"
"build = @build@\n"
"build_alias = @build_alias@\n"
"build_cpu = @build_cpu@\n"
"build_os = @build_os@\n"
"build_vendor = @build_vendor@\n"
"builddir = @builddir@\n"
"datadir = @datadir@\n"
"datarootdir = @datarootdir@\n"
"docdir = @docdir@\n"
"dvidir = @dvidir@\n"
"exec_prefix = @exec_prefix@\n"
"host = @host@\n"
"host_alias = @host_alias@\n"
"host_cpu = @host_cpu@\n"
"host_os = @host_os@\n"
"host_vendor = @host_vendor@\n"
"htmldir = @htmldir@\n"
"includedir = @includedir@\n"
"infodir = @infodir@\n"
"install_sh = @install_sh@\n"
"libdir = @libdir@\n"
"libexecdir = @libexecdir@\n"
"localedir = @localedir@\n"
"localstatedir = @localstatedir@\n"
"mandir = @mandir@\n"
"mkdir_p = @mkdir_p@\n"
"oldincludedir = @oldincludedir@\n"
"pdfdir = @pdfdir@\n"
"prefix = @prefix@\n"
"program_transform_name = @program_transform_name@\n"
"psdir = @psdir@\n"
"sbindir = @sbindir@\n"
"sharedstatedir = @sharedstatedir@\n"
"srcdir = @srcdir@\n"
"sysconfdir = @sysconfdir@\n"
"target_alias = @target_alias@\n"
"top_build_prefix = @top_build_prefix@\n"
"top_builddir = @top_builddir@\n"
"top_srcdir = @top_srcdir@\n"
"AUTOMAKE_OPTIONS = foreign\n"
"ACLOCAL_AMFLAGS = -I m4\n"
"SUBDIRS = src abs reference tests build\n"
"zexydir = $(pkglibdir)\n"
"dist_zexy_DATA = \\\n"
"\tAUTHORS \\\n"
"\tREADME.txt \\\n"
"\tINSTALL \\\n"
"\tLICENSE.txt \\\n"
"\tChangeLog \\\n"
"\tzexy-meta.pd\n"
"\n"
"all: config.h\n"
"\t$(MAKE) $(AM_MAKEFLAGS) all-recursive\n"
"\n"
".SUFFIXES:\n"
"am--refresh: Makefile\n"
"\t@:\n"
"$(srcdir)/Makefile.in:  $(srcdir)/Makefile.am  $(am__configure_deps)\n"
"\t@for dep in $?; do \\\n"
"\t  case '$(am__configure_deps)' in \\\n"
"\t    *$$dep*) \\\n"
"\t      echo ' cd $(srcdir) && $(AUTOMAKE) --foreign'; \\\n"
"\t      $(am__cd) $(srcdir) && $(AUTOMAKE) --foreign \\\n"
"\t\t&& exit 0; \\\n"
"\t      exit 1;; \\\n"
"\t  esac; \\\n"
"\tdone; \\\n"
"\techo ' cd $(top_srcdir) && $(AUTOMAKE) --foreign Makefile'; \\\n"
"\t$(am__cd) $(top_srcdir) && \\\n"
"\t  $(AUTOMAKE) --foreign Makefile\n"
".PRECIOUS: Makefile\n"
"Makefile: $(srcdir)/Makefile.in $(top_builddir)/config.status\n"
"\t@case '$?' in \\\n"
"\t  *config.status*) \\\n"
"\t    echo ' $(SHELL) ./config.status'; \\\n"
"\t    $(SHELL) ./config.status;; \\\n"
"\t  *) \\\n"
"\t    echo ' cd $(top_builddir) && $(SHELL) ./config.status $@ $(am__depfiles_maybe)'; \\\n"
"\t    cd $(top_builddir) && $(SHELL) ./config.status $@ $(am__depfiles_maybe);; \\\n"
"\tesac;\n"
"\n"
"$(top_builddir)/config.status: $(top_srcdir)/configure $(CONFIG_STATUS_DEPENDENCIES)\n"
"\t$(SHELL) ./config.status --recheck\n"
"\n"
"$(top_srcdir)/configure:  $(am__configure_deps)\n"
"\t$(am__cd) $(srcdir) && $(AUTOCONF)\n"
"$(ACLOCAL_M4):  $(am__aclocal_m4_deps)\n"
"\t$(am__cd) $(srcdir) && $(ACLOCAL) $(ACLOCAL_AMFLAGS)\n"
"$(am__aclocal_m4_deps):\n"
"\n"
"config.h: stamp-h1\n"
"\t@if test ! -f $@; then rm -f stamp-h1; else :; fi\n"
"\t@if test ! -f $@; then $(MAKE) $(AM_MAKEFLAGS) stamp-h1; else :; fi\n"
"\n"
"stamp-h1: $(srcdir)/config.h.in $(top_builddir)/config.status\n"
"\t@rm -f stamp-h1\n"
"\tcd $(top_builddir) && $(SHELL) ./config.status config.h\n"
"$(srcdir)/config.h.in:  $(am__configure_deps) \n"
"\t($(am__cd) $(top_srcdir) && $(AUTOHEADER))\n"
"\trm -f stamp-h1\n"
"\ttouch $@\n"
"\n"
"distclean-hdr:\n"
"\t-rm -f config.h stamp-h1\n"
"zexy-meta.pd: $(top_builddir)/config.status $(srcdir)/zexy-meta.pd.in\n"
"\tcd $(top_builddir) && $(SHELL) ./config.status $@\n"
"\n"
"mostlyclean-libtool:\n"
"\t-rm -f *.lo\n"
"\n"
"clean-libtool:\n"
"\t-rm -rf .libs _libs\n"
"\n"
"distclean-libtool:\n"
"\t-rm -f libtool config.lt\n"
"install-dist_zexyDATA: $(dist_zexy_DATA)\n"
"\t@$(NORMAL_INSTALL)\n"
"\ttest -z \"$(zexydir)\" || $(MKDIR_P) \"$(DESTDIR)$(zexydir)\"\n"
"\t@list='$(dist_zexy_DATA)'; test -n \"$(zexydir)\" || list=; \\\n"
"\tfor p in $$list; do \\\n"
"\t  if test -f \"$$p\"; then d=; else d=\"$(srcdir)/\"; fi; \\\n"
"\t  echo \"$$d$$p\"; \\\n"
"\tdone | $(am__base_list) | \\\n"
"\twhile read files; do \\\n"
"\t  echo \" $(INSTALL_DATA) $$files '$(DESTDIR)$(zexydir)'\"; \\\n"
"\t  $(INSTALL_DATA) $$files \"$(DESTDIR)$(zexydir)\" || exit $$?; \\\n"
"\tdone\n"
"\n"
"uninstall-dist_zexyDATA:\n"
"\t@$(NORMAL_UNINSTALL)\n"
"\t@list='$(dist_zexy_DATA)'; test -n \"$(zexydir)\" || list=; \\\n"
"\tfiles=`for p in $$list; do echo $$p; done | sed -e 's|^.*/||'`; \\\n"
"\tdir='$(DESTDIR)$(zexydir)'; $(am__uninstall_files_from_dir)\n"
"\n"
"# This directory's subdirectories are mostly independent; you can cd\n"
"# into them and run `make' without going through this Makefile.\n"
"# To change the values of `make' variables: instead of editing Makefiles,\n"
"# (1) if the variable is set in `config.status', edit `config.status'\n"
"#     (which will cause the Makefiles to be regenerated when you run `make');\n"
"# (2) otherwise, pass the desired values on the `make' command line.\n"
"$(RECURSIVE_TARGETS):\n"
"\t@fail= failcom='exit 1'; \\\n"
"\tfor f in x $$MAKEFLAGS; do \\\n"
"\t  case $$f in \\\n"
"\t    *=* | --[!k]*);; \\\n"
"\t    *k*) failcom='fail=yes';; \\\n"
"\t  esac; \\\n"
"\tdone; \\\n"
"\tdot_seen=no; \\\n"
"\ttarget=`echo $@ | sed s/-recursive//`; \\\n"
"\tlist='$(SUBDIRS)'; for subdir in $$list; do \\\n"
"\t  echo \"Making $$target in $$subdir\"; \\\n"
"\t  if test \"$$subdir\" = \".\"; then \\\n"
"\t    dot_seen=yes; \\\n"
"\t    local_target=\"$$target-am\"; \\\n"
"\t  else \\\n"
"\t    local_target=\"$$target\"; \\\n"
"\t  fi; \\\n"
"\t  ($(am__cd) $$subdir && $(MAKE) $(AM_MAKEFLAGS) $$local_target) \\\n"
"\t  || eval $$failcom; \\\n"
"\tdone; \\\n"
"\tif test \"$$dot_seen\" = \"no\"; then \\\n"
"\t  $(MAKE) $(AM_MAKEFLAGS) \"$$target-am\" || exit 1; \\\n"
"\tfi; test -z \"$$fail\"\n"
"\n"
"$(RECURSIVE_CLEAN_TARGETS):\n"
"\t@fail= failcom='exit 1'; \\\n"
"\tfor f in x $$MAKEFLAGS; do \\\n"
"\t  case $$f in \\\n"
"\t    *=* | --[!k]*);; \\\n"
"\t    *k*) failcom='fail=yes';; \\\n"
"\t  esac; \\\n"
"\tdone; \\\n"
"\tdot_seen=no; \\\n"
"\tcase \"$@\" in \\\n"
"\t  distclean-* | maintainer-clean-*) list='$(DIST_SUBDIRS)' ;; \\\n"
"\t  *) list='$(SUBDIRS)' ;; \\\n"
"\tesac; \\\n"
"\trev=''; for subdir in $$list; do \\\n"
"\t  if test \"$$subdir\" = \".\"; then :; else \\\n"
"\t    rev=\"$$subdir $$rev\"; \\\n"
"\t  fi; \\\n"
"\tdone; \\\n"
"\trev=\"$$rev .\"; \\\n"
"\ttarget=`echo $@ | sed s/-recursive//`; \\\n"
"\tfor subdir in $$rev; do \\\n"
"\t  echo \"Making $$target in $$subdir\"; \\\n"
"\t  if test \"$$subdir\" = \".\"; then \\\n"
"\t    local_target=\"$$target-am\"; \\\n"
"\t  else \\\n"
"\t    local_target=\"$$target\"; \\\n"
"\t  fi; \\\n"
"\t  ($(am__cd) $$subdir && $(MAKE) $(AM_MAKEFLAGS) $$local_target) \\\n"
"\t  || eval $$failcom; \\\n"
"\tdone && test -z \"$$fail\"\n"
"tags-recursive:\n"
"\tlist='$(SUBDIRS)'; for subdir in $$list; do \\\n"
"\t  test \"$$subdir\" = . || ($(am__cd) $$subdir && $(MAKE) $(AM_MAKEFLAGS) tags); \\\n"
"\tdone\n"
"ctags-recursive:\n"
"\tlist='$(SUBDIRS)'; for subdir in $$list; do \\\n"
"\t  test \"$$subdir\" = . || ($(am__cd) $$subdir && $(MAKE) $(AM_MAKEFLAGS) ctags); \\\n"
"\tdone\n"
"\n"
"ID: $(HEADERS) $(SOURCES) $(LISP) $(TAGS_FILES)\n"
"\tlist='$(SOURCES) $(HEADERS) $(LISP) $(TAGS_FILES)'; \\\n"
"\tunique=`for i in $$list; do \\\n"
"\t    if test -f \"$$i\"; then echo $$i; else echo $(srcdir)/$$i; fi; \\\n"
"\t  done | \\\n"
"\t  $(AWK) '{ files[$$0] = 1; nonempty = 1; } \\\n"
"\t      END { if (nonempty) { for (i in files) print i; }; }'`; \\\n"
"\tmkid -fID $$unique\n"
"tags: TAGS\n"
"\n"
"TAGS: tags-recursive $(HEADERS) $(SOURCES) config.h.in $(TAGS_DEPENDENCIES) \\\n"
"\t\t$(TAGS_FILES) $(LISP)\n"
"\tset x; \\\n"
"\there=`pwd`; \\\n"
"\tif ($(ETAGS) --etags-include --version) >/dev/null 2>&1; then \\\n"
"\t  include_option=--etags-include; \\\n"
"\t  empty_fix=.; \\\n"
"\telse \\\n"
"\t  include_option=--include; \\\n"
"\t  empty_fix=; \\\n"
"\tfi; \\\n"
"\tlist='$(SUBDIRS)'; for subdir in $$list; do \\\n"
"\t  if test \"$$subdir\" = .; then :; else \\\n"
"\t    test ! -f $$subdir/TAGS || \\\n"
"\t      set \"$$@\" \"$$include_option=$$here/$$subdir/TAGS\"; \\\n"
"\t  fi; \\\n"
"\tdone; \\\n"
"\tlist='$(SOURCES) $(HEADERS) config.h.in $(LISP) $(TAGS_FILES)'; \\\n"
"\tunique=`for i in $$list; do \\\n"
"\t    if test -f \"$$i\"; then echo $$i; else echo $(srcdir)/$$i; fi; \\\n"
"\t  done | \\\n"
"\t  $(AWK) '{ files[$$0] = 1; nonempty = 1; } \\\n"
"\t      END { if (nonempty) { for (i in files) print i; }; }'`; \\\n"
"\tshift; \\\n"
"\tif test -z \"$(ETAGS_ARGS)$$*$$unique\"; then :; else \\\n"
"\t  test -n \"$$unique\" || unique=$$empty_fix; \\\n"
"\t  if test $$# -gt 0; then \\\n"
"\t    $(ETAGS) $(ETAGSFLAGS) $(AM_ETAGSFLAGS) $(ETAGS_ARGS) \\\n"
"\t      \"$$@\" $$unique; \\\n"
"\t  else \\\n"
"\t    $(ETAGS) $(ETAGSFLAGS) $(AM_ETAGSFLAGS) $(ETAGS_ARGS) \\\n"
"\t      $$unique; \\\n"
"\t  fi; \\\n"
"\tfi\n"
"ctags: CTAGS\n"
"CTAGS: ctags-recursive $(HEADERS) $(SOURCES) config.h.in $(TAGS_DEPENDENCIES) \\\n"
"\t\t$(TAGS_FILES) $(LISP)\n"
"\tlist='$(SOURCES) $(HEADERS) config.h.in $(LISP) $(TAGS_FILES)'; \\\n"
"\tunique=`for i in $$list; do \\\n"
"\t    if test -f \"$$i\"; then echo $$i; else echo $(srcdir)/$$i; fi; \\\n"
"\t  done | \\\n"
"\t  $(AWK) '{ files[$$0] = 1; nonempty = 1; } \\\n"
"\t      END { if (nonempty) { for (i in files) print i; }; }'`; \\\n"
"\ttest -z \"$(CTAGS_ARGS)$$unique\" \\\n"
"\t  || $(CTAGS) $(CTAGSFLAGS) $(AM_CTAGSFLAGS) $(CTAGS_ARGS) \\\n"
"\t     $$unique\n"
"\n"
"GTAGS:\n"
"\there=`$(am__cd) $(top_builddir) && pwd` \\\n"
"\t  && $(am__cd) $(top_srcdir) \\\n"
"\t  && gtags -i $(GTAGS_ARGS) \"$$here\"\n"
"\n"
"distclean-tags:\n"
"\t-rm -f TAGS ID GTAGS GRTAGS GSYMS GPATH tags\n"
"\n"
"distdir: $(DISTFILES)\n"
"\t$(am__remove_distdir)\n"
"\ttest -d \"$(distdir)\" || mkdir \"$(distdir)\"\n"
"\t@srcdirstrip=`echo \"$(srcdir)\" | sed 's/[].[^$$\\\\*]/\\\\\\\\&/g'`; \\\n"
"\ttopsrcdirstrip=`echo \"$(top_srcdir)\" | sed 's/[].[^$$\\\\*]/\\\\\\\\&/g'`; \\\n"
"\tlist='$(DISTFILES)'; \\\n"
"\t  dist_files=`for file in $$list; do echo $$file; done | \\\n"
"\t  sed -e \"s|^$$srcdirstrip/||;t\" \\\n"
"\t      -e \"s|^$$topsrcdirstrip/|$(top_builddir)/|;t\"`; \\\n"
"\tcase $$dist_files in \\\n"
"\t  */*) $(MKDIR_P) `echo \"$$dist_files\" | \\\n"
"\t\t\t   sed '/\\//!d;s|^|$(distdir)/|;s,/[^/]*$$,,' | \\\n"
"\t\t\t   sort -u` ;; \\\n"
"\tesac; \\\n"
"\tfor file in $$dist_files; do \\\n"
"\t  if test -f $$file || test -d $$file; then d=.; else d=$(srcdir); fi; \\\n"
"\t  if test -d $$d/$$file; then \\\n"
"\t    dir=`echo \"/$$file\" | sed -e 's,/[^/]*$$,,'`; \\\n"
"\t    if test -d \"$(distdir)/$$file\"; then \\\n"
"\t      find \"$(distdir)/$$file\" -type d ! -perm -700 -exec chmod u+rwx {} \\;; \\\n"
"\t    fi; \\\n"
"\t    if test -d $(srcdir)/$$file && test $$d != $(srcdir); then \\\n"
"\t      cp -fpR $(srcdir)/$$file \"$(distdir)$$dir\" || exit 1; \\\n"
"\t      find \"$(distdir)/$$file\" -type d ! -perm -700 -exec chmod u+rwx {} \\;; \\\n"
"\t    fi; \\\n"
"\t    cp -fpR $$d/$$file \"$(distdir)$$dir\" || exit 1; \\\n"
"\t  else \\\n"
"\t    test -f \"$(distdir)/$$file\" \\\n"
"\t    || cp -p $$d/$$file \"$(distdir)/$$file\" \\\n"
"\t    || exit 1; \\\n"
"\t  fi; \\\n"
"\tdone\n"
"\t@list='$(DIST_SUBDIRS)'; for subdir in $$list; do \\\n"
"\t  if test \"$$subdir\" = .; then :; else \\\n"
"\t    test -d \"$(distdir)/$$subdir\" \\\n"
"\t    || $(MKDIR_P) \"$(distdir)/$$subdir\" \\\n"
"\t    || exit 1; \\\n"
"\t  fi; \\\n"
"\tdone\n"
"\t@list='$(DIST_SUBDIRS)'; for subdir in $$list; do \\\n"
"\t  if test \"$$subdir\" = .; then :; else \\\n"
"\t    dir1=$$subdir; dir2=\"$(distdir)/$$subdir\"; \\\n"
"\t    $(am__relativize); \\\n"
"\t    new_distdir=$$reldir; \\\n"
"\t    dir1=$$subdir; dir2=\"$(top_distdir)\"; \\\n"
"\t    $(am__relativize); \\\n"
"\t    new_top_distdir=$$reldir; \\\n"
"\t    echo \" (cd $$subdir && $(MAKE) $(AM_MAKEFLAGS) top_distdir=\"$$new_top_distdir\" distdir=\"$$new_distdir\" \\\\\"; \\\n"
"\t    echo \"     am__remove_distdir=: am__skip_length_check=: am__skip_mode_fix=: distdir)\"; \\\n"
"\t    ($(am__cd) $$subdir && \\\n"
"\t      $(MAKE) $(AM_MAKEFLAGS) \\\n"
"\t        top_distdir=\"$$new_top_distdir\" \\\n"
"\t        distdir=\"$$new_distdir\" \\\n"
"\t\tam__remove_distdir=: \\\n"
"\t\tam__skip_length_check=: \\\n"
"\t\tam__skip_mode_fix=: \\\n"
"\t        distdir) \\\n"
"\t      || exit 1; \\\n"
"\t  fi; \\\n"
"\tdone\n"
"\t-test -n \"$(am__skip_mode_fix)\" \\\n"
"\t|| find \"$(distdir)\" -type d ! -perm -755 \\\n"
"\t\t-exec chmod u+rwx,go+rx {} \\; -o \\\n"
"\t  ! -type d ! -perm -444 -links 1 -exec chmod a+r {} \\; -o \\\n"
"\t  ! -type d ! -perm -400 -exec chmod a+r {} \\; -o \\\n"
"\t  ! -type d ! -perm -444 -exec $(install_sh) -c -m a+r {} {} \\; \\\n"
"\t|| chmod -R a+r \"$(distdir)\"\n"
"dist-gzip: distdir\n"
"\ttardir=$(distdir) && $(am__tar) | GZIP=$(GZIP_ENV) gzip -c >$(distdir).tar.gz\n"
"\t$(am__remove_distdir)\n"
"\n"
"dist-bzip2: distdir\n"
"\ttardir=$(distdir) && $(am__tar) | BZIP2=$${BZIP2--9} bzip2 -c >$(distdir).tar.bz2\n"
"\t$(am__remove_distdir)\n"
"\n"
"dist-lzip: distdir\n"
"\ttardir=$(distdir) && $(am__tar) | lzip -c $${LZIP_OPT--9} >$(distdir).tar.lz\n"
"\t$(am__remove_distdir)\n"
"\n"
"dist-lzma: distdir\n"
"\ttardir=$(distdir) && $(am__tar) | lzma -9 -c >$(distdir).tar.lzma\n"
"\t$(am__remove_distdir)\n"
"\n"
"dist-xz: distdir\n"
"\ttardir=$(distdir) && $(am__tar) | XZ_OPT=$${XZ_OPT--e} xz -c >$(distdir).tar.xz\n"
"\t$(am__remove_distdir)\n"
"\n"
"dist-tarZ: distdir\n"
"\ttardir=$(distdir) && $(am__tar) | compress -c >$(distdir).tar.Z\n"
"\t$(am__remove_distdir)\n"
"\n"
"dist-shar: distdir\n"
"\tshar $(distdir) | GZIP=$(GZIP_ENV) gzip -c >$(distdir).shar.gz\n"
"\t$(am__remove_distdir)\n"
"\n"
"dist-zip: distdir\n"
"\t-rm -f $(distdir).zip\n"
"\tzip -rq $(distdir).zip $(distdir)\n"
"\t$(am__remove_distdir)\n"
"\n"
"dist dist-all: distdir\n"
"\ttardir=$(distdir) && $(am__tar) | GZIP=$(GZIP_ENV) gzip -c >$(distdir).tar.gz\n"
"\t$(am__remove_distdir)\n"
"\n"
"# This target untars the dist file and tries a VPATH configuration.  Then\n"
"# it guarantees that the distribution is self-contained by making another\n"
"# tarfile.\n"
"distcheck: dist\n"
"\tcase '$(DIST_ARCHIVES)' in \\\n"
"\t*.tar.gz*) \\\n"
"\t  GZIP=$(GZIP_ENV) gzip -dc $(distdir).tar.gz | $(am__untar) ;;\\\n"
"\t*.tar.bz2*) \\\n"
"\t  bzip2 -dc $(distdir).tar.bz2 | $(am__untar) ;;\\\n"
"\t*.tar.lzma*) \\\n"
"\t  lzma -dc $(distdir).tar.lzma | $(am__untar) ;;\\\n"
"\t*.tar.lz*) \\\n"
"\t  lzip -dc $(distdir).tar.lz | $(am__untar) ;;\\\n"
"\t*.tar.xz*) \\\n"
"\t  xz -dc $(distdir).tar.xz | $(am__untar) ;;\\\n"
"\t*.tar.Z*) \\\n"
"\t  uncompress -c $(distdir).tar.Z | $(am__untar) ;;\\\n"
"\t*.shar.gz*) \\\n"
"\t  GZIP=$(GZIP_ENV) gzip -dc $(distdir).shar.gz | unshar ;;\\\n"
"\t*.zip*) \\\n"
"\t  unzip $(distdir).zip ;;\\\n"
"\tesac\n"
"\tchmod -R a-w $(distdir); chmod a+w $(distdir)\n"
"\tmkdir $(distdir)/_build\n"
"\tmkdir $(distdir)/_inst\n"
"\tchmod a-w $(distdir)\n"
"\ttest -d $(distdir)/_build || exit 0; \\\n"
"\tdc_install_base=`$(am__cd) $(distdir)/_inst && pwd | sed -e 's,^[^:\\\\/]:[\\\\/],/,'` \\\n"
"\t  && dc_destdir=\"$${TMPDIR-/tmp}/am-dc-$$$$/\" \\\n"
"\t  && am__cwd=`pwd` \\\n"
"\t  && $(am__cd) $(distdir)/_build \\\n"
"\t  && ../configure --srcdir=.. --prefix=\"$$dc_install_base\" \\\n"
"\t    $(AM_DISTCHECK_CONFIGURE_FLAGS) \\\n"
"\t    $(DISTCHECK_CONFIGURE_FLAGS) \\\n"
"\t  && $(MAKE) $(AM_MAKEFLAGS) \\\n"
"\t  && $(MAKE) $(AM_MAKEFLAGS) dvi \\\n"
"\t  && $(MAKE) $(AM_MAKEFLAGS) check \\\n"
"\t  && $(MAKE) $(AM_MAKEFLAGS) install \\\n"
"\t  && $(MAKE) $(AM_MAKEFLAGS) installcheck \\\n"
"\t  && $(MAKE) $(AM_MAKEFLAGS) uninstall \\\n"
"\t  && $(MAKE) $(AM_MAKEFLAGS) distuninstallcheck_dir=\"$$dc_install_base\" \\\n"
"\t        distuninstallcheck \\\n"
"\t  && chmod -R a-w \"$$dc_install_base\" \\\n"
"\t  && ({ \\\n"
"\t       (cd ../.. && umask 077 && mkdir \"$$dc_destdir\") \\\n"
"\t       && $(MAKE) $(AM_MAKEFLAGS) DESTDIR=\"$$dc_destdir\" install \\\n"
"\t       && $(MAKE) $(AM_MAKEFLAGS) DESTDIR=\"$$dc_destdir\" uninstall \\\n"
"\t       && $(MAKE) $(AM_MAKEFLAGS) DESTDIR=\"$$dc_destdir\" \\\n"
"\t            distuninstallcheck_dir=\"$$dc_destdir\" distuninstallcheck; \\\n"
"\t      } || { rm -rf \"$$dc_destdir\"; exit 1; }) \\\n"
"\t  && rm -rf \"$$dc_destdir\" \\\n"
"\t  && $(MAKE) $(AM_MAKEFLAGS) dist \\\n"
"\t  && rm -rf $(DIST_ARCHIVES) \\\n"
"\t  && $(MAKE) $(AM_MAKEFLAGS) distcleancheck \\\n"
"\t  && cd \"$$am__cwd\" \\\n"
"\t  || exit 1\n"
"\t$(am__remove_distdir)\n"
"\t@(echo \"$(distdir) archives ready for distribution: \"; \\\n"
"\t  list='$(DIST_ARCHIVES)'; for i in $$list; do echo $$i; done) | \\\n"
"\t  sed -e 1h -e 1s/./=/g -e 1p -e 1x -e '$$p' -e '$$x'\n"
"distuninstallcheck:\n"
"\t@test -n '$(distuninstallcheck_dir)' || { \\\n"
"\t  echo 'ERROR: trying to run $@ with an empty' \\\n"
"\t       '$$(distuninstallcheck_dir)' >&2; \\\n"
"\t  exit 1; \\\n"
"\t}; \\\n"
"\t$(am__cd) '$(distuninstallcheck_dir)' || { \\\n"
"\t  echo 'ERROR: cannot chdir into $(distuninstallcheck_dir)' >&2; \\\n"
"\t  exit 1; \\\n"
"\t}; \\\n"
"\ttest `$(am__distuninstallcheck_listfiles) | wc -l` -eq 0 \\\n"
"\t   || { echo \"ERROR: files left after uninstall:\" ; \\\n"
"\t        if test -n \"$(DESTDIR)\"; then \\\n"
"\t          echo \"  (check DESTDIR support)\"; \\\n"
"\t        fi ; \\\n"
"\t        $(distuninstallcheck_listfiles) ; \\\n"
"\t        exit 1; } >&2\n"
"distcleancheck: distclean\n"
"\t@if test '$(srcdir)' = . ; then \\\n"
"\t  echo \"ERROR: distcleancheck can only run from a VPATH build\" ; \\\n"
"\t  exit 1 ; \\\n"
"\tfi\n"
"\t@test `$(distcleancheck_listfiles) | wc -l` -eq 0 \\\n"
"\t  || { echo \"ERROR: files left in build directory after distclean:\" ; \\\n"
"\t       $(distcleancheck_listfiles) ; \\\n"
"\t       exit 1; } >&2\n"
"check-am: all-am\n"
"check: check-recursive\n"
"all-am: Makefile $(DATA) config.h\n"
"installdirs: installdirs-recursive\n"
"installdirs-am:\n"
"\tfor dir in \"$(DESTDIR)$(zexydir)\"; do \\\n"
"\t  test -z \"$$dir\" || $(MKDIR_P) \"$$dir\"; \\\n"
"\tdone\n"
"install: install-recursive\n"
"install-exec: install-exec-recursive\n"
"install-data: install-data-recursive\n"
"uninstall: uninstall-recursive\n"
"\n"
"install-am: all-am\n"
"\t@$(MAKE) $(AM_MAKEFLAGS) install-exec-am install-data-am\n"
"\n"
"installcheck: installcheck-recursive\n"
"install-strip:\n"
"\tif test -z '$(STRIP)'; then \\\n"
"\t  $(MAKE) $(AM_MAKEFLAGS) INSTALL_PROGRAM=\"$(INSTALL_STRIP_PROGRAM)\" \\\n"
"\t    install_sh_PROGRAM=\"$(INSTALL_STRIP_PROGRAM)\" INSTALL_STRIP_FLAG=-s \\\n"
"\t      install; \\\n"
"\telse \\\n"
"\t  $(MAKE) $(AM_MAKEFLAGS) INSTALL_PROGRAM=\"$(INSTALL_STRIP_PROGRAM)\" \\\n"
"\t    install_sh_PROGRAM=\"$(INSTALL_STRIP_PROGRAM)\" INSTALL_STRIP_FLAG=-s \\\n"
"\t    \"INSTALL_PROGRAM_ENV=STRIPPROG='$(STRIP)'\" install; \\\n"
"\tfi\n"
"mostlyclean-generic:\n"
"\n"
"clean-generic:\n"
"\n"
"distclean-generic:\n"
"\t-test -z \"$(CONFIG_CLEAN_FILES)\" || rm -f $(CONFIG_CLEAN_FILES)\n"
"\t-test . = \"$(srcdir)\" || test -z \"$(CONFIG_CLEAN_VPATH_FILES)\" || rm -f $(CONFIG_CLEAN_VPATH_FILES)\n"
"\n"
"maintainer-clean-generic:\n"
"\t@echo \"This command is intended for maintainers to use\"\n"
"\t@echo \"it deletes files that may require special tools to rebuild.\"\n"
"clean: clean-recursive\n"
"\n"
"clean-am: clean-generic clean-libtool mostlyclean-am\n"
"\n"
"distclean: distclean-recursive\n"
"\t-rm -f $(am__CONFIG_DISTCLEAN_FILES)\n"
"\t-rm -f Makefile\n"
"distclean-am: clean-am distclean-generic distclean-hdr \\\n"
"\tdistclean-libtool distclean-tags\n"
"\n"
"dvi: dvi-recursive\n"
"\n"
"dvi-am:\n"
"\n"
"html: html-recursive\n"
"\n"
"html-am:\n"
"\n"
"info: info-recursive\n"
"\n"
"info-am:\n"
"\n"
"install-data-am: install-dist_zexyDATA\n"
"\n"
"install-dvi: install-dvi-recursive\n"
"\n"
"install-dvi-am:\n"
"\n"
"install-exec-am:\n"
"\n"
"install-html: install-html-recursive\n"
"\n"
"install-html-am:\n"
"\n"
"install-info: install-info-recursive\n"
"\n"
"install-info-am:\n"
"\n"
"install-man:\n"
"\n"
"install-pdf: install-pdf-recursive\n"
"\n"
"install-pdf-am:\n"
"\n"
"install-ps: install-ps-recursive\n"
"\n"
"install-ps-am:\n"
"\n"
"installcheck-am:\n"
"\n"
"maintainer-clean: maintainer-clean-recursive\n"
"\t-rm -f $(am__CONFIG_DISTCLEAN_FILES)\n"
"\t-rm -rf $(top_srcdir)/autom4te.cache\n"
"\t-rm -f Makefile\n"
"maintainer-clean-am: distclean-am maintainer-clean-generic\n"
"\n"
"mostlyclean: mostlyclean-recursive\n"
"\n"
"mostlyclean-am: mostlyclean-generic mostlyclean-libtool\n"
"\n"
"pdf: pdf-recursive\n"
"\n"
"pdf-am:\n"
"\n"
"ps: ps-recursive\n"
"\n"
"ps-am:\n"
"\n"
"uninstall-am: uninstall-dist_zexyDATA\n"
"\n"
".MAKE: $(RECURSIVE_CLEAN_TARGETS) $(RECURSIVE_TARGETS) all \\\n"
"\tctags-recursive install-am install-strip tags-recursive\n"
"\n"
".PHONY: $(RECURSIVE_CLEAN_TARGETS) $(RECURSIVE_TARGETS) CTAGS GTAGS \\\n"
"\tall all-am am--refresh check check-am clean clean-generic \\\n"
"\tclean-libtool ctags ctags-recursive dist dist-all dist-bzip2 \\\n"
"\tdist-gzip dist-lzip dist-lzma dist-shar dist-tarZ dist-xz \\\n"
"\tdist-zip distcheck distclean distclean-generic distclean-hdr \\\n"
"\tdistclean-libtool distclean-tags distcleancheck distdir \\\n"
"\tdistuninstallcheck dvi dvi-am html html-am info info-am \\\n"
"\tinstall install-am install-data install-data-am \\\n"
"\tinstall-dist_zexyDATA install-dvi install-dvi-am install-exec \\\n"
"\tinstall-exec-am install-html install-html-am install-info \\\n"
"\tinstall-info-am install-man install-pdf install-pdf-am \\\n"
"\tinstall-ps install-ps-am install-strip installcheck \\\n"
"\tinstallcheck-am installdirs installdirs-am maintainer-clean \\\n"
"\tmaintainer-clean-generic mostlyclean mostlyclean-generic \\\n"
"\tmostlyclean-libtool pdf pdf-am ps ps-am tags tags-recursive \\\n"
"\tuninstall uninstall-am uninstall-dist_zexyDATA\n"
"\n"
"libtool: $(LIBTOOL_DEPS)\n"
"\t$(SHELL) ./config.status libtool\n"
"\n"
"# Tell versions [3.59,3.63) of GNU make to not export all variables.\n"
"# Otherwise a system limit (for SysV at least) may be exceeded.\n"
".NOEXPORT:\n";

const char* Makefile_in = (const char*) temp_binary_data_26;

//================== missing ==================
static const unsigned char temp_binary_data_27[] =
"#! /bin/sh\n"
"# Common stub for a few missing GNU programs while installing.\n"
"\n"
"scriptversion=2012-01-06.13; # UTC\n"
"\n"
"# Copyright (C) 1996, 1997, 1999, 2000, 2002, 2003, 2004, 2005, 2006,\n"
"# 2008, 2009, 2010, 2011, 2012 Free Software Foundation, Inc.\n"
"# Originally by Fran,cois Pinard <pinard@iro.umontreal.ca>, 1996.\n"
"\n"
"# This program is free software; you can redistribute it and/or modify\n"
"# it under the terms of the GNU General Public License as published by\n"
"# the Free Software Foundation; either version 2, or (at your option)\n"
"# any later version.\n"
"\n"
"# This program is distributed in the hope that it will be useful,\n"
"# but WITHOUT ANY WARRANTY; without even the implied warranty of\n"
"# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n"
"# GNU General Public License for more details.\n"
"\n"
"# You should have received a copy of the GNU General Public License\n"
"# along with this program.  If not, see <http://www.gnu.org/licenses/>.\n"
"\n"
"# As a special exception to the GNU General Public License, if you\n"
"# distribute this file as part of a program that contains a\n"
"# configuration script generated by Autoconf, you may include it under\n"
"# the same distribution terms that you use for the rest of that program.\n"
"\n"
"if test $# -eq 0; then\n"
"  echo 1>&2 \"Try \\`$0 --help' for more information\"\n"
"  exit 1\n"
"fi\n"
"\n"
"run=:\n"
"sed_output='s/.* --output[ =]\\([^ ]*\\).*/\\1/p'\n"
"sed_minuso='s/.* -o \\([^ ]*\\).*/\\1/p'\n"
"\n"
"# In the cases where this matters, `missing' is being run in the\n"
"# srcdir already.\n"
"if test -f configure.ac; then\n"
"  configure_ac=configure.ac\n"
"else\n"
"  configure_ac=configure.in\n"
"fi\n"
"\n"
"msg=\"missing on your system\"\n"
"\n"
"case $1 in\n"
"--run)\n"
"  # Try to run requested program, and just exit if it succeeds.\n"
"  run=\n"
"  shift\n"
"  \"$@\" && exit 0\n"
"  # Exit code 63 means version mismatch.  This often happens\n"
"  # when the user try to use an ancient version of a tool on\n"
"  # a file that requires a minimum version.  In this case we\n"
"  # we should proceed has if the program had been absent, or\n"
"  # if --run hadn't been passed.\n"
"  if test $? = 63; then\n"
"    run=:\n"
"    msg=\"probably too old\"\n"
"  fi\n"
"  ;;\n"
"\n"
"  -h|--h|--he|--hel|--help)\n"
"    echo \"\\\n"
"$0 [OPTION]... PROGRAM [ARGUMENT]...\n"
"\n"
"Handle \\`PROGRAM [ARGUMENT]...' for when PROGRAM is missing, or return an\n"
"error status if there is no known handling for PROGRAM.\n"
"\n"
"Options:\n"
"  -h, --help      display this help and exit\n"
"  -v, --version   output version information and exit\n"
"  --run           try to run the given command, and emulate it if it fails\n"
"\n"
"Supported PROGRAM values:\n"
"  aclocal      touch file \\`aclocal.m4'\n"
"  autoconf     touch file \\`configure'\n"
"  autoheader   touch file \\`config.h.in'\n"
"  autom4te     touch the output file, or create a stub one\n"
"  automake     touch all \\`Makefile.in' files\n"
"  bison        create \\`y.tab.[ch]', if possible, from existing .[ch]\n"
"  flex         create \\`lex.yy.c', if possible, from existing .c\n"
"  help2man     touch the output file\n"
"  lex          create \\`lex.yy.c', if possible, from existing .c\n"
"  makeinfo     touch the output file\n"
"  yacc         create \\`y.tab.[ch]', if possible, from existing .[ch]\n"
"\n"
"Version suffixes to PROGRAM as well as the prefixes \\`gnu-', \\`gnu', and\n"
"\\`g' are ignored when checking the name.\n"
"\n"
"Send bug reports to <bug-automake@gnu.org>.\"\n"
"    exit $?\n"
"    ;;\n"
"\n"
"  -v|--v|--ve|--ver|--vers|--versi|--versio|--version)\n"
"    echo \"missing $scriptversion (GNU Automake)\"\n"
"    exit $?\n"
"    ;;\n"
"\n"
"  -*)\n"
"    echo 1>&2 \"$0: Unknown \\`$1' option\"\n"
"    echo 1>&2 \"Try \\`$0 --help' for more information\"\n"
"    exit 1\n"
"    ;;\n"
"\n"
"esac\n"
"\n"
"# normalize program name to check for.\n"
"program=`echo \"$1\" | sed '\n"
"  s/^gnu-//; t\n"
"  s/^gnu//; t\n"
"  s/^g//; t'`\n"
"\n"
"# Now exit if we have it, but it failed.  Also exit now if we\n"
"# don't have it and --version was passed (most likely to detect\n"
"# the program).  This is about non-GNU programs, so use $1 not\n"
"# $program.\n"
"case $1 in\n"
"  lex*|yacc*)\n"
"    # Not GNU programs, they don't have --version.\n"
"    ;;\n"
"\n"
"  *)\n"
"    if test -z \"$run\" && ($1 --version) > /dev/null 2>&1; then\n"
"       # We have it, but it failed.\n"
"       exit 1\n"
"    elif test \"x$2\" = \"x--version\" || test \"x$2\" = \"x--help\"; then\n"
"       # Could not run --version or --help.  This is probably someone\n"
"       # running `$TOOL --version' or `$TOOL --help' to check whether\n"
"       # $TOOL exists and not knowing $TOOL uses missing.\n"
"       exit 1\n"
"    fi\n"
"    ;;\n"
"esac\n"
"\n"
"# If it does not exist, or fails to run (possibly an outdated version),\n"
"# try to emulate it.\n"
"case $program in\n"
"  aclocal*)\n"
"    echo 1>&2 \"\\\n"
"WARNING: \\`$1' is $msg.  You should only need it if\n"
"         you modified \\`acinclude.m4' or \\`${configure_ac}'.  You might want\n"
"         to install the \\`Automake' and \\`Perl' packages.  Grab them from\n"
"         any GNU archive site.\"\n"
"    touch aclocal.m4\n"
"    ;;\n"
"\n"
"  autoconf*)\n"
"    echo 1>&2 \"\\\n"
"WARNING: \\`$1' is $msg.  You should only need it if\n"
"         you modified \\`${configure_ac}'.  You might want to install the\n"
"         \\`Autoconf' and \\`GNU m4' packages.  Grab them from any GNU\n"
"         archive site.\"\n"
"    touch configure\n"
"    ;;\n"
"\n"
"  autoheader*)\n"
"    echo 1>&2 \"\\\n"
"WARNING: \\`$1' is $msg.  You should only need it if\n"
"         you modified \\`acconfig.h' or \\`${configure_ac}'.  You might want\n"
"         to install the \\`Autoconf' and \\`GNU m4' packages.  Grab them\n"
"         from any GNU archive site.\"\n"
"    files=`sed -n 's/^[ ]*A[CM]_CONFIG_HEADER(\\([^)]*\\)).*/\\1/p' ${configure_ac}`\n"
"    test -z \"$files\" && files=\"config.h\"\n"
"    touch_files=\n"
"    for f in $files; do\n"
"      case $f in\n"
"      *:*) touch_files=\"$touch_files \"`echo \"$f\" |\n"
"\t\t\t\t       sed -e 's/^[^:]*://' -e 's/:.*//'`;;\n"
"      *) touch_files=\"$touch_files $f.in\";;\n"
"      esac\n"
"    done\n"
"    touch $touch_files\n"
"    ;;\n"
"\n"
"  automake*)\n"
"    echo 1>&2 \"\\\n"
"WARNING: \\`$1' is $msg.  You should only need it if\n"
"         you modified \\`Makefile.am', \\`acinclude.m4' or \\`${configure_ac}'.\n"
"         You might want to install the \\`Automake' and \\`Perl' packages.\n"
"         Grab them from any GNU archive site.\"\n"
"    find . -type f -name Makefile.am -print |\n"
"\t   sed 's/\\.am$/.in/' |\n"
"\t   while read f; do touch \"$f\"; done\n"
"    ;;\n"
"\n"
"  autom4te*)\n"
"    echo 1>&2 \"\\\n"
"WARNING: \\`$1' is needed, but is $msg.\n"
"         You might have modified some files without having the\n"
"         proper tools for further handling them.\n"
"         You can get \\`$1' as part of \\`Autoconf' from any GNU\n"
"         archive site.\"\n"
"\n"
"    file=`echo \"$*\" | sed -n \"$sed_output\"`\n"
"    test -z \"$file\" && file=`echo \"$*\" | sed -n \"$sed_minuso\"`\n"
"    if test -f \"$file\"; then\n"
"\ttouch $file\n"
"    else\n"
"\ttest -z \"$file\" || exec >$file\n"
"\techo \"#! /bin/sh\"\n"
"\techo \"# Created by GNU Automake missing as a replacement of\"\n"
"\techo \"#  $ $@\"\n"
"\techo \"exit 0\"\n"
"\tchmod +x $file\n"
"\texit 1\n"
"    fi\n"
"    ;;\n"
"\n"
"  bison*|yacc*)\n"
"    echo 1>&2 \"\\\n"
"WARNING: \\`$1' $msg.  You should only need it if\n"
"         you modified a \\`.y' file.  You may need the \\`Bison' package\n"
"         in order for those modifications to take effect.  You can get\n"
"         \\`Bison' from any GNU archive site.\"\n"
"    rm -f y.tab.c y.tab.h\n"
"    if test $# -ne 1; then\n"
"        eval LASTARG=\\${$#}\n"
"\tcase $LASTARG in\n"
"\t*.y)\n"
"\t    SRCFILE=`echo \"$LASTARG\" | sed 's/y$/c/'`\n"
"\t    if test -f \"$SRCFILE\"; then\n"
"\t         cp \"$SRCFILE\" y.tab.c\n"
"\t    fi\n"
"\t    SRCFILE=`echo \"$LASTARG\" | sed 's/y$/h/'`\n"
"\t    if test -f \"$SRCFILE\"; then\n"
"\t         cp \"$SRCFILE\" y.tab.h\n"
"\t    fi\n"
"\t  ;;\n"
"\tesac\n"
"    fi\n"
"    if test ! -f y.tab.h; then\n"
"\techo >y.tab.h\n"
"    fi\n"
"    if test ! -f y.tab.c; then\n"
"\techo 'main() { return 0; }' >y.tab.c\n"
"    fi\n"
"    ;;\n"
"\n"
"  lex*|flex*)\n"
"    echo 1>&2 \"\\\n"
"WARNING: \\`$1' is $msg.  You should only need it if\n"
"         you modified a \\`.l' file.  You may need the \\`Flex' package\n"
"         in order for those modifications to take effect.  You can get\n"
"         \\`Flex' from any GNU archive site.\"\n"
"    rm -f lex.yy.c\n"
"    if test $# -ne 1; then\n"
"        eval LASTARG=\\${$#}\n"
"\tcase $LASTARG in\n"
"\t*.l)\n"
"\t    SRCFILE=`echo \"$LASTARG\" | sed 's/l$/c/'`\n"
"\t    if test -f \"$SRCFILE\"; then\n"
"\t         cp \"$SRCFILE\" lex.yy.c\n"
"\t    fi\n"
"\t  ;;\n"
"\tesac\n"
"    fi\n"
"    if test ! -f lex.yy.c; then\n"
"\techo 'main() { return 0; }' >lex.yy.c\n"
"    fi\n"
"    ;;\n"
"\n"
"  help2man*)\n"
"    echo 1>&2 \"\\\n"
"WARNING: \\`$1' is $msg.  You should only need it if\n"
"\t you modified a dependency of a manual page.  You may need the\n"
"\t \\`Help2man' package in order for those modifications to take\n"
"\t effect.  You can get \\`Help2man' from any GNU archive site.\"\n"
"\n"
"    file=`echo \"$*\" | sed -n \"$sed_output\"`\n"
"    test -z \"$file\" && file=`echo \"$*\" | sed -n \"$sed_minuso\"`\n"
"    if test -f \"$file\"; then\n"
"\ttouch $file\n"
"    else\n"
"\ttest -z \"$file\" || exec >$file\n"
"\techo \".ab help2man is required to generate this page\"\n"
"\texit $?\n"
"    fi\n"
"    ;;\n"
"\n"
"  makeinfo*)\n"
"    echo 1>&2 \"\\\n"
"WARNING: \\`$1' is $msg.  You should only need it if\n"
"         you modified a \\`.texi' or \\`.texinfo' file, or any other file\n"
"         indirectly affecting the aspect of the manual.  The spurious\n"
"         call might also be the consequence of using a buggy \\`make' (AIX,\n"
"         DU, IRIX).  You might want to install the \\`Texinfo' package or\n"
"         the \\`GNU make' package.  Grab either from any GNU archive site.\"\n"
"    # The file to touch is that specified with -o ...\n"
"    file=`echo \"$*\" | sed -n \"$sed_output\"`\n"
"    test -z \"$file\" && file=`echo \"$*\" | sed -n \"$sed_minuso\"`\n"
"    if test -z \"$file\"; then\n"
"      # ... or it is the one specified with @setfilename ...\n"
"      infile=`echo \"$*\" | sed 's/.* \\([^ ]*\\) *$/\\1/'`\n"
"      file=`sed -n '\n"
"\t/^@setfilename/{\n"
"\t  s/.* \\([^ ]*\\) *$/\\1/\n"
"\t  p\n"
"\t  q\n"
"\t}' $infile`\n"
"      # ... or it is derived from the source name (dir/f.texi becomes f.info)\n"
"      test -z \"$file\" && file=`echo \"$infile\" | sed 's,.*/,,;s,.[^.]*$,,'`.info\n"
"    fi\n"
"    # If the file does not exist, the user really needs makeinfo;\n"
"    # let's fail without touching anything.\n"
"    test -f $file || exit 1\n"
"    touch $file\n"
"    ;;\n"
"\n"
"  *)\n"
"    echo 1>&2 \"\\\n"
"WARNING: \\`$1' is needed, and is $msg.\n"
"         You might have modified some files without having the\n"
"         proper tools for further handling them.  Check the \\`README' file,\n"
"         it often tells you about the needed prerequisites for installing\n"
"         this package.  You may also peek at any GNU archive site, in case\n"
"         some other package would contain this missing \\`$1' program.\"\n"
"    exit 1\n"
"    ;;\n"
"esac\n"
"\n"
"exit 0\n"
"\n"
"# Local variables:\n"
"# eval: (add-hook 'write-file-hooks 'time-stamp)\n"
"# time-stamp-start: \"scriptversion=\"\n"
"# time-stamp-format: \"%:y-%02m-%02d.%02H\"\n"
"# time-stamp-time-zone: \"UTC\"\n"
"# time-stamp-end: \"; # UTC\"\n"
"# End:\n";

const char* missing = (const char*) temp_binary_data_27;

//================== pd-zexy.info ==================
static const unsigned char temp_binary_data_28[] =
"Title Zexy for Pd\n"
"Version MSP standard paths\n"
"Description IOhannes m zmoelnig's zexy\n"
"DefaultLocation /usr/local/lib\n"
"DeleteWarning \n"
"\n"
"### Package Flags\n"
"\n"
"NeedsAuthorization YES\n"
"Required NO\n"
"Relocatable YES\n"
"RequiresReboot NO\n"
"UseUserMask YES\n"
"OverwritePermissions NO\n"
"InstallFat NO\n"
"RootVolumeOnly NO\n";

const char* pdzexy_info = (const char*) temp_binary_data_28;

//================== README.txt ==================
static const unsigned char temp_binary_data_29[] =
"==============================================================================\r\n"
"the zexy external\r\n"
"==============================================================================\r\n"
"\r\n"
"outline of this file::\r\n"
"==============================================================================\r\n"
" +  general\r\n"
" +  installation\r\n"
"   +  linux, irix, OSX,... (autoconf)\r\n"
"   +  w32\r\n"
" +  using\r\n"
" +  license\r\n"
"\r\n"
"\r\n"
"general::\r\n"
"==============================================================================\r\n"
"the zexy external is a collection of externals for miller.s.puckette's \r\n"
"realtime-computermusic-environment called \"puredata\" (or abbreviated \"pd\")\r\n"
"this zexy external will be of no use, if you don't have a running version of \r\n"
"pd on your system.\r\n"
"check out for http://pd.iem.at to learn more about pd and how to get it \r\n"
"\r\n"
"note: the zexy external is published under the Gnu General Public License \r\n"
"that is included (GnuGPL.txt). some parts of the code are taken directly \r\n"
"from the pd source-code, they, of course, fall under the license pd is \r\n"
"published under.\r\n"
"\r\n"
"\r\n"
"\r\n"
"installation::\r\n"
"==============================================================================\r\n"
"\r\n"
"linux, irix, osx, mingw,... :\r\n"
"------------------------------------------------------------------------------\r\n"
"see INSTALL for more detailed instructions\r\n"
"\r\n"
"#0> ./autogen.sh\r\n"
"#1> ./configure\r\n"
"#2> make\r\n"
"#3> make install\r\n"
"\r\n"
"installation directory:\r\n"
"by defaultm zexy will install into /usr/local/lib/pd/extra/zexy\r\n"
"the path can be changed via the \"--prefix\", or \"--libdir\"\r\n"
"e.g. \"./configure --prefix=/usr\" -> /usr/lib/pd/extra/zexy\r\n"
"e.g. \"./configure --libdir=/tmp/foo\" -> /tmp/foo/zexy\r\n"
"\r\n"
"puredata headers:\r\n"
"zexy needs to find the Pd headers (and Pd.lib on some systems) during the build\r\n"
"process.\r\n"
"if you have installed the headers in a non-standard location, you can specify\r\n"
"them with the \"--with-pd\" option:\r\n"
"\"./configure --with-pd=/usr/include/pd\" will add /usr/include/pd to the INCLUDE\r\n"
"path.\r\n"
"\"./configure --with-pd=/home/me/src/Pd-0.43.1\" can be used to add\r\n"
"/home/me/src/Pd-0.43.1/src to the INCLUDEs and /home/me/src/Pd-0.43.1/bin to the\r\n"
"library search path\r\n"
"\r\n"
"custom external extension:\r\n"
"zexy does it's best to determine the correct external extension for your system.\r\n"
"e.g. it will use \"dll\" on w32, or \"pd_linux\" on linux.\r\n"
"if - for whatever obscure reasons - you want to force the extension to certain\r\n"
"value, you can use the \"--with-extension\" flag:\r\n"
"\"./configure --with-extension=l_ia64\" will use \"l_ia64\" for the resulting\r\n"
"binaries\r\n"
"\r\n"
"SSE2 (SIMD):\r\n"
"by default zexy is compiled without SIMD optimization (recently there have been\r\n"
"reports about crashes, when SSE2 was enabled; until this is fixed, the default\r\n"
"is to use the safe fallback)\r\n"
"if you want to enable SSE2 optimization, configure with\r\n"
"\"./configure --enable-simd=SSE2\"\r\n"
"\r\n"
"multi-object vs single-object libraries:\r\n"
"by default, zexy builds a single library \"zexy\" that contains all objects.\r\n"
"if - for some obscure reason - you insist on having a lot of small libraries\r\n"
"each containing a single object, you can enable this by using the\r\n"
"\"--disable-library\" flag\r\n"
"\r\n"
"parallel port support:\r\n"
"if you don't want the parallel-port object [lpt] you can disable it with\r\n"
"\t\"--disable-lpt\"\r\n"
" (e.g.: because you don't have a parallel-port)\r\n"
"\r\n"
"\r\n"
"fat (multiarch) binaries:\r\n"
"for building multi-arch binaries (currently only supported on OSX), specify the\r\n"
"wanted architectures in the \"--enable-fat-binary\" flag\r\n"
"e.g. \"./configure --enable-fat-binary=i386,ppc --with-extension=d_fat\"\r\n"
"\r\n"
"win32 :\r\n"
"------------------------------------------------------------------------------\r\n"
"\r\n"
"to compile: \r\n"
" + w/ MSVC use the build project found in build/win-vs*/\r\n"
" OR\r\n"
" + with GCC configure your pd path, eg:\r\n"
"\t#> ./configure --prefix=/c/program/pd; make; make install\r\n"
" OR\r\n"
" + cross-compilation for windows on linux using mingw (assumes that the \r\n"
"   crosscompiler is \"i586-mingw32msvc-cc\")\r\n"
"\t#> ./configure --host=i586-mingw32msvc --with-extension=dll \\\r\n"
"\t   --disable-PIC --with-pd=/path/to/win/pd/\r\n"
"\t#> make CFLAGS=\"-fno-unit-at-a-time\"\r\n"
"     notes: configure tries to set the CFLAGS to \"-g -O2\" if the compiler\r\n"
"            accepts this; however, this optimization sometimes generates \r\n"
"\t    binaries that cannot be loaded by pd; it seems that disabling\r\n"
"\t    the \"unit-at-a-time\" optimization (which gets enabled by \"-O2\")\r\n"
"\t    is the cause of this problem. turning it off might help\r\n"
"\r\n"
"making pd run with the zexy external::\r\n"
"==============================================================================\r\n"
"make sure, that pd will be looking at this location \r\n"
"(add \"-path <mypath>/pd/externs\" either to your .pdrc or each time \r\n"
"you execute pd)\r\n"
"make sure, that you somehow load the zexy external (either add \"-lib zexy\" \r\n"
"(if you advised pd somehow to look at the correct place) \r\n"
"or \"-lib <myzexypath>/zexy\" to your startup-script (.pdrc or whatever) \r\n"
"or load it via the object \"zexy\" at runtime\r\n"
"\r\n"
"license::\r\n"
"==============================================================================\r\n"
"    This program is free software; you can redistribute it and/or modify\r\n"
"    it under the terms of the GNU General Public License as published by\r\n"
"    the Free Software Foundation; either version 2 of the License, or\r\n"
"    (at your option) any later version.\r\n"
"\r\n"
"    This program is distributed in the hope that it will be useful,\r\n"
"    but WITHOUT ANY WARRANTY; without even the implied warranty of\r\n"
"    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\r\n"
"    GNU General Public License for more details.\r\n"
"\r\n"
"    You should have received a copy of the GNU General Public License along\r\n"
"    with this program.  If not, see <http://www.gnu.org/licenses/>.\r\n";

const char* README_txt2 = (const char*) temp_binary_data_29;

//================== SConscript ==================
static const unsigned char temp_binary_data_30[] =
"import glob\n"
"import os\n"
"Import('env prefix')\n"
"\n"
"# generate custom z_zexy files\n"
"os.system('test -e src/z_zexy.h && rm src/z_zexy.*')\n"
"zexy_src = glob.glob('src/*.c')\n"
"os.system('cd src && sh makesource.sh')\n"
"\n"
"zexy = env.SharedLibrary(target = 'zexy', source = zexy_src)\n"
"env.Alias('install', env.Install(os.path.join(prefix, 'extra'), [zexy, glob.glob('abs/*.pd')]))\n"
"env.Alias('install', env.Install(os.path.join(prefix, 'doc/zexy'), ['zexy.pd', glob.glob('examples/*.pd')]))\n"
"Default(zexy)\n";

const char* SConscript = (const char*) temp_binary_data_30;

//================== z_install.bat ==================
static const unsigned char temp_binary_data_31[] =
"@echo off\r\n"
"REM ==============================================\r\n"
"REM adapt the following to your needs\r\n"
"REM ==============================================\r\n"
"\r\n"
"REM where does PD reside ??\r\n"
"REM if you want spaces in the path, please use quotes (\"\")\r\n"
"set PDPATH=\"%PROGRAMFILES%\\pd\"\r\n"
"\r\n"
"REM which pd-version do we have ?\r\n"
"set PDVERSION=0.38\r\n"
"\r\n"
"\r\n"
"\r\n"
"\r\n"
"\r\n"
"\r\n"
"\r\n"
"\r\n"
"\r\n"
"REM ==============================================\r\n"
"REM do not edit below this line !!!\r\n"
"REM ==============================================\r\n"
"\r\n"
"echo :\r\n"
"echo : installing zexy on your system\r\n"
"echo :\r\n"
"echo : assuming that PD-version is at least %PDVERSION%\r\n"
"echo : assuming that PD is installed at %PDPATH%\r\n"
"echo :\r\n"
"echo : if this is correct, hit [return] to proceed\r\n"
"echo : if this is incorrect, stop this programm ([Ctrl]-C), edit 'z_install.bat' to your needs and rerun\r\n"
"echo :\r\n"
"pause\r\n"
"\r\n"
"\r\n"
"IF NOT EXIST %PDPATH%\\bin\\pd.exe goto location_error\r\n"
"\r\n"
"set BINPATH=extra\r\n"
"set REFPATH=extra\\zexy\r\n"
"\r\n"
"if %PDVERSION% LSS 0.37 set REFPATH=doc\\5.reference\\zexy\r\n"
"\r\n"
"echo Copying binary...\r\n"
"copy zexy.dll %PDPATH%\\%BINPATH% > tempInstall.trash\r\n"
"\r\n"
"echo copying help files\r\n"
"mkdir %PDPATH%\\%REFPATH%\r\n"
"copy reference\\* %PDPATH%\\%REFPATH% > tempInstall.trash\r\n"
"\r\n"
"echo copying abstractions\r\n"
"copy abs\\*.pd %PDPATH%\\%BINPATH% > tempInstall.trash\r\n"
"\r\n"
"echo : done\r\n"
"echo : dont forget to load zexy on startup...\r\n"
"echo : have fun\r\n"
"\r\n"
"\r\n"
"\r\n"
"goto end\r\n"
"\r\n"
":location_error\r\n"
"echo :\r\n"
"echo : i believe i am in the wrong directory\r\n"
"echo : i thought that the pd-executable would be %PDPATH%\\bin\\pd.exe\r\n"
"echo : obviously it is not !!!\r\n"
"echo : please edit this file and set the PDPATH-variable apropriatly\r\n"
"echo :\r\n"
"echo : stopping installation\r\n"
"echo :\r\n"
"\r\n"
":end\r\n"
"pause\r\n";

const char* z_install_bat = (const char*) temp_binary_data_31;

//================== zexy-meta.pd.in ==================
static const unsigned char temp_binary_data_32[] =
"#N canvas 116 44 745 553 10;\n"
"#X obj 101 83 zexy;\n"
"#X msg 101 59 help;\n"
"#N canvas 259 142 708 221 io~ 0;\n"
"#X obj 41 184 sfplay;\n"
"#X obj 137 185 sfrecord;\n"
"#X msg 41 162 help;\n"
"#X msg 137 163 help;\n"
"#X text 297 186 harddisk-recording tools;\n"
"#X text 144 19 input~/output~ objects;\n"
"#X connect 2 0 0 0;\n"
"#X connect 3 0 1 0;\n"
"#X restore 74 187 pd io~;\n"
"#N canvas 320 195 583 254 generators~ 0;\n"
"#X obj 125 173 noisi~;\n"
"#X msg 125 151 help;\n"
"#X msg 29 149 help;\n"
"#X msg 125 103 help;\n"
"#X msg 29 101 help;\n"
"#X obj 29 171 noish~;\n"
"#X obj 29 123 dirac~;\n"
"#X obj 125 125 step~;\n"
"#X text 296 174 bandlimited noise~ generators;\n"
"#X text 290 127 scientific test-functions;\n"
"#X text 152 26 generator~ objects;\n"
"#X connect 1 0 0 0;\n"
"#X connect 2 0 5 0;\n"
"#X connect 3 0 7 0;\n"
"#X connect 4 0 6 0;\n"
"#X restore 74 212 pd generators~;\n"
"#N canvas 362 224 657 505 processing~ 0;\n"
"#X obj 52 93 limiter~;\n"
"#X obj 51 143 quantize~;\n"
"#X obj 52 193 swap~;\n"
"#X msg 51 121 help;\n"
"#X msg 52 71 help;\n"
"#X msg 52 171 help;\n"
"#X text 280 92 a limiter/compressor module;\n"
"#X text 121 16 signal~processing objects;\n"
"#X text 280 131 quantizes signals by various degrees;\n"
"#X text 281 186 byte-swapps a 16bit signal;\n"
"#X obj 55 254 z~;\n"
"#X msg 55 231 help;\n"
"#X text 245 228 a samplewise delay \\, great for designing FIR-filters\n"
";\n"
"#X text 253 247 (you cannot use it for IIR-filters !);\n"
"#X obj 62 336 blockswap~;\n"
"#X msg 62 314 help;\n"
"#X text 244 339 swap upper and lower part of a signal-block;\n"
"#X msg 62 374 help;\n"
"#X obj 62 396 blockmirror~;\n"
"#X text 244 399 revert a signal-block (play it back reversely);\n"
"#X connect 3 0 1 0;\n"
"#X connect 4 0 0 0;\n"
"#X connect 5 0 2 0;\n"
"#X connect 11 0 10 0;\n"
"#X connect 15 0 14 0;\n"
"#X connect 17 0 18 0;\n"
"#X restore 74 236 pd processing~;\n"
"#N canvas 319 68 585 573 analytic~ 0;\n"
"#X obj 26 173 sigzero~;\n"
"#X msg 26 151 help;\n"
"#X text 164 171 detects whether a signal-block is zero throughout or\n"
"not;\n"
"#X obj 25 236 pdf~;\n"
"#X msg 25 213 help;\n"
"#X text 165 237 get the probability density function of a signal;\n"
"#X text 130 48 signal~analyzing objectsd;\n"
"#X obj 27 303 envrms~;\n"
"#X obj 28 356 avg~;\n"
"#X obj 29 407 tavg~;\n"
"#X msg 27 282 help;\n"
"#X msg 28 335 help;\n"
"#X msg 29 386 help;\n"
"#X text 158 300 the same as env~ \\, except that this outputs rms instead\n"
"of dB;\n"
"#X text 158 356 arithmetic mean of one signal~vector;\n"
"#X text 161 407 arithmetic mean between two bangs;\n"
"#X msg 31 448 help;\n"
"#X obj 31 469 dfreq~;\n"
"#X text 164 469 frequency detector;\n"
"#X connect 1 0 0 0;\n"
"#X connect 4 0 3 0;\n"
"#X connect 10 0 7 0;\n"
"#X connect 11 0 8 0;\n"
"#X connect 12 0 9 0;\n"
"#X connect 16 0 17 0;\n"
"#X restore 74 261 pd analytic~;\n"
"#N canvas 299 114 664 548 others~ 0;\n"
"#X obj 31 70 nop~;\n"
"#X msg 31 48 help;\n"
"#X text 246 63 do_nothing but delay for one-block (useful for synchronising)\n"
";\n"
"#X text 175 11 miscanellous signal~ objects;\n"
"#X msg 31 127 help;\n"
"#X obj 31 149 pack~;\n"
"#X msg 77 128 help;\n"
"#X obj 77 150 unpack~;\n"
"#X text 245 138 convert a signal to (packages of) floats and vice-versa\n"
";\n"
"#X msg 31 350 help;\n"
"#X msg 32 394 help;\n"
"#X obj 31 371 multiplex~;\n"
"#X obj 32 415 demultiplex~;\n"
"#X msg 129 350 help;\n"
"#X msg 130 393 help;\n"
"#X obj 129 371 mux~;\n"
"#X obj 130 415 demux~;\n"
"#X text 245 416 multiplex 1 IN~signal to 1-of-n OUT~signals;\n"
"#X text 246 369 multiplex 1-of-n IN~signals to 1 OUT~signal;\n"
"#X msg 31 297 help;\n"
"#X obj 31 319 multiline~;\n"
"#X text 239 316 a line~d multiplication for multiple streams;\n"
"#X connect 1 0 0 0;\n"
"#X connect 4 0 5 0;\n"
"#X connect 6 0 7 0;\n"
"#X connect 9 0 11 0;\n"
"#X connect 10 0 12 0;\n"
"#X connect 13 0 15 0;\n"
"#X connect 14 0 16 0;\n"
"#X connect 19 0 20 0;\n"
"#X restore 74 332 pd others~;\n"
"#X text 289 183 alternative i/o-devices (harddisk \\, net \\, ...);\n"
"#X text 288 207 useful signal generators;\n"
"#X text 291 231 process your own signals;\n"
"#X text 290 257 and analyze them;\n"
"#X text 290 328 none of the above;\n"
"#N canvas 0 0 591 430 sigbinops~ 0;\n"
"#X obj 81 96 >~;\n"
"#X obj 81 129 <~;\n"
"#X obj 81 162 ==~;\n"
"#X obj 81 244 &&~;\n"
"#X obj 81 277 ||~;\n"
"#X text 159 95 greater;\n"
"#X text 158 131 less;\n"
"#X text 157 165 equal;\n"
"#X text 156 246 logical AND;\n"
"#X text 154 278 logical OR;\n"
"#X obj 80 347 abs~;\n"
"#X obj 80 375 sgn~;\n"
"#X text 158 348 absolute value (I think this is included at GEM too)\n"
";\n"
"#X text 158 375 sign of a function;\n"
"#X text 148 32 binary and math operators for signals~;\n"
"#X restore 74 286 pd sigbinops~;\n"
"#X text 289 284 some mathematical and logical functions that were missing\n"
";\n"
"#N canvas 266 0 630 542 basic 0;\n"
"#X obj 41 28 nop;\n"
"#X text 222 28 a do nothing - pass through everything;\n"
"#X obj 41 85 lister;\n"
"#X obj 98 86 l;\n"
"#X text 216 87 store a list (like \"float\" \\, \"int\" \\, ...);\n"
"#X text 83 86 ==;\n"
"#X obj 40 244 repack;\n"
"#X text 211 242 (re)packs atoms to packages of a given size;\n"
"#X obj 40 275 packel;\n"
"#X text 209 272 the specified element of a list;\n"
"#X obj 39 316 niagara;\n"
"#X text 214 315 split 1 package into 2 at a specifique point;\n"
"#X obj 43 464 segregate;\n"
"#X text 210 463 segregates the input to various outputs depending on\n"
"the type;\n"
"#X text 210 117 convert anythings to lists;\n"
"#X obj 41 115 any2list;\n"
"#X text 101 115 ==;\n"
"#X obj 119 115 a2l;\n"
"#X obj 39 215 length;\n"
"#X text 210 214 get the length of a list;\n"
"#X obj 41 351 glue;\n"
"#X text 216 345 append a list to another;\n"
"#X obj 42 409 list2symbol;\n"
"#X text 123 410 ==;\n"
"#X obj 140 409 l2s;\n"
"#X text 207 410 convert a list into a single symbol;\n"
"#X obj 40 147 repeat 0;\n"
"#X text 211 148 repeat a message N-times;\n"
"#X restore 72 446 pd basic control;\n"
"#N canvas 401 27 602 871 advanced 0;\n"
"#X obj 28 129 makesymbol;\n"
"#X msg 28 107 help;\n"
"#X text 202 129 concatenate lists to formatted symbols;\n"
"#X msg 28 154 help;\n"
"#X obj 28 176 date;\n"
"#X msg 67 154 help;\n"
"#X obj 67 176 time;\n"
"#X text 201 173 get the current system date/time;\n"
"#X obj 28 229 index;\n"
"#X msg 28 207 help;\n"
"#X text 202 226 map symbols to indices;\n"
"#X text 166 384 (no \"help\"-message available...);\n"
"#X obj 28 433 demultiplex;\n"
"#X obj 128 433 demux;\n"
"#X text 109 434 ==;\n"
"#X text 199 434 demultiplex the inlet to a specified outlet;\n"
"#X obj 28 485 drip;\n"
"#X text 201 484 extract the atoms of a package (opt. scheduled);\n"
"#X msg 28 278 help;\n"
"#X obj 28 302 msgfile;\n"
"#X text 197 300 a powerful \"textfile\" derivative;\n"
"#X obj 28 629 lpt;\n"
"#X text 200 625 write data to the parallel port (line printer);\n"
"#X text 109 454 ==;\n"
"#X obj 28 453 multiplex;\n"
"#X obj 128 453 mux;\n"
"#X text 200 456 multiplex the specified inlet to the outlet;\n"
"#X obj 28 672 operating_system;\n"
"#X text 209 676 get the current operating system;\n"
"#X obj 31 553 fifop;\n"
"#X text 195 554 a FIFO (first-in-first-out) with Priorities;\n"
"#X obj 31 583 lifop;\n"
"#X text 195 584 a LIFO (last-in-first-out) with Priorities;\n"
"#X obj 28 350 strcmp;\n"
"#X text 194 354 compare to symbols with strcmp();\n"
"#X connect 1 0 0 0;\n"
"#X connect 3 0 4 0;\n"
"#X connect 5 0 6 0;\n"
"#X connect 9 0 8 0;\n"
"#X connect 18 0 19 0;\n"
"#X restore 73 478 pd advanced control;\n"
"#X text 285 477 some more complex control objects (systime \\, tabread4\n"
"\\, ...);\n"
"#X text 282 446 some useful control objects (nop...);\n"
"#X text 288 567 objects to work with matrices (moved to IEMMATRIX)\n"
";\n"
"#N canvas 221 222 583 258 matrix 0;\n"
"#X obj 224 173 iemmatrix;\n"
"#X text 109 52 zexy>=2.0 no longer has any matrix-objects.;\n"
"#X text 109 72 instead \\, these objects are now in a separate library\n"
"\"iemmatrix\" \\, dedicated solely to manipulation of 2D-matrices.;\n"
"#X text 185 171 use;\n"
"#X restore 73 570 pd matrix;\n"
"#N canvas 0 0 616 602 numeric 0;\n"
"#X obj 39 46 list2int;\n"
"#X text 94 47 ==;\n"
"#X obj 112 47 l2i;\n"
"#X obj 41 85 atoi;\n"
"#X text 207 49 cast each float of a list/anything to an integer;\n"
"#X text 209 83 ascii to integer;\n"
"#X obj 42 435 sort;\n"
"#X text 208 438 shell-sort a package of floats;\n"
"#X obj 42 303 mavg;\n"
"#X msg 42 283 help;\n"
"#X text 214 307 a moving average filter;\n"
"#X obj 41 346 mean;\n"
"#X msg 41 327 help;\n"
"#X msg 40 367 help;\n"
"#X obj 40 386 minmax;\n"
"#X text 209 343 get the mean value of a list of floats (==vector);\n"
"#X text 208 383 get the minimum and the maximum of a vector;\n"
"#X obj 43 223 .;\n"
"#X text 209 225 scalar multiplication of 2 vectors;\n"
"#X obj 43 158 prime;\n"
"#X text 200 162 check whether a number is prime;\n"
"#X obj 43 259 sum;\n"
"#X text 194 252 elementwise sum of a list;\n"
"#X obj 44 137 wrap;\n"
"#X text 196 139 wrap a number between an upper and a lower bound;\n"
"#X obj 50 505 urn;\n"
"#X text 199 502 Unique-Random-Numbers: get random numbers from an urn\n"
";\n"
"#X connect 9 0 8 0;\n"
"#X connect 12 0 11 0;\n"
"#X connect 13 0 14 0;\n"
"#X restore 71 378 pd numeric objects;\n"
"#X text 282 376 objects dealing with numbers;\n"
"#N canvas 306 127 571 219 tables 0;\n"
"#X msg 29 16 help;\n"
"#X obj 29 35 tabdump table;\n"
"#X text 205 33 dump a table as a list of floats;\n"
"#X msg 30 55 help;\n"
"#X obj 30 74 tabset table;\n"
"#X text 206 72 set a table with a list of floats;\n"
"#X msg 29 106 help;\n"
"#X obj 29 125 tabminmax table;\n"
"#X text 208 128 get minimum and maximum;\n"
"#X connect 0 0 1 0;\n"
"#X connect 3 0 4 0;\n"
"#X connect 6 0 7 0;\n"
"#X restore 73 508 pd tables;\n"
"#X text 288 517 objects to work on tables;\n"
"#N canvas 0 0 701 577 conversions 0;\n"
"#X obj 65 95 cart2sph;\n"
"#X obj 65 115 cart2pol;\n"
"#X obj 65 155 sph2pol;\n"
"#X obj 65 175 sph2cart;\n"
"#X obj 65 224 pol2cart;\n"
"#X obj 65 247 pol2sph;\n"
"#X text 84 67 coordinate-conversion;\n"
"#X text 186 168 convert between Cartesian \\, polar and spherical corrdinates\n"
";\n"
"#X obj 72 334 deg2rad;\n"
"#X obj 72 362 rad2deg;\n"
"#X text 146 350 convert between degree and radiant;\n"
"#X restore 72 402 pd conversions;\n"
"#X text 279 406 numeric conversion (coordinates \\, angles \\, ...);\n"
"#X text 430 82 bug-reports: zmoelnig-AT-iem.at;\n"
"#N canvas 498 232 309 146 META 0;\n"
"#X text 10 10 NAME zexy;\n"
"#X text 10 30 VERSION @PACKAGE_VERSION@;\n"
"#X text 10 50 AUTHOR IOhannes m zm\xc3\xb6lnig;\n"
"#X text 10 70 LICENSE GPL-2;\n"
"#X text 10 90 DESCRIPTION the swiss army knife for Pd;\n"
"#X restore 23 27 pd META;\n"
"#X text 228 7 the zexy external;\n"
"#X text 429 66 (c) forum::f\xfcr::umlute 1999-2012;\n"
"#X connect 1 0 0 0;\n";

const char* zexymeta_pd_in = (const char*) temp_binary_data_32;


const char* getNamedResource (const char*, int&) throw();
const char* getNamedResource (const char* resourceNameUTF8, int& numBytes) throw()
{
    unsigned int hash = 0;
    if (resourceNameUTF8 != 0)
        while (*resourceNameUTF8 != 0)
            hash = 31 * hash + (unsigned int) *resourceNameUTF8++;

    switch (hash)
    {
        case 0xa384752b:  numBytes = 127; return build_counter;
        case 0x3c4b1b01:  numBytes = 2069; return pdlibnotes_txt;
        case 0x8c50f698:  numBytes = 875; return getridof_baddeps;
        case 0x6b37f7f2:  numBytes = 2940; return notes_txt;
        case 0x22841639:  numBytes = 276; return curve_gp;
        case 0xfbc70680:  numBytes = 2508; return notes_txt2;
        case 0x2aaab85f:  numBytes = 3901; return README_txt;
        case 0xb0d4c600:  numBytes = 5390; return acinclude_m4;
        case 0x05899650:  numBytes = 154; return alias;
        case 0x0692e5c6:  numBytes = 103; return bootstrap_sh;
        case 0xd00d62e6:  numBytes = 108; return configure;
        case 0xb129b292:  numBytes = 1567; return makealias_sh;
        case 0x28e5d6ed:  numBytes = 248; return strip_objects;
        case 0x04429c28:  numBytes = 322; return AUTHORS;
        case 0x0a7c8013:  numBytes = 3494; return autogen_sh;
        case 0xd665e2b0:  numBytes = 351; return BUGS_txt;
        case 0xce2f5954:  numBytes = 933; return ChangeLog;
        case 0x1fab1a9a:  numBytes = 44826; return config_guess;
        case 0x0105a739:  numBytes = 3713; return config_h_in;
        case 0x3194ffc3:  numBytes = 35454; return config_sub;
        case 0x45c95c1b:  numBytes = 4105; return configure_ac;
        case 0x5ca1939e:  numBytes = 20334; return depcomp;
        case 0x9f79b17b:  numBytes = 15578; return INSTALL;
        case 0x01bb3930:  numBytes = 13998; return installsh;
        case 0x5a320952:  numBytes = 15220; return LICENSE_txt;
        case 0x1a187401:  numBytes = 312; return Makefile_am;
        case 0x1a1874fa:  numBytes = 26258; return Makefile_in;
        case 0x3fbe8166:  numBytes = 10346; return missing;
        case 0xd504462d:  numBytes = 291; return pdzexy_info;
        case 0x2aac53b3:  numBytes = 5669; return README_txt2;
        case 0x912e75ba:  numBytes = 481; return SConscript;
        case 0x0526032c:  numBytes = 1675; return z_install_bat;
        case 0x00c0f902:  numBytes = 9630; return zexymeta_pd_in;
        default: break;
    }

    numBytes = 0;
    return 0;
}

const char* namedResourceList[] =
{
    "build_counter",
    "pdlibnotes_txt",
    "getridof_baddeps",
    "notes_txt",
    "curve_gp",
    "notes_txt2",
    "README_txt",
    "acinclude_m4",
    "alias",
    "bootstrap_sh",
    "configure",
    "makealias_sh",
    "strip_objects",
    "AUTHORS",
    "autogen_sh",
    "BUGS_txt",
    "ChangeLog",
    "config_guess",
    "config_h_in",
    "config_sub",
    "configure_ac",
    "depcomp",
    "INSTALL",
    "installsh",
    "LICENSE_txt",
    "Makefile_am",
    "Makefile_in",
    "missing",
    "pdzexy_info",
    "README_txt2",
    "SConscript",
    "z_install_bat",
    "zexymeta_pd_in"
};

}
