#include <stdio.h>


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