//
//  PulpConfigUI.h
//  PdPulpito
//
//  Created by martin hermant on 24/11/15.
//
//

#ifndef __PdPulpito__PulpConfigUI__
#define __PdPulpito__PulpConfigUI__

#include <iostream>
#include "JuceHeader.h"
#include "PdAudioProcessor.h"
class PulpConfigUI : public Component,public ButtonListener{
    
public:
    PulpConfigUI(PdAudioProcessor * pdProcessor):pdProcessor(pdProcessor){
        addAndMakeVisible (findButton = new TextButton ("new button"));
        findButton->setButtonText (TRANS("Find patch..."));
        findButton->addListener (this);
        findButton->setColour (TextButton::buttonColourId, Colour (0xffadadad));
        findButton->setColour (TextButton::buttonOnColourId, Colour (0xff727272));
        
        addAndMakeVisible (pathField = new Label ("new label",
                                                  String::empty));
        pathField->setFont (Font (15.00f, Font::plain));
        pathField->setJustificationType (Justification::centred);
        pathField->setEditable (false, false, false);
        pathField->setColour (Label::backgroundColourId, Colour (0x21000000));
        pathField->setColour (Label::textColourId, Colour (0xffbcbcbc));
        pathField->setColour (TextEditor::textColourId, Colours::black);
        pathField->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
        
        addAndMakeVisible (reloadButton = new TextButton ("new button"));
        reloadButton->setTooltip (TRANS("Reload the pd patch file."));
        reloadButton->setButtonText (TRANS("Reload"));
        reloadButton->addListener (this);
        reloadButton->setColour (TextButton::buttonColourId, Colour (0xffadadad));
        reloadButton->setColour (TextButton::buttonOnColourId, Colour (0xff727272));
        
        addAndMakeVisible (editButton = new TextButton ("new button"));
        editButton->setTooltip (TRANS("Opens PD editor if existent."));
        editButton->setButtonText (TRANS("Edit"));
        editButton->addListener (this);
        editButton->setColour (TextButton::buttonColourId, Colour (0xffadadad));
        editButton->setColour (TextButton::buttonOnColourId, Colour (0xff727272));
        
        addAndMakeVisible (statusField = new Label ("new label",
                                                    String::empty));
        statusField->setFont (Font (11.00f, Font::plain));
        statusField->setJustificationType (Justification::centred);
        statusField->setEditable (false, false, false);
        statusField->setColour (Label::backgroundColourId, Colour (0x00000000));
        statusField->setColour (Label::textColourId, Colour (0xbcbcbcbc));
        statusField->setColour (TextEditor::textColourId, Colours::black);
        statusField->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
        
        addAndMakeVisible (label = new Label ("new label",
                                              TRANS("PD-Pulpito")));
        label->setFont (Font ("DIN Alternate", 29.20f, Font::bold));
        label->setJustificationType (Justification::topLeft);
        label->setEditable (false, false, false);
        label->setColour (Label::textColourId, Colours::white);
        label->setColour (TextEditor::textColourId, Colours::black);
        label->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
        
        addAndMakeVisible (label2 = new Label ("new label",
                                               TRANS("a pure data audio plugin runtime environment")));
        label2->setFont (Font (14.00f, Font::italic));
        label2->setJustificationType (Justification::bottomRight);
        label2->setEditable (false, false, false);
        label2->setColour (Label::textColourId, Colour (0x94ffffff));
        label2->setColour (TextEditor::textColourId, Colours::black);
        label2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));
        
        
        
        setSize(500, 150);
//        PdAudioProcessor& p = (PdAudioProcessor&) processor;
//        pathField->setText(p.getPatchFile().getFileName(), dontSendNotification);
        
        

    };
    
    
    ~PulpConfigUI(){
        
        findButton = nullptr;
        pathField = nullptr;
        reloadButton = nullptr;
        editButton = nullptr;
        statusField = nullptr;
        label = nullptr;
        label2 = nullptr;
    }
    
    
    void resized(){
        findButton->setBounds (368, 56, 104, 24);
        pathField->setBounds (24, 56, 328, 24);
        reloadButton->setBounds (352, 90, 64, 20);
        editButton->setBounds (424, 90, 48, 20);
        statusField->setBounds (25, 91, 311, 17);
        label->setBounds (22, 16, 170, 32);
        label2->setBounds (168, 24, 304, 16);
    }
    
    
    
    void buttonClicked (Button* buttonThatWasClicked)
    {
        
        
        
        
        if (buttonThatWasClicked == findButton)
        {
            
            FileChooser fc ("Choose a pd file to open...",
                            File::getCurrentWorkingDirectory(),
                            "*",
                            true);
            
            if (fc.browseForFileToOpen())
            {
                pathField->setText(fc.getResult().getFileName(), dontSendNotification);
                pdProcessor->setPatchFile(fc.getResult());
                pdProcessor->needsToReopenPatch = 0;
                //            p.reloadPdPatch(NULL);
//                pdEditor.updatePatch();
            }
            
        }
        else if (buttonThatWasClicked == reloadButton)
        {
            
            pdProcessor->needsToReopenPatch = 0;
            
            
        }
        else if (buttonThatWasClicked == editButton)
        {
            
            //        p.guiFile[0].startAsProcess();
            
        }
        
    }

    
    private :

    ScopedPointer<TextButton> findButton;
    ScopedPointer<Label> pathField;
    ScopedPointer<TextButton> reloadButton;
    ScopedPointer<TextButton> editButton;
    ScopedPointer<Label> statusField;
    ScopedPointer<Label> label;
    ScopedPointer<Label> label2;
    
    PdAudioProcessor * pdProcessor;
    
    
    
};
#endif /* defined(__PdPulpito__PulpConfigUI__) */
