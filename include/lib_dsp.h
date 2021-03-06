#ifndef LIB_DSP_H
#define LIB_DSP_H

#include "filters.h"
#include "oscillators.h"
#include "core.h"
#include "effects.h"

float floatToDecibel(float value){
  return 20 * logf(value);
}

float decibelToFloat(float value){
  return pow(10, (value/20));
}

float msToSamples(float ms, float sampleRate){
  return ms * (sampleRate / 1000);
}

float samplesToMs(float samples, float sampleRate){
  return samples/(sampleRate/1000);
}

#endif
