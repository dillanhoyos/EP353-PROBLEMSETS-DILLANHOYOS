#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <sndfile.h>

//Excute this code using:
//clang 3.SquareWave.c -o 3.SquareWave -lsndfile

#define kSampleRate 44100
#define kSec 1
#define kNumFrames (kSampleRate * kSec)
#define kNumChannels 1
#define kFormat (SF_FORMAT_WAV | SF_FORMAT_PCM_24)
#define kFileName "SquareWave.wav"


void plotAndPlay();


int main(void){
  SNDFILE *sndFile;
  SF_INFO sfInfo;
  double *buffer;

  //Sound parameters
  double amplitude = 0.25;
  double frequency = 440.0;

  //Create 2 channels worth buffer for holding audio data 
  buffer = malloc(kNumChannels * kNumFrames * sizeof(double));
  if (!buffer){
    printf ("Error : malloc failed.\n");
		return 1;
	};

  //Initialize SF_INFO with 0s (memset is in string.h library)
  memset(&sfInfo, 0, sizeof(SF_INFO)); 

  //Set the format for the sound file to be saved
  sfInfo.samplerate = kSampleRate;
	sfInfo.frames = kNumFrames;
	sfInfo.channels = kNumChannels;
	sfInfo.format = kFormat;

   //Open the original sound file as read mode
  sndFile = sf_open(kFileName, SFM_WRITE, &sfInfo);
  if(!sndFile){
    printf ("Error : could not open file : %s\n", kFileName);
		puts(sf_strerror (NULL));
		return 1;
  }
  
  double array[]= {1.00, 0.95, 0.87, 0.77, 0.65, 0.51, 0.37, 0.23, 0.11, 0.00, 0.09, 0.16, 0.20, 0.22, 0.21, 0.19, 0.15, 0.10, 0.05, 0.00, 0.04, 0.08, 0.11, 0.13, 0.13, 0.11, 0.09, 0.06, 0.03, 0.00, 0.03, 0.06};


  //Compute Square Wave (interleave channels)
  for (int t = 0; t < kNumFrames; t++){
    for (int i = 0; i <= 32; i++){ //Up to 29th harmonics, but only odd harmonics
        double sample = amplitude * (array[i]* (sin(2.0 * M_PI * ((frequency * i)/kSampleRate) * t)));
      for(int c = 0; c < kNumChannels; c++){
        buffer[kNumChannels * t + c] += sample;
      }
    }
  }
  

  //Write out the result
  sf_count_t count = sf_write_double(sndFile, buffer, sfInfo.channels * kNumFrames);


  //Make sure writing the file succeeeded  
  if(count != sfInfo.channels * kNumFrames){
    puts(sf_strerror(sndFile));
  }


  //Close sound file and buffer
  sf_close(sndFile);
  free(buffer);
  
  return 0;
}