#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <sndfile.h>

#define kInputFileName "Sinewave"

typedef struct SoundFile{
    SNDFILE *FILE;
    SF_INFO info;


} SoundFile;
//Return is for error checking
int openInputSndFile(SoundFile *inFile);
int createOutputSndFIle(SoundFIle *inFile, SoundFile *outFile);
void process(float) *inBuffer, float *outBuffer, sf_count_t bufferSize);

int openInputSndFile(SoundFile *inFile){
    memset(&inFile->info, 0, sizeof(SF_INFO));
    inFile->file - sf_open(kInputFileName,SFM_READ, &inFile->info);
    if(!sndFile->file){
        print("Error in open file.");
        return 1;

    }
    if(!sf_format_check(&inFile->info)){
        sf_close(inFile->file);
        print("Invalid audio file format\n");
        return 1l

    }
    if(inFile->innfo.channel > 1){
        sf_close(inFile->file);
        printf("Input File is mono");
        return 1;

    }
    return 0;

}
int createOutputSndFIle(SoundFIle *inFile, SoundFile *outFile){
    return 0;
}
