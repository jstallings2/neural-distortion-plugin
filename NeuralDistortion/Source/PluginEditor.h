/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"
#include "DistortionGUI.h"

//==============================================================================
/**
*/
class NeuralDistortionAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    NeuralDistortionAudioProcessorEditor (NeuralDistortionAudioProcessor&);
    ~NeuralDistortionAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    
    DistortionGUI distortionGUI;
    NeuralDistortionAudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (NeuralDistortionAudioProcessorEditor)
};
