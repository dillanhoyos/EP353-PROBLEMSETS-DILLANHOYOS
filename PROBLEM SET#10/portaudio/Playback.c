#include <stdio.h>
#include <portaudio.h>
#include <memory.h>
#include <sndfile.h>
#include <portaudio.h>


#define kInputFileName "Bass.wav"
#define kdDeviceIndex 10// output destination
#define kNumFramesPerBufer 512

typedef struct SoundFile{
    SNDFILE *file;
    SF_INFO info;


} SoundFile;
int opeIputSndFile(SoundFile *sndFile);
int initPortAudio();
int closePortAudio();
void printPaDevices();



int main(){
   

return 0;
 

    }

int renderCallback(
    const void *input,
    void *output,
    unsigned int framecount,
    const PaStreamCallbackTimeInfo *timeInfo,
    PaStreamCallbackFlags statusFlags,
    void *userData //we will define what this is 
);
int opeIputSndFile(SoundFile *sndFile){
     PaError error;
    //Initialize port audio
    

    error = Pa_Initialize();
    if(error != paNoError ){
        printf("error L Pa_Initialize() failed with %s\n", Pa_GetErrorText(error));
        return 1;
    }
    return 0;




}
int initPortAudio(){
     PaError error;
    //Initialize port audio
    

    error = Pa_Initialize();
    if(error != paNoError ){
        printf("error L Pa_Initialize() failed with %s\n", Pa_GetErrorText(error));
        return 1;


    }

}
int closePortAudio(){
    PaError error;

error = Pa_Terminate();
    if(error != paNoError ){
        printf("error L Pa_Initialize() failed with %s\n", Pa_GetErrorText(error));
        return 1;




}}
void printPaDevices(){
    
PaDeviceIndex numDevices;
PaDeviceIndex curDeviceID;

const PaDeviceInfo *pDeviceInfo;
const PaHostApiInfo * pHostApiInfo;

//get number of Devices Available
numDevices = Pa_GetDeviceCount();

for (curDeviceID = 0; curDeviceID < numDevices; curDeviceID++){
    pDeviceInfo = Pa_GetDeviceInfo(curDeviceID);
    pHostApiInfo =Pa_GetHostApiInfo(pDeviceInfo->hostApi);
    printf("--------------------------\n");
    printf("ID: %d, Name: %s ,", curDeviceID, pDeviceInfo->name);
    printf("API name: %s\n,", pHostApiInfo->name);
    printf("Max output channnels: %d\t", pDeviceInfo->maxOutputChannels);
    printf("Max input channnelsL%d\n\n", pDeviceInfo->maxInputChannels);



}


}
