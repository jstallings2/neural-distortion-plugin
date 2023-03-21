/*
  ==============================================================================

    Distortion.cpp
    Created: 19 Mar 2023 5:13:06pm
    Author:  Austin James

  ==============================================================================
*/

#include "Distortion.h"

Distortion::Distortion(NeuralDistortionAudioProcessor& p) :
    m_audioProcessor(p)
{
    
}

void Distortion::processAudio(AudioBuffer<float>& buffer)
{

    
    //auto* model = loadModel();
    for (int ch = 0; ch < buffer.getNumChannels(); ++ch)
    {
        auto* channelData = buffer.getWritePointer(ch);
        
        for (int n = 0; n < buffer.getNumSamples(); ++n)
        {
            // Need to load model here and process using channelData [ch]
            
        }
        
    }
    
}

auto Distortion::loadModel()
{
//    std::ifstream jsonStream("dist_model.json", std::ifstream::binary);
//    auto model = RTNeural::json_parser::parseJson<double>(jsonStream);
//    return model;
    const auto model_json = get_model_json(BinaryData::dist_model_json, BinaryData::dist_model_jsonSize);
   // auto dense =  std::make_unique<RTNeural::DenseLayer<float>> (num_inputs, num_outputs);
    return false; // Place folder
    
}


