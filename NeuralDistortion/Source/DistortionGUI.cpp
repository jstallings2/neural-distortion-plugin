/*
  ==============================================================================

    DistortionGUI.cpp
    Created: 20 Mar 2023 11:37:08pm
    Author:  Austin James

  ==============================================================================
*/

#include <JuceHeader.h>
#include "DistortionGUI.h"

//==============================================================================
DistortionGUI::DistortionGUI()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.

}

DistortionGUI::~DistortionGUI()
{
}

void DistortionGUI::paint (juce::Graphics& g)
{
    /* This demo code just fills the component's background and
       draws some placeholder text to get you started.

       You should replace everything in this method with your own
       drawing code..
    */

    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));   // clear the background

    g.setColour (juce::Colours::grey);
    g.drawRect (getLocalBounds(), 1);   // draw an outline around the component
    
    
    addAndMakeVisible(driveGainLabel);
    driveGainLabel.setText("Drive Gain", juce::dontSendNotification);
    driveGainLabel.attachToComponent(&driveGainSlider, true);
    
    driveGainSlider.setSliderStyle(juce::Slider::SliderStyle::Rotary);
    driveGainSlider.setTextBoxStyle(Slider::TextBoxBelow, true, 100, 25);
    driveGainSlider.setRange(0,50,0.1);
    //driveGainSlider.setBounds(getWidth()/2, getHeight()/2, 300, 200);
    
    addAndMakeVisible(driveGainSlider);
    
    
    
}

void DistortionGUI::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..
    auto area = getLocalBounds();
    auto center = area.getCentreX();
    int sliderWidth = 250;
    int sliderHeight = 250;
    driveGainSlider.setSize(sliderWidth, sliderHeight);
    
    driveGainSlider.setBounds(center - (sliderWidth/2)  , area.getCentreY() - (sliderHeight/2), sliderWidth, sliderHeight);
    
    

}
