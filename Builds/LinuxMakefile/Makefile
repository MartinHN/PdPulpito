# Automatically generated makefile, created by the Introjucer
# Don't edit this file! Your changes will be overwritten when you re-save the Introjucer project!

# (this disables dependency generation if multiple architectures are set)
DEPFLAGS := $(if $(word 2, $(TARGET_ARCH)), , -MMD)

ifndef CONFIG
  CONFIG=Debug
endif

ifeq ($(CONFIG),Debug)
  BINDIR := build
  LIBDIR := build
  OBJDIR := build/intermediate/Debug
  OUTDIR := build

  ifeq ($(TARGET_ARCH),)
    TARGET_ARCH := -march=native
  endif

  CPPFLAGS := $(DEPFLAGS) -D "LINUX=1" -D "DEBUG=1" -D "_DEBUG=1" -D "ZEXY_LIBRARY" -D "TARGET_ARCH=x86_64" -D "JUCER_LINUX_MAKE_6D53C8B4=1" -D "JUCE_APP_VERSION=1.0.0" -D "JUCE_APP_VERSION_HEX=0x10000" -I /usr/include -I /usr/include/freetype2 -I ~/SDKs/VST3\ SDK -I ../../JuceLibraryCode -I ../../../JUCE/modules -I ../../libpd/pure-data/src -I ../../libpd/libpd_wrapper -I ../../libpd/libpd_wrapper/util -I ../../Source/externals/cyclone -I ../../Source/externals/cyclone/shared
  CFLAGS += $(CPPFLAGS) $(TARGET_ARCH) -g -ggdb -fPIC -O0
  CXXFLAGS += $(CFLAGS) -std=c++11
  LDFLAGS += $(TARGET_ARCH) -L$(BINDIR) -L$(LIBDIR) -Wl,--no-undefined -shared -L/usr/X11R6/lib/ -L../../libpd/ -lX11 -lXext -lXinerama -lasound -ldl -lfreetype -lpthread -lrt -lpd-linux 

  TARGET := PdPulpito.so
  BLDCMD = $(CXX) -o $(OUTDIR)/$(TARGET) $(OBJECTS) $(LDFLAGS) $(RESOURCES) $(TARGET_ARCH)
  CLEANCMD = rm -rf $(OUTDIR)/$(TARGET) $(OBJDIR)
endif

ifeq ($(CONFIG),Release)
  BINDIR := build
  LIBDIR := build
  OBJDIR := build/intermediate/Release
  OUTDIR := build

  ifeq ($(TARGET_ARCH),)
    TARGET_ARCH := -march=native
  endif

  CPPFLAGS := $(DEPFLAGS) -D "LINUX=1" -D "NDEBUG=1" -D "ZEXY_LIBRARY" -D "TARGET_ARCH=x86_64" -D "JUCER_LINUX_MAKE_6D53C8B4=1" -D "JUCE_APP_VERSION=1.0.0" -D "JUCE_APP_VERSION_HEX=0x10000" -I /usr/include -I /usr/include/freetype2 -I ~/SDKs/VST3\ SDK -I ../../JuceLibraryCode -I ../../../JUCE/modules -I ../../libpd/pure-data/src -I ../../libpd/libpd_wrapper -I ../../libpd/libpd_wrapper/util -I ../../Source/externals/cyclone -I ../../Source/externals/cyclone/shared
  CFLAGS += $(CPPFLAGS) $(TARGET_ARCH) -fPIC -O3
  CXXFLAGS += $(CFLAGS) -std=c++11
  LDFLAGS += $(TARGET_ARCH) -L$(BINDIR) -L$(LIBDIR) -Wl,--no-undefined -shared -fvisibility=hidden -L/usr/X11R6/lib/ -L../../libpd/ -lX11 -lXext -lXinerama -lasound -ldl -lfreetype -lpthread -lrt -lpd-linux 

  TARGET := PdPulpito.so
  BLDCMD = $(CXX) -o $(OUTDIR)/$(TARGET) $(OBJECTS) $(LDFLAGS) $(RESOURCES) $(TARGET_ARCH)
  CLEANCMD = rm -rf $(OUTDIR)/$(TARGET) $(OBJDIR)
endif

OBJECTS := \
  $(OBJDIR)/TUIOComponent_1dd8f317.o \
  $(OBJDIR)/TuioClient_a232f55b.o \
  $(OBJDIR)/TuioTime_7ee25e1d.o \
  $(OBJDIR)/PdBase_917893ee.o \
  $(OBJDIR)/PdTypes_2c8748c6.o \
  $(OBJDIR)/ringbuffer_42114019.o \
  $(OBJDIR)/LabelComponent_ec4bff72.o \
  $(OBJDIR)/LookNfeel_4af74696.o \
  $(OBJDIR)/accum_9b178248.o \
  $(OBJDIR)/acos_bab39301.o \
  $(OBJDIR)/active_e436ef01.o \
  $(OBJDIR)/allhammers_943c0927.o \
  $(OBJDIR)/anal_bb481e13.o \
  $(OBJDIR)/Append_90b2ee35.o \
  $(OBJDIR)/asin_bb923e12.o \
  $(OBJDIR)/bangbang_82a8246b.o \
  $(OBJDIR)/bondo_e50b34bb.o \
  $(OBJDIR)/Borax_487aef4b.o \
  $(OBJDIR)/Bucket_eb34f505.o \
  $(OBJDIR)/buddy_eebb82f5.o \
  $(OBJDIR)/capture_3a9270f5.o \
  $(OBJDIR)/cartopol_dd2a3319.o \
  $(OBJDIR)/Clip_87fe3e6b.o \
  $(OBJDIR)/coll_bec4e6e7.o \
  $(OBJDIR)/comment_3d5b35ce.o \
  $(OBJDIR)/cosh_bec8067c.o \
  $(OBJDIR)/counter_e7112a2b.o \
  $(OBJDIR)/cycle_2a6a6115.o \
  $(OBJDIR)/decide_689c5ae3.o \
  $(OBJDIR)/Decode_6ccb4c09.o \
  $(OBJDIR)/drunk_545d5653.o \
  $(OBJDIR)/flush_b3eef3b3.o \
  $(OBJDIR)/forward_138158b4.o \
  $(OBJDIR)/fromsymbol_c2b723bd.o \
  $(OBJDIR)/funbuff_8c6e1d01.o \
  $(OBJDIR)/funnel_99cebbb1.o \
  $(OBJDIR)/gate_c4d68906.o \
  $(OBJDIR)/grab_c5bd6a47.o \
  $(OBJDIR)/hammer_45d19ac1.o \
  $(OBJDIR)/Histo_7bb9d7dc.o \
  $(OBJDIR)/iter_c9455813.o \
  $(OBJDIR)/match_135fe634.o \
  $(OBJDIR)/maximum_993c114f.o \
  $(OBJDIR)/mean_cf437980.o \
  $(OBJDIR)/midiflush_c658cc72.o \
  $(OBJDIR)/midiformat_9dfe2ed3.o \
  $(OBJDIR)/midiparse_c4677c61.o \
  $(OBJDIR)/minimum_c74727bd.o \
  $(OBJDIR)/mousefilter_a609cb4c.o \
  $(OBJDIR)/MouseState_fa6be687.o \
  $(OBJDIR)/mtr_7211791a.o \
  $(OBJDIR)/next_d102dd2e.o \
  $(OBJDIR)/offer_84f05d0b.o \
  $(OBJDIR)/onebang_e7f854d.o \
  $(OBJDIR)/past_d431ea8d.o \
  $(OBJDIR)/Peak_9dc6e43a.o \
  $(OBJDIR)/poltocar_f09e7e47.o \
  $(OBJDIR)/prepend_5a64d33d.o \
  $(OBJDIR)/prob_d51f6510.o \
  $(OBJDIR)/pv_90127101.o \
  $(OBJDIR)/seq_725f30ce.o \
  $(OBJDIR)/sinh_d9bebd8b.o \
  $(OBJDIR)/speedlim_5ed6a2a4.o \
  $(OBJDIR)/spell_698ec0d7.o \
  $(OBJDIR)/split_69f02649.o \
  $(OBJDIR)/spray_6a41231c.o \
  $(OBJDIR)/sprintf_ebb071bb.o \
  $(OBJDIR)/substitute_1dc7cc95.o \
  $(OBJDIR)/sustain_3a05c892.o \
  $(OBJDIR)/switch_41d5d3af.o \
  $(OBJDIR)/Table_e7ea81dd.o \
  $(OBJDIR)/tanh_db02da22.o \
  $(OBJDIR)/testmess_cafad705.o \
  $(OBJDIR)/thresh_9ec90ab7.o \
  $(OBJDIR)/TogEdge_b9ff9f8.o \
  $(OBJDIR)/tosymbol_9dfa230e.o \
  $(OBJDIR)/Trough_af5f3920.o \
  $(OBJDIR)/universal_33e5943a.o \
  $(OBJDIR)/urn_72813d60.o \
  $(OBJDIR)/Uzi_70c1dd73.o \
  $(OBJDIR)/xbendin_7afb9445.o \
  $(OBJDIR)/xbendin2_e476fd57.o \
  $(OBJDIR)/xbendout_e4cfb0b8.o \
  $(OBJDIR)/xbendout2_b5266f44.o \
  $(OBJDIR)/xnotein_74d32a7e.o \
  $(OBJDIR)/xnoteout_25eae19f.o \
  $(OBJDIR)/zl_9016d72d.o \
  $(OBJDIR)/cyclone_9cac35f0.o \
  $(OBJDIR)/dummies_a3c6aacf.o \
  $(OBJDIR)/maxmode_2cf8050.o \
  $(OBJDIR)/nettles_6ec8048c.o \
  $(OBJDIR)/binport_db3ed0a0.o \
  $(OBJDIR)/clc_314964b2.o \
  $(OBJDIR)/dict_f96ec468.o \
  $(OBJDIR)/fitter_45ad4562.o \
  $(OBJDIR)/grow_ff11a185.o \
  $(OBJDIR)/lex_31c55877.o \
  $(OBJDIR)/loud_7720904.o \
  $(OBJDIR)/messtree_694c27c8.o \
  $(OBJDIR)/mifi_8cb95d1.o \
  $(OBJDIR)/os_2ae6de56.o \
  $(OBJDIR)/patchvalue_a920645b.o \
  $(OBJDIR)/port_e444a73.o \
  $(OBJDIR)/props_bf3872c8.o \
  $(OBJDIR)/qtree_f7ad7127.o \
  $(OBJDIR)/rand_10e6a517.o \
  $(OBJDIR)/vefl_17eee0a7.o \
  $(OBJDIR)/file_e8cc773.o \
  $(OBJDIR)/gui_f849912e.o \
  $(OBJDIR)/tree_26ec4515.o \
  $(OBJDIR)/arsic_a2bc4aa0.o \
  $(OBJDIR)/sic_68c4bff1.o \
  $(OBJDIR)/plusbob_ee9db504.o \
  $(OBJDIR)/scriptlet_84a3e59.o \
  $(OBJDIR)/forky_888709f8.o \
  $(OBJDIR)/fragile_2fad6531.o \
  $(OBJDIR)/fringe_17d42978.o \
  $(OBJDIR)/loader_da341cfc.o \
  $(OBJDIR)/shared_c06411e1.o \
  $(OBJDIR)/abs_e137d3d2.o \
  $(OBJDIR)/acos_45cfe970.o \
  $(OBJDIR)/acosh_742e1842.o \
  $(OBJDIR)/allpass_23df6312.o \
  $(OBJDIR)/allsickles_2c027645.o \
  $(OBJDIR)/asin_46ae9481.o \
  $(OBJDIR)/asinh_8f24cf51.o \
  $(OBJDIR)/atan_46b9090a.o \
  $(OBJDIR)/atan2_90682132.o \
  $(OBJDIR)/atanh_9068ebe8.o \
  $(OBJDIR)/average_c3c38d3d.o \
  $(OBJDIR)/avg_e140be32.o \
  $(OBJDIR)/bitand_be699354.o \
  $(OBJDIR)/bitnot_bf217550.o \
  $(OBJDIR)/bitor_b39630d0.o \
  $(OBJDIR)/bitshift_78a5553f.o \
  $(OBJDIR)/bitxor_bfae58d8.o \
  $(OBJDIR)/buffir_2194e5e6.o \
  $(OBJDIR)/capture_b140d026.o \
  $(OBJDIR)/cartopol_3c47ba08.o \
  $(OBJDIR)/change_d1ac77da.o \
  $(OBJDIR)/click_ecfa64a8.o \
  $(OBJDIR)/Clip_131a94da.o \
  $(OBJDIR)/comb_49e18c2b.o \
  $(OBJDIR)/cosh_49e45ceb.o \
  $(OBJDIR)/cosx_49e498fb.o \
  $(OBJDIR)/count_f2c72a6f.o \
  $(OBJDIR)/curve_fcdd624f.o \
  $(OBJDIR)/cycle_2d8d886.o \
  $(OBJDIR)/delay_161845e3.o \
  $(OBJDIR)/delta_16208ed8.o \
  $(OBJDIR)/deltaclip_3e2e74a8.o \
  $(OBJDIR)/edge_4cad8be7.o \
  $(OBJDIR)/frameaccum_bfa4d836.o \
  $(OBJDIR)/framedelta_623f6d55.o \
  $(OBJDIR)/index_2d841d72.o \
  $(OBJDIR)/kink_57345a45.o \
  $(OBJDIR)/Line_224e087e.o \
  $(OBJDIR)/linedrive_80f7e836.o \
  $(OBJDIR)/log_e1d89224.o \
  $(OBJDIR)/lookup_2a2c324.o \
  $(OBJDIR)/lores_ceb0de1d.o \
  $(OBJDIR)/matrix_8ed23bab.o \
  $(OBJDIR)/maximum_fea7080.o \
  $(OBJDIR)/minimum_3df586ee.o \
  $(OBJDIR)/minmax_2b7ce97c.o \
  $(OBJDIR)/mstosamps_25d24f81.o \
  $(OBJDIR)/onepole_9dd615fe.o \
  $(OBJDIR)/overdrive_b7681f56.o \
  $(OBJDIR)/peakamp_ae4a1da5.o \
  $(OBJDIR)/peek_5f802005.o \
  $(OBJDIR)/phasewrap_44fbfaa5.o \
  $(OBJDIR)/pink_5fbc9560.o \
  $(OBJDIR)/play_5fe1279e.o \
  $(OBJDIR)/poke_600faec3.o \
  $(OBJDIR)/poltocar_4fbc0536.o \
  $(OBJDIR)/pong_60111362.o \
  $(OBJDIR)/pow_e2112c38.o \
  $(OBJDIR)/rampsmooth_a74549ea.o \
  $(OBJDIR)/rand_62b5704f.o \
  $(OBJDIR)/record_4ca82c3b.o \
  $(OBJDIR)/reson_fb185bdf.o \
  $(OBJDIR)/sah_e234dd3a.o \
  $(OBJDIR)/sampstoms_f08d9563.o \
  $(OBJDIR)/Scope_8f957254.o \
  $(OBJDIR)/sickle_87e731a1.o \
  $(OBJDIR)/sinh_64db13fa.o \
  $(OBJDIR)/sinx_64db500a.o \
  $(OBJDIR)/slide_3b5e7691.o \
  $(OBJDIR)/Snapshot_cc0027ce.o \
  $(OBJDIR)/spike_423507a6.o \
  $(OBJDIR)/svf_e23e6183.o \
  $(OBJDIR)/tanh_661f3091.o \
  $(OBJDIR)/tanx_661f6ca1.o \
  $(OBJDIR)/train_7a137128.o \
  $(OBJDIR)/trapezoid_f0c16388.o \
  $(OBJDIR)/triangle_b77d7ef2.o \
  $(OBJDIR)/vectral_a1f6d7dd.o \
  $(OBJDIR)/wave_6b415223.o \
  $(OBJDIR)/zerox_a23c43f0.o \
  $(OBJDIR)/0x2e_416279c3.o \
  $(OBJDIR)/0x3c0x7e_76fab6f6.o \
  $(OBJDIR)/0x3d0x3d0x7e_41603050.o \
  $(OBJDIR)/0x3e0x7e_e0c72d78.o \
  $(OBJDIR)/0x7c0x7c0x7e_35e08b46.o \
  $(OBJDIR)/0x260x260x7e_8f5699b6.o \
  $(OBJDIR)/a2l_784c5b9d.o \
  $(OBJDIR)/abs~_93e7d514.o \
  $(OBJDIR)/absgn~_3820468d.o \
  $(OBJDIR)/atof_94e35092.o \
  $(OBJDIR)/atoi_94e35bd5.o \
  $(OBJDIR)/avg~_94fc36b4.o \
  $(OBJDIR)/blockmirror~_959a89ba.o \
  $(OBJDIR)/blockshuffle~_f0494334.o \
  $(OBJDIR)/blockswap~_bfdba4e6.o \
  $(OBJDIR)/date_98f85df6.o \
  $(OBJDIR)/demultiplex_17087209.o \
  $(OBJDIR)/demultiplex~_ca06f55f.o \
  $(OBJDIR)/dfreq~_418d0faa.o \
  $(OBJDIR)/dirac~_e0010637.o \
  $(OBJDIR)/drip_99e316bd.o \
  $(OBJDIR)/envrms~_acee70d5.o \
  $(OBJDIR)/fifop_fcc6d0a6.o \
  $(OBJDIR)/freadln_3fe90340.o \
  $(OBJDIR)/fwriteln_ab199803.o \
  $(OBJDIR)/glue_9eb25ebd.o \
  $(OBJDIR)/index_a3e120d4.o \
  $(OBJDIR)/length_44fa126e.o \
  $(OBJDIR)/lifop_3a2c342c.o \
  $(OBJDIR)/limiter~_41b1429e.o \
  $(OBJDIR)/list2int_867369a3.o \
  $(OBJDIR)/list2lists_4d7c0009.o \
  $(OBJDIR)/list2symbol_7c5445ae.o \
  $(OBJDIR)/lister_21cbc013.o \
  $(OBJDIR)/listfind_df2f2ddf.o \
  $(OBJDIR)/liststorage_810db79f.o \
  $(OBJDIR)/longload_ac3e9d2a.o \
  $(OBJDIR)/lpt_7903ab32.o \
  $(OBJDIR)/makesymbol_7178df0e.o \
  $(OBJDIR)/matchbox_18f430ae.o \
  $(OBJDIR)/mavg_a854ebcd.o \
  $(OBJDIR)/minmax_80c0525a.o \
  $(OBJDIR)/msgfile_28443e7f.o \
  $(OBJDIR)/multiline~_f2f774b9.o \
  $(OBJDIR)/multiplex_abb7786a.o \
  $(OBJDIR)/multiplex~_cb38bb1e.o \
  $(OBJDIR)/multireceive_a6175fd2.o \
  $(OBJDIR)/niagara_719e5111.o \
  $(OBJDIR)/noish~_1dd679c9.o \
  $(OBJDIR)/noisi~_1dd6ee28.o \
  $(OBJDIR)/operating_system_f1ccd4f5.o \
  $(OBJDIR)/pack_ad6ae1a1.o \
  $(OBJDIR)/pack~_fff278c7.o \
  $(OBJDIR)/packel_fe522588.o \
  $(OBJDIR)/pdf~_ad96cc94.o \
  $(OBJDIR)/prime_1d49f341.o \
  $(OBJDIR)/quantize~_6bca702f.o \
  $(OBJDIR)/rawprint_d72a868d.o \
  $(OBJDIR)/regex_70c7df09.o \
  $(OBJDIR)/relay_710c86d3.o \
  $(OBJDIR)/repack_b74e94d4.o \
  $(OBJDIR)/repeat_b7862be3.o \
  $(OBJDIR)/route~_d1e20f1d.o \
  $(OBJDIR)/sfplay_54b04b4f.o \
  $(OBJDIR)/sfrecord_4a3d27ac.o \
  $(OBJDIR)/sgn~_b2e33fec.o \
  $(OBJDIR)/sigzero~_ead35fad.o \
  $(OBJDIR)/sleepgrain_6461868c.o \
  $(OBJDIR)/sort_b355a7e6.o \
  $(OBJDIR)/step~_bf2fb334.o \
  $(OBJDIR)/strcmp_3c37b93d.o \
  $(OBJDIR)/sum_79687b4d.o \
  $(OBJDIR)/swap~_c415df0d.o \
  $(OBJDIR)/symbol2list_a27929fa.o \
  $(OBJDIR)/tabdump_dd0efe0b.o \
  $(OBJDIR)/tabminmax_30989e9.o \
  $(OBJDIR)/tabread4~~_e27649b1.o \
  $(OBJDIR)/tabset_9c92da75.o \
  $(OBJDIR)/tavg~_d49552e2.o \
  $(OBJDIR)/time_b4b37555.o \
  $(OBJDIR)/unpack_cb0a30ba.o \
  $(OBJDIR)/unpack~_963d0cce.o \
  $(OBJDIR)/urn_798350f3.o \
  $(OBJDIR)/winNT_portio_3d2f236c.o \
  $(OBJDIR)/wrap_ba4b8792.o \
  $(OBJDIR)/z_zexy_ca452cd9.o \
  $(OBJDIR)/z~_778ac8cc.o \
  $(OBJDIR)/zexy_bebd7634.o \
  $(OBJDIR)/MainComponent_a6ffb4a5.o \
  $(OBJDIR)/PdAudioProcessor_dc268ef9.o \
  $(OBJDIR)/PdAudioProcessorEditor_1788cb06.o \
  $(OBJDIR)/PdParamGetter_ec36b6c5.o \
  $(OBJDIR)/BinaryData_ce4232d4.o \
  $(OBJDIR)/juce_audio_basics_181b4cb.o \
  $(OBJDIR)/juce_audio_devices_2d9302c9.o \
  $(OBJDIR)/juce_audio_formats_5c144c69.o \
  $(OBJDIR)/juce_audio_processors_a9c69383.o \
  $(OBJDIR)/juce_audio_utils_f6fe6709.o \
  $(OBJDIR)/juce_core_9d6b33ad.o \
  $(OBJDIR)/juce_data_structures_dcd877a9.o \
  $(OBJDIR)/juce_events_e5b201a1.o \
  $(OBJDIR)/juce_graphics_a34b2885.o \
  $(OBJDIR)/juce_gui_basics_3e4cc581.o \
  $(OBJDIR)/juce_gui_extra_20746349.o \
  $(OBJDIR)/juce_osc_7aca6fe9.o \
  $(OBJDIR)/juce_PluginUtilities_b46a93d5.o \
  $(OBJDIR)/juce_VST_Wrapper_6cac13de.o \
  $(OBJDIR)/juce_VST3_Wrapper_fb90cd9c.o \

.PHONY: clean

$(OUTDIR)/$(TARGET): $(OBJECTS) $(RESOURCES)
	@echo Linking PdPulpito
	-@mkdir -p $(BINDIR)
	-@mkdir -p $(LIBDIR)
	-@mkdir -p $(OUTDIR)
	@$(BLDCMD)

clean:
	@echo Cleaning PdPulpito
	@$(CLEANCMD)

strip:
	@echo Stripping PdPulpito
	-@strip --strip-unneeded $(OUTDIR)/$(TARGET)

$(OBJDIR)/TUIOComponent_1dd8f317.o: ../../Source/TUIO/TUIOComponent.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling TUIOComponent.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/TuioClient_a232f55b.o: ../../Source/TUIO/TuioClient.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling TuioClient.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/TuioTime_7ee25e1d.o: ../../Source/TUIO/TuioTime.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling TuioTime.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/PdBase_917893ee.o: ../../Source/PdBase.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling PdBase.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/PdTypes_2c8748c6.o: ../../Source/PdTypes.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling PdTypes.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/ringbuffer_42114019.o: ../../Source/ringbuffer.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling ringbuffer.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/LabelComponent_ec4bff72.o: ../../Source/LabelComponent.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling LabelComponent.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/LookNfeel_4af74696.o: ../../Source/LookNfeel.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling LookNfeel.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/accum_9b178248.o: ../../Source/externals/cyclone/hammer/accum.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling accum.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/acos_bab39301.o: ../../Source/externals/cyclone/hammer/acos.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling acos.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/active_e436ef01.o: ../../Source/externals/cyclone/hammer/active.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling active.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/allhammers_943c0927.o: ../../Source/externals/cyclone/hammer/allhammers.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling allhammers.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/anal_bb481e13.o: ../../Source/externals/cyclone/hammer/anal.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling anal.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/Append_90b2ee35.o: ../../Source/externals/cyclone/hammer/Append.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling Append.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/asin_bb923e12.o: ../../Source/externals/cyclone/hammer/asin.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling asin.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/bangbang_82a8246b.o: ../../Source/externals/cyclone/hammer/bangbang.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling bangbang.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/bondo_e50b34bb.o: ../../Source/externals/cyclone/hammer/bondo.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling bondo.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/Borax_487aef4b.o: ../../Source/externals/cyclone/hammer/Borax.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling Borax.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/Bucket_eb34f505.o: ../../Source/externals/cyclone/hammer/Bucket.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling Bucket.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/buddy_eebb82f5.o: ../../Source/externals/cyclone/hammer/buddy.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling buddy.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/capture_3a9270f5.o: ../../Source/externals/cyclone/hammer/capture.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling capture.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/cartopol_dd2a3319.o: ../../Source/externals/cyclone/hammer/cartopol.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling cartopol.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/Clip_87fe3e6b.o: ../../Source/externals/cyclone/hammer/Clip.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling Clip.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/coll_bec4e6e7.o: ../../Source/externals/cyclone/hammer/coll.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling coll.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/comment_3d5b35ce.o: ../../Source/externals/cyclone/hammer/comment.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling comment.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/cosh_bec8067c.o: ../../Source/externals/cyclone/hammer/cosh.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling cosh.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/counter_e7112a2b.o: ../../Source/externals/cyclone/hammer/counter.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling counter.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/cycle_2a6a6115.o: ../../Source/externals/cyclone/hammer/cycle.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling cycle.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/decide_689c5ae3.o: ../../Source/externals/cyclone/hammer/decide.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling decide.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/Decode_6ccb4c09.o: ../../Source/externals/cyclone/hammer/Decode.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling Decode.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/drunk_545d5653.o: ../../Source/externals/cyclone/hammer/drunk.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling drunk.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/flush_b3eef3b3.o: ../../Source/externals/cyclone/hammer/flush.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling flush.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/forward_138158b4.o: ../../Source/externals/cyclone/hammer/forward.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling forward.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/fromsymbol_c2b723bd.o: ../../Source/externals/cyclone/hammer/fromsymbol.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling fromsymbol.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/funbuff_8c6e1d01.o: ../../Source/externals/cyclone/hammer/funbuff.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling funbuff.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/funnel_99cebbb1.o: ../../Source/externals/cyclone/hammer/funnel.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling funnel.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/gate_c4d68906.o: ../../Source/externals/cyclone/hammer/gate.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling gate.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/grab_c5bd6a47.o: ../../Source/externals/cyclone/hammer/grab.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling grab.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/hammer_45d19ac1.o: ../../Source/externals/cyclone/hammer/hammer.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling hammer.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/Histo_7bb9d7dc.o: ../../Source/externals/cyclone/hammer/Histo.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling Histo.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/iter_c9455813.o: ../../Source/externals/cyclone/hammer/iter.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling iter.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/match_135fe634.o: ../../Source/externals/cyclone/hammer/match.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling match.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/maximum_993c114f.o: ../../Source/externals/cyclone/hammer/maximum.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling maximum.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/mean_cf437980.o: ../../Source/externals/cyclone/hammer/mean.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling mean.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/midiflush_c658cc72.o: ../../Source/externals/cyclone/hammer/midiflush.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling midiflush.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/midiformat_9dfe2ed3.o: ../../Source/externals/cyclone/hammer/midiformat.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling midiformat.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/midiparse_c4677c61.o: ../../Source/externals/cyclone/hammer/midiparse.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling midiparse.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/minimum_c74727bd.o: ../../Source/externals/cyclone/hammer/minimum.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling minimum.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/mousefilter_a609cb4c.o: ../../Source/externals/cyclone/hammer/mousefilter.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling mousefilter.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/MouseState_fa6be687.o: ../../Source/externals/cyclone/hammer/MouseState.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling MouseState.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/mtr_7211791a.o: ../../Source/externals/cyclone/hammer/mtr.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling mtr.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/next_d102dd2e.o: ../../Source/externals/cyclone/hammer/next.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling next.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/offer_84f05d0b.o: ../../Source/externals/cyclone/hammer/offer.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling offer.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/onebang_e7f854d.o: ../../Source/externals/cyclone/hammer/onebang.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling onebang.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/past_d431ea8d.o: ../../Source/externals/cyclone/hammer/past.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling past.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/Peak_9dc6e43a.o: ../../Source/externals/cyclone/hammer/Peak.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling Peak.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/poltocar_f09e7e47.o: ../../Source/externals/cyclone/hammer/poltocar.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling poltocar.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/prepend_5a64d33d.o: ../../Source/externals/cyclone/hammer/prepend.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling prepend.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/prob_d51f6510.o: ../../Source/externals/cyclone/hammer/prob.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling prob.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/pv_90127101.o: ../../Source/externals/cyclone/hammer/pv.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling pv.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/seq_725f30ce.o: ../../Source/externals/cyclone/hammer/seq.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling seq.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/sinh_d9bebd8b.o: ../../Source/externals/cyclone/hammer/sinh.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling sinh.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/speedlim_5ed6a2a4.o: ../../Source/externals/cyclone/hammer/speedlim.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling speedlim.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/spell_698ec0d7.o: ../../Source/externals/cyclone/hammer/spell.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling spell.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/split_69f02649.o: ../../Source/externals/cyclone/hammer/split.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling split.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/spray_6a41231c.o: ../../Source/externals/cyclone/hammer/spray.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling spray.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/sprintf_ebb071bb.o: ../../Source/externals/cyclone/hammer/sprintf.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling sprintf.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/substitute_1dc7cc95.o: ../../Source/externals/cyclone/hammer/substitute.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling substitute.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/sustain_3a05c892.o: ../../Source/externals/cyclone/hammer/sustain.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling sustain.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/switch_41d5d3af.o: ../../Source/externals/cyclone/hammer/switch.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling switch.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/Table_e7ea81dd.o: ../../Source/externals/cyclone/hammer/Table.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling Table.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/tanh_db02da22.o: ../../Source/externals/cyclone/hammer/tanh.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling tanh.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/testmess_cafad705.o: ../../Source/externals/cyclone/hammer/testmess.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling testmess.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/thresh_9ec90ab7.o: ../../Source/externals/cyclone/hammer/thresh.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling thresh.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/TogEdge_b9ff9f8.o: ../../Source/externals/cyclone/hammer/TogEdge.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling TogEdge.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/tosymbol_9dfa230e.o: ../../Source/externals/cyclone/hammer/tosymbol.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling tosymbol.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/Trough_af5f3920.o: ../../Source/externals/cyclone/hammer/Trough.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling Trough.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/universal_33e5943a.o: ../../Source/externals/cyclone/hammer/universal.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling universal.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/urn_72813d60.o: ../../Source/externals/cyclone/hammer/urn.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling urn.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/Uzi_70c1dd73.o: ../../Source/externals/cyclone/hammer/Uzi.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling Uzi.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/xbendin_7afb9445.o: ../../Source/externals/cyclone/hammer/xbendin.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling xbendin.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/xbendin2_e476fd57.o: ../../Source/externals/cyclone/hammer/xbendin2.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling xbendin2.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/xbendout_e4cfb0b8.o: ../../Source/externals/cyclone/hammer/xbendout.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling xbendout.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/xbendout2_b5266f44.o: ../../Source/externals/cyclone/hammer/xbendout2.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling xbendout2.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/xnotein_74d32a7e.o: ../../Source/externals/cyclone/hammer/xnotein.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling xnotein.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/xnoteout_25eae19f.o: ../../Source/externals/cyclone/hammer/xnoteout.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling xnoteout.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/zl_9016d72d.o: ../../Source/externals/cyclone/hammer/zl.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling zl.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/cyclone_9cac35f0.o: ../../Source/externals/cyclone/shadow/cyclone.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling cyclone.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/dummies_a3c6aacf.o: ../../Source/externals/cyclone/shadow/dummies.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling dummies.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/maxmode_2cf8050.o: ../../Source/externals/cyclone/shadow/maxmode.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling maxmode.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/nettles_6ec8048c.o: ../../Source/externals/cyclone/shadow/nettles.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling nettles.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/binport_db3ed0a0.o: ../../Source/externals/cyclone/shared/common/binport.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling binport.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/clc_314964b2.o: ../../Source/externals/cyclone/shared/common/clc.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling clc.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/dict_f96ec468.o: ../../Source/externals/cyclone/shared/common/dict.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling dict.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/fitter_45ad4562.o: ../../Source/externals/cyclone/shared/common/fitter.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling fitter.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/grow_ff11a185.o: ../../Source/externals/cyclone/shared/common/grow.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling grow.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/lex_31c55877.o: ../../Source/externals/cyclone/shared/common/lex.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling lex.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/loud_7720904.o: ../../Source/externals/cyclone/shared/common/loud.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling loud.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/messtree_694c27c8.o: ../../Source/externals/cyclone/shared/common/messtree.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling messtree.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/mifi_8cb95d1.o: ../../Source/externals/cyclone/shared/common/mifi.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling mifi.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/os_2ae6de56.o: ../../Source/externals/cyclone/shared/common/os.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling os.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/patchvalue_a920645b.o: ../../Source/externals/cyclone/shared/common/patchvalue.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling patchvalue.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/port_e444a73.o: ../../Source/externals/cyclone/shared/common/port.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling port.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/props_bf3872c8.o: ../../Source/externals/cyclone/shared/common/props.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling props.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/qtree_f7ad7127.o: ../../Source/externals/cyclone/shared/common/qtree.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling qtree.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/rand_10e6a517.o: ../../Source/externals/cyclone/shared/common/rand.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling rand.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/vefl_17eee0a7.o: ../../Source/externals/cyclone/shared/common/vefl.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling vefl.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/file_e8cc773.o: ../../Source/externals/cyclone/shared/hammer/file.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling file.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/gui_f849912e.o: ../../Source/externals/cyclone/shared/hammer/gui.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling gui.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/tree_26ec4515.o: ../../Source/externals/cyclone/shared/hammer/tree.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling tree.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/arsic_a2bc4aa0.o: ../../Source/externals/cyclone/shared/sickle/arsic.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling arsic.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/sic_68c4bff1.o: ../../Source/externals/cyclone/shared/sickle/sic.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling sic.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/plusbob_ee9db504.o: ../../Source/externals/cyclone/shared/toxy/plusbob.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling plusbob.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/scriptlet_84a3e59.o: ../../Source/externals/cyclone/shared/toxy/scriptlet.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling scriptlet.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/forky_888709f8.o: ../../Source/externals/cyclone/shared/unstable/forky.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling forky.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/fragile_2fad6531.o: ../../Source/externals/cyclone/shared/unstable/fragile.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling fragile.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/fringe_17d42978.o: ../../Source/externals/cyclone/shared/unstable/fringe.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling fringe.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/loader_da341cfc.o: ../../Source/externals/cyclone/shared/unstable/loader.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling loader.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/shared_c06411e1.o: ../../Source/externals/cyclone/shared/shared.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling shared.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/abs_e137d3d2.o: ../../Source/externals/cyclone/sickle/abs.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling abs.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/acos_45cfe970.o: ../../Source/externals/cyclone/sickle/acos.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling acos.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/acosh_742e1842.o: ../../Source/externals/cyclone/sickle/acosh.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling acosh.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/allpass_23df6312.o: ../../Source/externals/cyclone/sickle/allpass.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling allpass.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/allsickles_2c027645.o: ../../Source/externals/cyclone/sickle/allsickles.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling allsickles.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/asin_46ae9481.o: ../../Source/externals/cyclone/sickle/asin.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling asin.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/asinh_8f24cf51.o: ../../Source/externals/cyclone/sickle/asinh.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling asinh.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/atan_46b9090a.o: ../../Source/externals/cyclone/sickle/atan.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling atan.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/atan2_90682132.o: ../../Source/externals/cyclone/sickle/atan2.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling atan2.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/atanh_9068ebe8.o: ../../Source/externals/cyclone/sickle/atanh.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling atanh.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/average_c3c38d3d.o: ../../Source/externals/cyclone/sickle/average.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling average.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/avg_e140be32.o: ../../Source/externals/cyclone/sickle/avg.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling avg.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/bitand_be699354.o: ../../Source/externals/cyclone/sickle/bitand.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling bitand.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/bitnot_bf217550.o: ../../Source/externals/cyclone/sickle/bitnot.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling bitnot.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/bitor_b39630d0.o: ../../Source/externals/cyclone/sickle/bitor.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling bitor.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/bitshift_78a5553f.o: ../../Source/externals/cyclone/sickle/bitshift.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling bitshift.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/bitxor_bfae58d8.o: ../../Source/externals/cyclone/sickle/bitxor.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling bitxor.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/buffir_2194e5e6.o: ../../Source/externals/cyclone/sickle/buffir.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling buffir.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/capture_b140d026.o: ../../Source/externals/cyclone/sickle/capture.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling capture.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/cartopol_3c47ba08.o: ../../Source/externals/cyclone/sickle/cartopol.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling cartopol.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/change_d1ac77da.o: ../../Source/externals/cyclone/sickle/change.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling change.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/click_ecfa64a8.o: ../../Source/externals/cyclone/sickle/click.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling click.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/Clip_131a94da.o: ../../Source/externals/cyclone/sickle/Clip.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling Clip.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/comb_49e18c2b.o: ../../Source/externals/cyclone/sickle/comb.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling comb.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/cosh_49e45ceb.o: ../../Source/externals/cyclone/sickle/cosh.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling cosh.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/cosx_49e498fb.o: ../../Source/externals/cyclone/sickle/cosx.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling cosx.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/count_f2c72a6f.o: ../../Source/externals/cyclone/sickle/count.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling count.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/curve_fcdd624f.o: ../../Source/externals/cyclone/sickle/curve.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling curve.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/cycle_2d8d886.o: ../../Source/externals/cyclone/sickle/cycle.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling cycle.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/delay_161845e3.o: ../../Source/externals/cyclone/sickle/delay.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling delay.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/delta_16208ed8.o: ../../Source/externals/cyclone/sickle/delta.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling delta.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/deltaclip_3e2e74a8.o: ../../Source/externals/cyclone/sickle/deltaclip.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling deltaclip.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/edge_4cad8be7.o: ../../Source/externals/cyclone/sickle/edge.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling edge.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/frameaccum_bfa4d836.o: ../../Source/externals/cyclone/sickle/frameaccum.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling frameaccum.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/framedelta_623f6d55.o: ../../Source/externals/cyclone/sickle/framedelta.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling framedelta.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/index_2d841d72.o: ../../Source/externals/cyclone/sickle/index.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling index.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/kink_57345a45.o: ../../Source/externals/cyclone/sickle/kink.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling kink.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/Line_224e087e.o: ../../Source/externals/cyclone/sickle/Line.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling Line.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/linedrive_80f7e836.o: ../../Source/externals/cyclone/sickle/linedrive.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling linedrive.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/log_e1d89224.o: ../../Source/externals/cyclone/sickle/log.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling log.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/lookup_2a2c324.o: ../../Source/externals/cyclone/sickle/lookup.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling lookup.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/lores_ceb0de1d.o: ../../Source/externals/cyclone/sickle/lores.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling lores.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/matrix_8ed23bab.o: ../../Source/externals/cyclone/sickle/matrix.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling matrix.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/maximum_fea7080.o: ../../Source/externals/cyclone/sickle/maximum.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling maximum.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/minimum_3df586ee.o: ../../Source/externals/cyclone/sickle/minimum.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling minimum.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/minmax_2b7ce97c.o: ../../Source/externals/cyclone/sickle/minmax.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling minmax.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/mstosamps_25d24f81.o: ../../Source/externals/cyclone/sickle/mstosamps.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling mstosamps.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/onepole_9dd615fe.o: ../../Source/externals/cyclone/sickle/onepole.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling onepole.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/overdrive_b7681f56.o: ../../Source/externals/cyclone/sickle/overdrive.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling overdrive.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/peakamp_ae4a1da5.o: ../../Source/externals/cyclone/sickle/peakamp.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling peakamp.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/peek_5f802005.o: ../../Source/externals/cyclone/sickle/peek.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling peek.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/phasewrap_44fbfaa5.o: ../../Source/externals/cyclone/sickle/phasewrap.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling phasewrap.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/pink_5fbc9560.o: ../../Source/externals/cyclone/sickle/pink.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling pink.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/play_5fe1279e.o: ../../Source/externals/cyclone/sickle/play.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling play.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/poke_600faec3.o: ../../Source/externals/cyclone/sickle/poke.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling poke.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/poltocar_4fbc0536.o: ../../Source/externals/cyclone/sickle/poltocar.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling poltocar.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/pong_60111362.o: ../../Source/externals/cyclone/sickle/pong.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling pong.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/pow_e2112c38.o: ../../Source/externals/cyclone/sickle/pow.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling pow.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/rampsmooth_a74549ea.o: ../../Source/externals/cyclone/sickle/rampsmooth.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling rampsmooth.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/rand_62b5704f.o: ../../Source/externals/cyclone/sickle/rand.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling rand.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/record_4ca82c3b.o: ../../Source/externals/cyclone/sickle/record.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling record.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/reson_fb185bdf.o: ../../Source/externals/cyclone/sickle/reson.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling reson.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/sah_e234dd3a.o: ../../Source/externals/cyclone/sickle/sah.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling sah.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/sampstoms_f08d9563.o: ../../Source/externals/cyclone/sickle/sampstoms.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling sampstoms.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/Scope_8f957254.o: ../../Source/externals/cyclone/sickle/Scope.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling Scope.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/sickle_87e731a1.o: ../../Source/externals/cyclone/sickle/sickle.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling sickle.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/sinh_64db13fa.o: ../../Source/externals/cyclone/sickle/sinh.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling sinh.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/sinx_64db500a.o: ../../Source/externals/cyclone/sickle/sinx.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling sinx.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/slide_3b5e7691.o: ../../Source/externals/cyclone/sickle/slide.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling slide.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/Snapshot_cc0027ce.o: ../../Source/externals/cyclone/sickle/Snapshot.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling Snapshot.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/spike_423507a6.o: ../../Source/externals/cyclone/sickle/spike.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling spike.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/svf_e23e6183.o: ../../Source/externals/cyclone/sickle/svf.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling svf.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/tanh_661f3091.o: ../../Source/externals/cyclone/sickle/tanh.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling tanh.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/tanx_661f6ca1.o: ../../Source/externals/cyclone/sickle/tanx.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling tanx.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/train_7a137128.o: ../../Source/externals/cyclone/sickle/train.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling train.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/trapezoid_f0c16388.o: ../../Source/externals/cyclone/sickle/trapezoid.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling trapezoid.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/triangle_b77d7ef2.o: ../../Source/externals/cyclone/sickle/triangle.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling triangle.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/vectral_a1f6d7dd.o: ../../Source/externals/cyclone/sickle/vectral.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling vectral.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/wave_6b415223.o: ../../Source/externals/cyclone/sickle/wave.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling wave.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/zerox_a23c43f0.o: ../../Source/externals/cyclone/sickle/zerox.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling zerox.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/0x2e_416279c3.o: ../../Source/externals/zexy/src/0x2e.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling 0x2e.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/0x3c0x7e_76fab6f6.o: ../../Source/externals/zexy/src/0x3c0x7e.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling 0x3c0x7e.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/0x3d0x3d0x7e_41603050.o: ../../Source/externals/zexy/src/0x3d0x3d0x7e.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling 0x3d0x3d0x7e.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/0x3e0x7e_e0c72d78.o: ../../Source/externals/zexy/src/0x3e0x7e.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling 0x3e0x7e.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/0x7c0x7c0x7e_35e08b46.o: ../../Source/externals/zexy/src/0x7c0x7c0x7e.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling 0x7c0x7c0x7e.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/0x260x260x7e_8f5699b6.o: ../../Source/externals/zexy/src/0x260x260x7e.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling 0x260x260x7e.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/a2l_784c5b9d.o: ../../Source/externals/zexy/src/a2l.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling a2l.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/abs~_93e7d514.o: ../../Source/externals/zexy/src/abs~.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling abs~.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/absgn~_3820468d.o: ../../Source/externals/zexy/src/absgn~.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling absgn~.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/atof_94e35092.o: ../../Source/externals/zexy/src/atof.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling atof.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/atoi_94e35bd5.o: ../../Source/externals/zexy/src/atoi.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling atoi.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/avg~_94fc36b4.o: ../../Source/externals/zexy/src/avg~.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling avg~.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/blockmirror~_959a89ba.o: ../../Source/externals/zexy/src/blockmirror~.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling blockmirror~.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/blockshuffle~_f0494334.o: ../../Source/externals/zexy/src/blockshuffle~.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling blockshuffle~.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/blockswap~_bfdba4e6.o: ../../Source/externals/zexy/src/blockswap~.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling blockswap~.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/date_98f85df6.o: ../../Source/externals/zexy/src/date.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling date.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/demultiplex_17087209.o: ../../Source/externals/zexy/src/demultiplex.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling demultiplex.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/demultiplex~_ca06f55f.o: ../../Source/externals/zexy/src/demultiplex~.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling demultiplex~.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/dfreq~_418d0faa.o: ../../Source/externals/zexy/src/dfreq~.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling dfreq~.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/dirac~_e0010637.o: ../../Source/externals/zexy/src/dirac~.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling dirac~.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/drip_99e316bd.o: ../../Source/externals/zexy/src/drip.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling drip.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/envrms~_acee70d5.o: ../../Source/externals/zexy/src/envrms~.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling envrms~.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/fifop_fcc6d0a6.o: ../../Source/externals/zexy/src/fifop.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling fifop.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/freadln_3fe90340.o: ../../Source/externals/zexy/src/freadln.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling freadln.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/fwriteln_ab199803.o: ../../Source/externals/zexy/src/fwriteln.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling fwriteln.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/glue_9eb25ebd.o: ../../Source/externals/zexy/src/glue.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling glue.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/index_a3e120d4.o: ../../Source/externals/zexy/src/index.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling index.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/length_44fa126e.o: ../../Source/externals/zexy/src/length.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling length.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/lifop_3a2c342c.o: ../../Source/externals/zexy/src/lifop.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling lifop.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/limiter~_41b1429e.o: ../../Source/externals/zexy/src/limiter~.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling limiter~.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/list2int_867369a3.o: ../../Source/externals/zexy/src/list2int.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling list2int.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/list2lists_4d7c0009.o: ../../Source/externals/zexy/src/list2lists.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling list2lists.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/list2symbol_7c5445ae.o: ../../Source/externals/zexy/src/list2symbol.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling list2symbol.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/lister_21cbc013.o: ../../Source/externals/zexy/src/lister.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling lister.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/listfind_df2f2ddf.o: ../../Source/externals/zexy/src/listfind.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling listfind.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/liststorage_810db79f.o: ../../Source/externals/zexy/src/liststorage.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling liststorage.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/longload_ac3e9d2a.o: ../../Source/externals/zexy/src/longload.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling longload.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/lpt_7903ab32.o: ../../Source/externals/zexy/src/lpt.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling lpt.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/makesymbol_7178df0e.o: ../../Source/externals/zexy/src/makesymbol.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling makesymbol.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/matchbox_18f430ae.o: ../../Source/externals/zexy/src/matchbox.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling matchbox.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/mavg_a854ebcd.o: ../../Source/externals/zexy/src/mavg.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling mavg.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/minmax_80c0525a.o: ../../Source/externals/zexy/src/minmax.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling minmax.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/msgfile_28443e7f.o: ../../Source/externals/zexy/src/msgfile.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling msgfile.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/multiline~_f2f774b9.o: ../../Source/externals/zexy/src/multiline~.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling multiline~.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/multiplex_abb7786a.o: ../../Source/externals/zexy/src/multiplex.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling multiplex.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/multiplex~_cb38bb1e.o: ../../Source/externals/zexy/src/multiplex~.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling multiplex~.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/multireceive_a6175fd2.o: ../../Source/externals/zexy/src/multireceive.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling multireceive.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/niagara_719e5111.o: ../../Source/externals/zexy/src/niagara.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling niagara.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/noish~_1dd679c9.o: ../../Source/externals/zexy/src/noish~.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling noish~.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/noisi~_1dd6ee28.o: ../../Source/externals/zexy/src/noisi~.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling noisi~.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/operating_system_f1ccd4f5.o: ../../Source/externals/zexy/src/operating_system.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling operating_system.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/pack_ad6ae1a1.o: ../../Source/externals/zexy/src/pack.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling pack.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/pack~_fff278c7.o: ../../Source/externals/zexy/src/pack~.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling pack~.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/packel_fe522588.o: ../../Source/externals/zexy/src/packel.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling packel.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/pdf~_ad96cc94.o: ../../Source/externals/zexy/src/pdf~.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling pdf~.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/prime_1d49f341.o: ../../Source/externals/zexy/src/prime.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling prime.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/quantize~_6bca702f.o: ../../Source/externals/zexy/src/quantize~.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling quantize~.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/rawprint_d72a868d.o: ../../Source/externals/zexy/src/rawprint.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling rawprint.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/regex_70c7df09.o: ../../Source/externals/zexy/src/regex.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling regex.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/relay_710c86d3.o: ../../Source/externals/zexy/src/relay.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling relay.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/repack_b74e94d4.o: ../../Source/externals/zexy/src/repack.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling repack.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/repeat_b7862be3.o: ../../Source/externals/zexy/src/repeat.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling repeat.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/route~_d1e20f1d.o: ../../Source/externals/zexy/src/route~.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling route~.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/sfplay_54b04b4f.o: ../../Source/externals/zexy/src/sfplay.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling sfplay.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/sfrecord_4a3d27ac.o: ../../Source/externals/zexy/src/sfrecord.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling sfrecord.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/sgn~_b2e33fec.o: ../../Source/externals/zexy/src/sgn~.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling sgn~.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/sigzero~_ead35fad.o: ../../Source/externals/zexy/src/sigzero~.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling sigzero~.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/sleepgrain_6461868c.o: ../../Source/externals/zexy/src/sleepgrain.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling sleepgrain.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/sort_b355a7e6.o: ../../Source/externals/zexy/src/sort.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling sort.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/step~_bf2fb334.o: ../../Source/externals/zexy/src/step~.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling step~.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/strcmp_3c37b93d.o: ../../Source/externals/zexy/src/strcmp.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling strcmp.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/sum_79687b4d.o: ../../Source/externals/zexy/src/sum.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling sum.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/swap~_c415df0d.o: ../../Source/externals/zexy/src/swap~.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling swap~.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/symbol2list_a27929fa.o: ../../Source/externals/zexy/src/symbol2list.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling symbol2list.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/tabdump_dd0efe0b.o: ../../Source/externals/zexy/src/tabdump.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling tabdump.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/tabminmax_30989e9.o: ../../Source/externals/zexy/src/tabminmax.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling tabminmax.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/tabread4~~_e27649b1.o: ../../Source/externals/zexy/src/tabread4~~.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling tabread4~~.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/tabset_9c92da75.o: ../../Source/externals/zexy/src/tabset.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling tabset.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/tavg~_d49552e2.o: ../../Source/externals/zexy/src/tavg~.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling tavg~.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/time_b4b37555.o: ../../Source/externals/zexy/src/time.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling time.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/unpack_cb0a30ba.o: ../../Source/externals/zexy/src/unpack.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling unpack.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/unpack~_963d0cce.o: ../../Source/externals/zexy/src/unpack~.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling unpack~.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/urn_798350f3.o: ../../Source/externals/zexy/src/urn.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling urn.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/winNT_portio_3d2f236c.o: ../../Source/externals/zexy/src/winNT_portio.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling winNT_portio.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/wrap_ba4b8792.o: ../../Source/externals/zexy/src/wrap.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling wrap.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/z_zexy_ca452cd9.o: ../../Source/externals/zexy/src/z_zexy.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling z_zexy.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/z~_778ac8cc.o: ../../Source/externals/zexy/src/z~.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling z~.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/zexy_bebd7634.o: ../../Source/externals/zexy/src/zexy.c
	-@mkdir -p $(OBJDIR)
	@echo "Compiling zexy.c"
	@$(CC) $(CFLAGS) -o "$@" -c "$<"

$(OBJDIR)/MainComponent_a6ffb4a5.o: ../../Source/MainComponent.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling MainComponent.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/PdAudioProcessor_dc268ef9.o: ../../Source/PdAudioProcessor.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling PdAudioProcessor.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/PdAudioProcessorEditor_1788cb06.o: ../../Source/PdAudioProcessorEditor.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling PdAudioProcessorEditor.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/PdParamGetter_ec36b6c5.o: ../../Source/PdParamGetter.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling PdParamGetter.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/BinaryData_ce4232d4.o: ../../JuceLibraryCode/BinaryData.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling BinaryData.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_audio_basics_181b4cb.o: ../../../JUCE/modules/juce_audio_basics/juce_audio_basics.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_audio_basics.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_audio_devices_2d9302c9.o: ../../../JUCE/modules/juce_audio_devices/juce_audio_devices.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_audio_devices.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_audio_formats_5c144c69.o: ../../../JUCE/modules/juce_audio_formats/juce_audio_formats.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_audio_formats.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_audio_processors_a9c69383.o: ../../../JUCE/modules/juce_audio_processors/juce_audio_processors.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_audio_processors.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_audio_utils_f6fe6709.o: ../../../JUCE/modules/juce_audio_utils/juce_audio_utils.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_audio_utils.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_core_9d6b33ad.o: ../../../JUCE/modules/juce_core/juce_core.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_core.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_data_structures_dcd877a9.o: ../../../JUCE/modules/juce_data_structures/juce_data_structures.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_data_structures.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_events_e5b201a1.o: ../../../JUCE/modules/juce_events/juce_events.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_events.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_graphics_a34b2885.o: ../../../JUCE/modules/juce_graphics/juce_graphics.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_graphics.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_gui_basics_3e4cc581.o: ../../../JUCE/modules/juce_gui_basics/juce_gui_basics.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_gui_basics.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_gui_extra_20746349.o: ../../../JUCE/modules/juce_gui_extra/juce_gui_extra.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_gui_extra.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_osc_7aca6fe9.o: ../../../JUCE/modules/juce_osc/juce_osc.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_osc.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_PluginUtilities_b46a93d5.o: ../../../JUCE/modules/juce_audio_plugin_client/utility/juce_PluginUtilities.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_PluginUtilities.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_VST_Wrapper_6cac13de.o: ../../../JUCE/modules/juce_audio_plugin_client/VST/juce_VST_Wrapper.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_VST_Wrapper.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_VST3_Wrapper_fb90cd9c.o: ../../../JUCE/modules/juce_audio_plugin_client/VST3/juce_VST3_Wrapper.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_VST3_Wrapper.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

-include $(OBJECTS:%.o=%.d)
