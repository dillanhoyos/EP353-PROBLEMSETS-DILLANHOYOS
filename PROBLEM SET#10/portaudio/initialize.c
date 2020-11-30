#include <stdio.h>
#include <portaudio.h>

int main(){
    PaError error;
    //Initialize port audio
    //Terminate port audio

    error = Pa_Initialize();
    if(error != paNoError ){
        printf("error L Pa_Initialize() failed with %s\n", Pa_GetErrorText(error));
        return 1;


    }
    printf("PortAudio Error: %s\n", Pa_GetErrorText(error));

    //terminate port audio
    error = Pa_Terminate();
    if(error != paNoError ){
        printf("error L Pa_Initialize() failed with %s\n", Pa_GetErrorText(error));
        return 1;



    return 0;

}}