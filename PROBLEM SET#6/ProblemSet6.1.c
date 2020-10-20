#include<stdio.h>
void adjustMIDIRange(char *midi);// function declaration

int main(){

    char a;      //variable declaration


    printf("input midi ");

    scanf("%i", &a);
 
    adjustMIDIRange(&a);// function call


printf("%d\n", a);
return 0;

     
}
void adjustMIDIRange(char *midi){ 

   int d = 0;
   int t = 127;

if (*midi < d){//comparison for range of less than 0
    *midi = t;
}
else if(*midi > t){//comparison for range of more than 127
    *midi = d;
}



}