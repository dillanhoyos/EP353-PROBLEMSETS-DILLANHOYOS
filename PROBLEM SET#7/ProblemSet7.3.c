#include<stdio.h>


const int NOTES = 10;
struct MIDINote
{
    unsigned char pitch;
    unsigned char velocity;
    unsigned char channel;
};
//ypedef struct MIDInote MIDINote;


int main(){
    struct MIDINote note = {60,127,1};


    scanf("%d",  &note.pitch);
    scanf("%d",  &note.velocity);
    scanf("%d", &note.channel);

  printf("The MIDI note has:\nPitch -> %d\nVelocity -> %d\nChannel -> %d\n ", note.pitch, note.velocity, note.channel);

 

  //  for(int i = 0; i < NOTES; i++)
//    {
 //       pitches[i] = 60 + i;
   //     velocities[i] =127;
   //     channels[i] = 1;
  //  }
   //  printf("MIDI note properties:\n");
   // for (int i = 0; i < NOTES; i++)
   // {
  //  printf("Pitch: %d\n", pitches[i]);
    //printf("Velocity: %d\n", velocities[i]);
  //  printf("Channel: %d\n", channels[i]);
 //   }
    
 
   
 

    return 0;

}