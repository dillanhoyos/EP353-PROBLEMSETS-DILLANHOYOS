# EP353-Final Project
## WaveBlaster

### Submitted by
Dillan Hoyos

### Design 
The Design proccess that took place on this program was taken from the idea of creating a sound Design tool that would let me create LASER GUN Sounds. After studying some of the properties of a Laser Gun Audio File. I presented This project to my professor Akito. 

My first solution was going to be using a wavetable synthesizer and taking one cycle of a wave try to emulate the sound of a laser Sound. I implemented this with Sound Pipe twosc.c this was not really feasible.

My second solution was found by compiling all the examples on Sound pipe and try to see which one could emulate this Sound. I found this sweep Genereator called Tseg.c, after having a discussion with the class last week and having a conversation with my teacher I came up with the Idea of using this Tseg.c Sweep genereator and editing the parameter to be really Short and emulate this Sound. 

After that I Implemented a For loop to create kNumBatchFiles definition and with that I was able to define how many files I was going to export in the future. 
The next Step was to create a Randomization on the Parameters of Type, Duration and End point. 

I utilized the Srand function and the Rand[max] function to create the randomization on each File of the batch after implementing that I had as many different Laser Sounds to add into my next sound Design project or Library.




 
