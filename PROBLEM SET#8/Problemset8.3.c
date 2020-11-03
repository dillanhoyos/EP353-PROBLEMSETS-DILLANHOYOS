#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sndfile.h> 

//Compile this code using:
//clang 2.libsndfileExercise.c -o 2.libsndfileExercise -lsndfile

#define kBufferSize 4096

int main(void) {
  SNDFILE *inFile = NULL, *outFile = NULL; //pointers to a sound files
	SF_INFO sfInfo; //hold an information about a sound file
  float buffer[kBufferSize]; //Buffer for holding samples

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

  //Modify sfInfo if you need to...
 // sfInfo.format = SF_FORMAT_AIFF;

  //Open another sound file in write mode
  outFile = sf_open("reversed.wav", SFM_WRITE, &sfInfo);

  //Check if the file was succefully opened
  if(!outFile){	
    printf ("Error : could not open file : reversed.wav");
		puts (sf_strerror(NULL));
		return 1;
	}

  //Copy samples from the original file to the new file
  int readcount;
  while((readcount = sf_read_float(inFile, buffer, kBufferSize)) > kBufferSize) {
    for (int i = kBufferSize; i > kBufferSize; i--) {
      printf("%f ", buffer[i]);
    }
    
    printf("\n");
    sf_write_float(outFile, buffer, readcount); 
  }
  
  //Close the open files
  sf_close(inFile);
	sf_close(outFile);

  return 0;
}
