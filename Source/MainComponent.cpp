



#include "MainComponent.h"



//==============================================================================
MainComponent::MainComponent (PdAudioProcessor& processor)
:    AudioProcessorEditor(processor),
    pdEditor(processor)

{

    lookNFeel = new LookNFeel();
    setLookAndFeel(lookNFeel);
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
                                          TRANS("PD Pulp")));
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


    setSize (500, 385);

    PdAudioProcessor& p = (PdAudioProcessor&) processor;
    pathField->setText(p.getPatchFile().getFileName(), dontSendNotification);
    
    startTimer(25);
    resized();
    
    pdEditor.build();
    pdEditor.updatePatch();
    addAndMakeVisible(pdEditor);
    
}

MainComponent::~MainComponent()
{


    findButton = nullptr;
    pathField = nullptr;
    reloadButton = nullptr;
    editButton = nullptr;
    statusField = nullptr;
    label = nullptr;
    label2 = nullptr;



}

//==============================================================================
void MainComponent::paint (Graphics& g)
{


    g.fillAll (Colour (0xff303030));

}

void MainComponent::resized()
{

    findButton->setBounds (368, 56, 104, 24);
    pathField->setBounds (24, 56, 328, 24);
    reloadButton->setBounds (352, 90, 64, 20);
    editButton->setBounds (424, 90, 48, 20);
    statusField->setBounds (25, 91, 311, 17);
    label->setBounds (22, 16, 170, 32);
    label2->setBounds (168, 24, 304, 16);
    

    pdEditor.headerRect.setBounds(0,0,0,0);
    pdEditor.setBounds(0,
                       editButton->getBottom() + 10,
                       300,300);
//    pdEditor.headerRect.setPosition(0, 0);
//    pdEditor.headerRect.setBottom(editButton->getBottom() + 10);
//    pdEditor.headerRect.setRight(editButton->getRight() + 10);

}



void MainComponent::buttonClicked (Button* buttonThatWasClicked)
{

    PdAudioProcessor& p = (PdAudioProcessor&) pdEditor.processor;


    if (buttonThatWasClicked == findButton)
    {

        FileChooser fc ("Choose a pd file to open...",
                        File::getCurrentWorkingDirectory(),
                        "*",
                        true);

        if (fc.browseForFileToOpen())
        {
            pathField->setText(fc.getResult().getFileName(), dontSendNotification);
            p.setPatchFile(fc.getResult());
            p.needsToReopenPatch = 0;
//            p.reloadPdPatch(NULL);
            pdEditor.updatePatch();
        }

    }
    else if (buttonThatWasClicked == reloadButton)
    {

        p.needsToReopenPatch = 0;


    }
    else if (buttonThatWasClicked == editButton)
    {

        p.guiFile[0].startAsProcess();

    }

}




void MainComponent::timerCallback()
{
    PdAudioProcessor& p = (PdAudioProcessor&) pdEditor.processor;
    statusField->setText(p.status, dontSendNotification);
}
