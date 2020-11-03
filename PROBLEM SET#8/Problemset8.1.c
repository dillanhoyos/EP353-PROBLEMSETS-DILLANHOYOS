#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sndfile.h> 

//Compile this code using:
//clang 3.libsndfileExercise.c -o 3.libsndfileExercise -lsndfile

int main(void) {
  SNDFILE *inFile = NULL, *outFile = NULL; //pointers to a sound files
	SF_INFO sfInfo; //hold an information about a sound file
  float *buffer;

  long bufferSize = 0;
  

  //Initialize SF_INFO with 0s (memset is in string.h library)
  memset(&sfInfo, 0, sizeof(SF_INFO));

  //Open the original sound file as read mode
  inFile = sf_open("sine.wav", SFM_READ, &sfInfo);
  if(!inFile){
    printf ("Error : could not open file : sine.wav\n");
		puts (sf_strerror (NULL));
		return 1;
  }
  
  //Check if the file format is in good shape
  if(!sf_format_check(&sfInfo)){	
    sf_close(inFile);
		printf("Invalid encoding\n");
		return 1;
	}
  sfInfo.frames = sfInfo.frames*5;
  
  buffer = (float *) malloc(sfInfo.frames * sizeof(float));
  // Need to retain this info before opening another file
  bufferSize = sfInfo.frames;
  

  //Modify sfInfo if you need to...
  //sfInfo.format = SF_FORMAT_AIFF;
  

  //Open another sound file in write mode
  outFile = sf_open("sine5.wav", SFM_WRITE, &sfInfo);

  //Check if the file was succefully opened
  if(!outFile){	
    printf ("Error : could not open file : sine5.wav");
		puts (sf_strerror(NULL));
		return 1;
	}
 

  //Copy samples from the original file to the new file
  sf_read_float(inFile, buffer, bufferSize);
  sf_write_float(outFile, buffer, bufferSize); 
  
  //Close the open files
  sf_close(inFile);
	sf_close(outFile);

  return 0;
}
