#include <stdio.h>

int main() {
	int  i, temp;
	
	
int numbers[] = {5, 9, 1, 2, 4, 8, 3};

	for(i = 0; i < 7; i++) {
		if(i < (7/2)) {
			temp = numbers[i];
			numbers[i] = numbers[7-(i+1)];
			numbers[7-(i+1)] = temp;
		}
     printf("the value of arr at index %d is %d \n",i , numbers[i]);
	}
 
  

	return 0;
}
//taken from https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/c-programming-basic-exercises-51.php
