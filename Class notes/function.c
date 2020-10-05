#include <stdio.h>
//1.DEclare my function
int add(int x, int y);
//2.Define my function 
int add(int x, int y){
    return x + y;

}
int main (){
    //3.Use my funnction
int a = 10,  b = 20;

printf("Addition of %d and %d is %d \n", a, b, add(a, b));

 return 0;

}