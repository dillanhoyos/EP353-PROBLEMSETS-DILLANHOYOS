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

   

if (*midi < d){
    *midi = t;
}
else if(*midi > t){
    *midi = d;
}



}