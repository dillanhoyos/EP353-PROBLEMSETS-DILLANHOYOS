#include <stdio.h>
// initialize variable
 void countCharacter(char name[30], char character){
// count initialize
  int count = 0;
  
     for (int i = 0; i < 30; i++)
     {
        if (name[i] == character) {
            count++;
        }

     }
     printf("A string %s  has %i %cs\n", name, count, character);
 }
   
int main(){


  char name[30];
  printf("Enter name: ");
  scanf("%s", name);
  getchar();
  char character;
  printf("enter letter:");
  character = getchar();
  // recall function
  countCharacter(name, character);
  return 0;
}

