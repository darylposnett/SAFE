/*
  ==============================================================================

    This file was auto-generated by the Introjucer!

    It contains the basic startup code for a Juce application.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//#ifndef IMAGE_DIRECTORY
//#define IMAGE_DIRECTORY File ("/JUCE/")
//#endif

//==============================================================================
SafereverbAudioProcessorEditor::SafereverbAudioProcessorEditor (SafereverbAudioProcessor* ownerFilter)
    : SAFEAudioProcessorEditor (ownerFilter)
{
    backgroundImage = ImageCache::getFromMemory(SAFEImages::reverb_background_png, SAFEImages::reverb_background_pngSize);
    
    setSize (594, 404);
    
    addAndMakeVisible (&recordButton);
    recordButton.setBounds (360, 359, 100, 22);
    
    addAndMakeVisible (&loadButton);
    loadButton.setBounds (470,  359, 100, 22);
    
    addAndMakeVisible (&descriptorBox);
    descriptorBox.setBounds (360, 254, 210, 94);
    
    addAndMakeVisible (&metaDataButton);
    metaDataButton.setBounds (500, 214,	 30, 30);
    
    addAndMakeVisible (&fileAccessButton);
    fileAccessButton.setBounds (540, 214, 30, 30);
    
    setMetaDataScreenPosition (102, 54);

    // Sliders...
    // density, decay, size,
    SAFESlider* densitySlider = sliders [SafereverbAudioProcessor::PARAMdensity];
    addAndMakeVisible (densitySlider);
    densitySlider->setBounds (30, 80, 80, 100);
    densitySlider->setColour (SAFEColours::green);
    densitySlider->setText ("Dense");
    
    SAFESlider* decaySlider = sliders [SafereverbAudioProcessor::PARAMdecay];
    addAndMakeVisible (decaySlider);
    decaySlider->setBounds (30, 182, 80, 100);
    decaySlider->setColour (SAFEColours::green);
    decaySlider->setText ("Decay");

    SAFESlider* sizeSlider = sliders [SafereverbAudioProcessor::PARAMsize];
    addAndMakeVisible (sizeSlider);
    sizeSlider->setBounds (30, 285, 80, 100);
    sizeSlider->setColour (SAFEColours::green);
    sizeSlider->setText ("Size");

    // dampingFreq, bandwidthFreq, predelay
    SAFESlider* dampingSlider = sliders [SafereverbAudioProcessor::PARAMdampingFreq];
    addAndMakeVisible (dampingSlider);
    dampingSlider->setBounds (140, 80, 80, 100);
    dampingSlider->setColour (SAFEColours::yellow);
    dampingSlider->setText ("Damp");
    
    SAFESlider* bandwidthSlider = sliders [SafereverbAudioProcessor::PARAMbandwidthFreq];
    addAndMakeVisible (bandwidthSlider);
    bandwidthSlider->setBounds (140, 182, 80, 100);
    bandwidthSlider->setColour (SAFEColours::yellow);
    bandwidthSlider->setText ("Bwth");
    
    SAFESlider* predelaySlider = sliders [SafereverbAudioProcessor::PARAMpredelay];
    addAndMakeVisible (predelaySlider);
    predelaySlider->setBounds (140, 285, 80, 100);
    predelaySlider->setColour (SAFEColours::yellow);
    predelaySlider->setText ("PreDly");
    
    
    // gain, mix, earlyMix;
    SAFESlider* gainSlider = sliders [SafereverbAudioProcessor::PARAMgain];
    addAndMakeVisible (gainSlider);
    gainSlider->setBounds (250, 80, 80, 100);
    gainSlider->setColour (SAFEColours::red);
    gainSlider->setText ("Gain");
    
    SAFESlider* mixSlider = sliders [SafereverbAudioProcessor::PARAMmix];
    addAndMakeVisible (mixSlider);
    mixSlider->setBounds (250, 182, 80, 100);
    mixSlider->setColour (SAFEColours::red);
    mixSlider->setText ("Mix");
    
    SAFESlider* earlySlider = sliders [SafereverbAudioProcessor::PARAMearlyMix];
    addAndMakeVisible (earlySlider);
    earlySlider->setBounds (250, 285, 80, 100);
    earlySlider->setColour (SAFEColours::red);
    earlySlider->setText ("Early");
    
    addAndMakeVisible (&availableDescriptorList);
    availableDescriptorList.setBounds (361, 216, 130, 26);
    
}

SafereverbAudioProcessorEditor::~SafereverbAudioProcessorEditor()
{
}


//==============================================================================
void SafereverbAudioProcessorEditor::paint (Graphics& g)
{
    g.fillAll (Colours::white);

    int width = getWidth();
    int height = getHeight();
    
    int imageWidth = backgroundImage.getWidth();
    int imageHeight = backgroundImage.getHeight();

    g.drawImage (backgroundImage, 0, 0, width, height, 0, 0, imageWidth, imageHeight);
}






