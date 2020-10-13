#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
    //initialize variables
    int ty;
    int number;

    
    ty = strlen(argv[1]);//length of str
    number = atoi(argv[2]);// convert UserInput to int
    printf("the last %i character of %s is ", number, argv[1]);
    
   
    for ( int i = (ty-number); i <= ty; i++)
    {
       printf("%c",argv[1][i]);
       
    } 
    printf("\n");


  return 0;
}

