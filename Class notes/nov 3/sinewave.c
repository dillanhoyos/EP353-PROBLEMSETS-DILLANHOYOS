#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <sndfile.h>

#define kSampleRate 44100
#define kSec 1
#define kNumFrames kSampleRate * kSec
#define kNumChannels 2
#define kFormat (SF_FORMAT_WAV | SF_FORMAT_PCM_24)


int main(){
    SNDFILE *sndFile;
    SF_INFO sfInfo;
    double *buffer;

    // parameter for sinewave
    double amplitude = 0.25;
    double frequency = 440.0;

    buffer = malloc(kNumFrames*sizeof(double));
    if(buffer){
        printf ("No buffer please\n");
        return 1;

    }
    memset(&sfInfo, 0, sizeof(SF_INFO));
    sfInfo.samplerate = kSampleRate;
    sfInfo.frames = kNumFrames;
    sfInfo.channels = kNumChannels;
    sfInfo.format = kFormat;
    sndFile = sf_open(kFileName, SFM_WRITE, &sfInfo);
    if(!sndFile){
        printf("No file opened.\n");
        return 1;

    }
    for (int t = 0; t < kNumFrames; t++){
        double sample = amplitude * sin(2.0 * M_PI * (frequency/kSampleRate)* t);
        for (int c = 0; c < kNumChannels; c++){
            buffer[kNumChannels * t + c]= sample;

        }
   
   sf_counnt_t count = sf_write_double(sndFile, buffer, kNumFrames * kNumChannels)

