#include <stdio.h>

int gCount = 20;

int main(){

    int a = 0, b = 1, c, count = 25;
    for (int i = 0; i < count; i++){

        c = 1 + b;
        a = b;
        b = c;

        
        printf("%d: %d\n", i, c);

    }
}