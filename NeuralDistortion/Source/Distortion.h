/*
  ==============================================================================

    Distortion.h
    Created: 19 Mar 2023 5:13:06pm
    Author:  Austin James

  ==============================================================================
*/

#pragma once
#include "PluginProcessor.h"
#include "RTNeural-main/RTNeural/RTNeural.h"
#include <filesystem>

class Distortion

{
        
public:
    
    Distortion(NeuralDistortionAudioProcessor&);
   // ~Distortion() override;
    
    void processAudio(AudioBuffer<float>& buffer);
    auto loadModel();
    
    nlohmann::json get_model_json (const void* data, int data_size)
    {
        juce::MemoryInputStream json_stream { data, (size_t) data_size, false};
        return nlohmann::json::parse (json_stream.readEntireStreamAsString().toStdString());
        const auto model_json_from_data = get_model_json(BinaryData::dist_model_json, BinaryData::dist_model_jsonSize); // Not sure if this is supposed to go in here, but it is the only place i could get it. Example shows it outside of this function
    }
    
    
    
private:
    
    //RTNeural::Model<float> model; // Not sure what what type name is supposed to be here but this seems to work
    
    NeuralDistortionAudioProcessor& m_audioProcessor;

};



