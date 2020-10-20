#include <stdio.h>

int multiply (int *a, int *b);

int main(){

    int val1;
    int val2;
    int val3;
    printf("number1 ");
    scanf("%d", &val1);
    printf("number2 ");
    scanf("%d", &val2);

   int result = multiply(&val1, &val2);
    printf("The result is: %d\n", result);


}
int multiply (int *a, int *b){

 return *a *  *b;

}


