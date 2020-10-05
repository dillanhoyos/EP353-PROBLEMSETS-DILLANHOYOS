#include <stdio.h>

int main (){

    int c;
    while((c = getchar()) != EOF) {
        if(c >= 'A' && c <= 'Z')
            c = c -'A' + 'a';
            putchar(c);

        
    }
    return 0;

}