#include <stdio.h>

//had to initialize all values to -1 because the ++ in the printf would print all numbers starting to add with 1
void increment();
int global = -1;

void increment(){
    static int sint = -1;
    int local = -1; 
   

  printf("%d   %d   %d\n",++local, ++sint, ++global );
    }

   
int main(){


for (int i = 0; i < 10; i++) {
    increment();
  }

}