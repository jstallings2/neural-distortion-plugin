/*
  ==============================================================================

    DistortionGUI.h
    Created: 20 Mar 2023 11:37:08pm
    Author:  Austin James

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

//==============================================================================
/*
*/
class DistortionGUI  : public juce::Component
{
public:
    DistortionGUI();
    ~DistortionGUI() override;

    void paint (juce::Graphics&) override;
    void resized() override;

private:
    
    Slider driveGainSlider;
    Slider hpfSlider;
    Slider lpfSlider;
    
    Label lpfLabel;
    Label hpfLabel;
    Label driveGainLabel;
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (DistortionGUI)
};
