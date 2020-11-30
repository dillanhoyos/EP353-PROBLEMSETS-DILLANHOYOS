#include <stdio.h>
#include <portaudio.h>

int main(){
    PaError error;
    //Initialize port audio
    

    error = Pa_Initialize();
    if(error != paNoError ){
        printf("error L Pa_Initialize() failed with %s\n", Pa_GetErrorText(error));
        return 1;


    }
// List audio Devices availale 
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


 

    //terminate port audio
    error = Pa_Terminate();
    if(error != paNoError ){
        printf("error L Pa_Initialize() failed with %s\n", Pa_GetErrorText(error));
        return 1;



    return 0;

}}