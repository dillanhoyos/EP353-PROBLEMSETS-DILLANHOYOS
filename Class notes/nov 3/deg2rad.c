#include <stdio.h>
#include <math.h>

int main (){
    double degrees, radians, ratio;
    FILE *file;

    //Comma Sepated 
    file = fopen("SineWave.csv", "w");
    if(!file) return 1;

    for (int x = 1; x < 2160; x++)
{
    double y = sin(x)/x ;
  
    fprintf(file, " %d, %f,\n", x, y);
    printf("%d, %f\n", x, y);

}
fclose(file);
return 0;




}