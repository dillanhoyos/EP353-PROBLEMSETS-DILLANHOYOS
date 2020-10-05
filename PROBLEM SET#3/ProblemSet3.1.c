#include <stdio.h>
#include <math.h>

int main()
{
    char loudness ;
    float amp ;
    

   loudness = -80;


amp = powf( 10, loudness/20);

printf("loudness %0.7f ", amp);





}

