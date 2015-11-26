PdPulpito
==============

This is an audio plugin that turn Pd Patches into VSTs, allowing to load in DAW, Automate parameters and create customable UI from Pd


This is an rewriting of Pd-Pulp : https://github.com/logsol/Pd-Pulp

with custom GUI making and on going work on multiple instance




PdPulpito UserGuide
======

Create a Pd Patch with normal Pd GUI Objects (see later : supported GUI objects)
ensure that they are controlling your patch using sendNames of the GUI Object itself

PdConsole is accessible with Meta + r
Pulpito options with 'c' (reloading, changing PdFile)

Multiple instance
---------
* works only within mono threaded hosts (Ableton ->disable MultiCoreSupport)
* Pd symbols are shared : make sure to $0 out non shared variables (send/recieves/Arrays)


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


Known Issues
=====
* getting back Ableton-set from history (after a crash) may crash again

And Plenty to come
