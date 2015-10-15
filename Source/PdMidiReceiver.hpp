/*
 * Copyright (c) 2012 Dan Wilcox <danomatika@gmail.com>
 *
 * BSD Simplified License.
 * For information on usage and redistribution, and for a DISCLAIMER OF ALL
 * WARRANTIES, see the file, "LICENSE.txt," in this distribution.
 *
 * See https://github.com/libpd/libpd for documentation
 *
 * This file was originally written for the ofxPd openFrameworks addon:
 * https://github.com/danomatika/ofxPd
 *
 */
#pragma once
#include "modules/juce_audio_basics/juce_audio_basics.h"

namespace pd {

/// a pd midi receiver base class
class PdMidiReceiver {

    public:

        /// midi
    virtual void receiveNoteOn(const int channel, const int pitch, const int velocity) {
        juce::MidiMessage msg;
        if(velocity == 0){
       msg = juce::MidiMessage::noteOff(channel+1, pitch, (float)velocity/127.0f);
        }
        else{
       msg = juce::MidiMessage::noteOn(channel+1, pitch, (float)velocity/127.f);
        }
        msg.setTimeStamp(juce::Time::currentTimeMillis());
        buf.addEvent(msg, sampleNumber);
        sampleNumber++;
        DBG( "noteOn  :" << pitch << " , " << velocity );;
    
    }
        virtual void receiveControlChange(const int channel, const int controller, const int value) {
            juce::MidiMessage msg = juce::MidiMessage::controllerEvent(channel+1, controller, value/127.0f);
            msg.setTimeStamp(juce::Time::currentTimeMillis());
            buf.addEvent(msg, sampleNumber);
            sampleNumber++;
        
        }
        virtual void receiveProgramChange(const int channel, const int value) {
            juce::MidiMessage msg = juce::MidiMessage::programChange(channel+1, value);
            msg.setTimeStamp(juce::Time::currentTimeMillis());
            buf.addEvent(msg, sampleNumber);
            sampleNumber++;
        
        
        } // note: pgm value is 1-128
    
    
    
        virtual void receivePitchBend(const int channel, const int value) {
            juce::MidiMessage msg = juce::MidiMessage::pitchWheel(channel+1, value);
            msg.setTimeStamp(juce::Time::currentTimeMillis());
            buf.addEvent(msg, sampleNumber);
            sampleNumber++;
        
        
        }
        virtual void receiveAftertouch(const int channel, const int value) {}
        virtual void receivePolyAftertouch(const int channel, const int pitch, const int value) {}

        /// raw midi byte
        virtual void receiveMidiByte(const int port, const int byte) {
        
            juce::MidiMessage msg(port,byte);
            msg.setTimeStamp(juce::Time::currentTimeMillis());
            buf.addEvent(msg, sampleNumber);
            sampleNumber++;
        }
    
    
    virtual juce::MidiBuffer getMidiBuffer(){
        return  buf;
 
    }
    
    virtual void clearMidiBuffer(int samplePosition){      sampleNumber = 0;  buf.clear();
    }
    
        juce::MidiBuffer buf;
    
    unsigned int sampleNumber;
};

} // namespace
