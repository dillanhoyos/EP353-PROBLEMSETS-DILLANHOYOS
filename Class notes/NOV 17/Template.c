#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <sndfile.h>

#define kInputFileName "Sinewave.wav"
#define kOutputFileName "Output.wav"

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
    outFile->file = sf_open(kOutputFileName, SFM_WRITE, &inFile->info);
    if(!outFile->file){
        printf("Erroropening file\n");
        print ("%s\n, sf_sfterror")
    }
    return 0;
}
int main (){
    SoundFile inFile. outFile;
    int error = openINputSndFile(&inFile);
    if(error) return 1;
    sf_count_t bufferSize = inFile.info.frames;
    //allocate buffers ased innput sound file
    float *inBuffer = (float *) malloc (bufferSize*sizeof(float));
    float *outBuffer = (float *) calloc (bufferSize, sizeof(float));

    //read the input file
    sf_read_float(inFile.file, inBuffer, bufferSize);

    process(inBuffer, outBuffer, bufferSize);

    error = createOutputSndFile(&inFile, &outFile);
    if (error) return 1; 
    sf_write_float(outfile.file, outBuffer, bufferSize);

    sf_close(inFile.file);
    sf_close(outFile.file);
    free(inBuffer);

    return 0;
}
void Process(float *inBuffer, float *outBuffer, sf_count_t bufferSize){

}
//delay time * decay time *echos *dry/wet