PdPulpito
==============

This is an audio plugin that turn Pd Patches into VSTs, allowing to load in DAW, Automate parameters and create customable UI from Pd


This is an rewriting of Pd-Pulp : https://github.com/logsol/Pd-Pulp

with custom GUI making and on going work on multiple instance




PdPulpito UserGuide
======

Create a Pd Patch with normal Pd GUI Objects (see later : supported GUI objects)
ensure that they are controlling your patch using sendNames (and recieveNames for feedback!) of the GUI Object itself

PdConsole is accessible with Meta + r
Pulpito options with 'c' (reloading, changing PdFile)

Multiple instance
---------
* !!! works only within mono threaded hosts !!! (Ableton ->disable MultiCoreSupport)
* should work in multi threaded host if no timed objects are used (metros, makenote... )
* Pd symbols are shared : make sure to $0 out non shared variables (send/recieves/arrays)

Multitouch
------
TUIO support, giving any TUIO tactile device to control it


System Requirements
-------
* OSX 10.7+
Windows/linux , soon

supported objects:
=========

GUI
--------
* comments
* canvas
* numbox
* hsl
* vsl
* flatgui/knob



Pd-extended objects:
-------
Libraries : 

* cyclone
* maxlib
* zexy

Objects:

* midifile



TODO 
=====

* support multithreaded host
* Tabbed GUIs
* TouchOSC likeexporting GUI to other clients (Android ... ?)
* other than float synchronization

Known Issues
=====
* getting back Ableton-set from history (after a crash) may crash again
* JUCE don't allow deleting plugins parameter, so you may have to reload patch after modifying a lot GUI stuff
* (not tested) MIDI output controled by another PdPupito instance
And Plenty to come


Compile Notes
=======
libpd and pd should be from my github
they should be in the same directory path than PdPulpito main folder

on OSX 
---------
change LIBPD Xcode preprocessor definition

Windows 
------
add pthreadVC2 to your Visual studio path (include/bin/lib) see http://web.cs.du.edu/~sturtevant/pthread.html
