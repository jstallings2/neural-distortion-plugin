/*
  ==============================================================================

    Distortion.h
    Created: 19 Mar 2023 5:13:06pm
    Author:  Austin James

  ==============================================================================
*/

#pragma once
#include "PluginProcessor.h"
//#include <Libraries/RTNeural/RTNeural.h>

class Distortion

{
        
public:
    
    Distortion(NeuralDistortionAudioProcessor&);
   // ~Distortion() override;
    
    void processAudio(const AudioBuffer<float>& buffer);
    
    
    
private:
    
    
    NeuralDistortionAudioProcessor& m_audioProcessor;

};



