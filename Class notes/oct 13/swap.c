#include <stdio.h>


void swap(int a, int b);
void swapPointer(int *a, int *b);

int main(){

    int x = 10;
    int y = 20;
    swap(x,y);
    printf("x = %d, y = %d\n", x, y);
    swapPointer(&x, &y);
    printf("x = %d, y = %d\n", x, y);
    
    return 0;

}

void swap(int a, int b){
    int c = a;
    a = b;
    b = c;
}
void swapPointer(int *a, int *b){
    int c = *a;
    *a = *b;
    *b = c;

}
