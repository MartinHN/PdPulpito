/*
  ==============================================================================

    This file was auto-generated by the Introjucer!

    It contains the basic framework code for a JUCE plugin processor.

  ==============================================================================
*/

#ifndef PLUGINPROCESSOR_H_INCLUDED
#define PLUGINPROCESSOR_H_INCLUDED

#include "PdBase.hpp"
#include "../JuceLibraryCode/JuceHeader.h"
#include "PdParamGetter.h"


//==============================================================================
/**
*/
class PdAudioProcessor  : public AudioProcessor,
public pd::PdReceiver,
public pd::PdMidiReceiver,
public PdParamGetter,
public ChangeBroadcaster

{
public:
    //==============================================================================
    PdAudioProcessor();
    ~PdAudioProcessor();
    
    void setParameterName(int index, String name);

    //==============================================================================
    void prepareToPlay (double sampleRate, int samplesPerBlock) override;
    void releaseResources() override;

    void processBlock (AudioSampleBuffer&, MidiBuffer&) override;

    //==============================================================================
    AudioProcessorEditor* createEditor() override;
    bool hasEditor() const override;

    //==============================================================================
    const String getName() const override;

    const String getInputChannelName (int channelIndex) const override;
    const String getOutputChannelName (int channelIndex) const override;
    bool isInputChannelStereoPair (int index) const override;
    bool isOutputChannelStereoPair (int index) const override;

    bool acceptsMidi() const override;
    bool producesMidi() const override;
    bool silenceInProducesSilenceOut() const override;
    double getTailLengthSeconds() const override;

    //==============================================================================
    int getNumPrograms() override;
    int getCurrentProgram() override;
    void setCurrentProgram (int index) override;
    const String getProgramName (int index) override;
    void changeProgramName (int index, const String& newName) override;

    //==============================================================================
    void getStateInformation (MemoryBlock& destData) override;
    void setStateInformation (const void* data, int sizeInBytes) override;
    
    void loadFromGUI();
    void updateProcessorParameters();
    void reloadPdPatch(double sampleRate);
    void setPatchFile(File file);
    File getPatchFile();
    
    void setParametersFromDescs();
    
    String status = "Select a pure data patch file...";

    Array<PdParameter*> pdParameters;
    
    
    File patchfile;
    // TODO : better Hack for loading Patch in audiothread
    
    int needsToReopenPatch = -1;
private:
    ScopedPointer<pd::PdBase> pd;
    int pos;

     
    pd::Patch patch;
    HeapBlock<float> pdInBuffer, pdOutBuffer;
    double cachedSampleRate;
    
    
    AudioPlayHead::CurrentPositionInfo currentPositionInfo;
    
    typedef struct {
    float tempo;
    int beat;
        void clear(){
            tempo = 0;
            beat = 0;
        }
    }DAWInfo;
    
    DAWInfo dawInfo;
    void sendDawInfo();
    bool canRestore = false;
   int maximumParameterCount = 0;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (PdAudioProcessor)
};


#endif  // PLUGINPROCESSOR_H_INCLUDED
