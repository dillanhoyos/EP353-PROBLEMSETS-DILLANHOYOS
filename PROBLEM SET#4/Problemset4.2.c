#include <stdio.h>

int num(int);

void sumup(int, int, int);

int num(int sum)
{
return sum;
}

void sumup(int number,int sum, int i ){


    for (i = 1; i <= number; ++i) {
        sum += i;
        printf("Sum = %d\n", sum);

  

    }
}
    
  


int main() {
    int number, i, sum = 0;

    printf("Enter integer: ");
    scanf("%d", &number);

sumup(number, sum, i) ;

// only found the solution by outputting all stages of the sum, the actual sum is at last

    
  
}