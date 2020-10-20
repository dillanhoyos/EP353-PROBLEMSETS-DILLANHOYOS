#include <stdio.h>

int main(){

    char a = 'a';

    int byteSize = sizeof(a);
    printf("byte size of char is: %d\n", byteSize);
    byteSize = sizeof(int);
    printf("Byte size of int is: %d\n", byteSize);

    char str[4];
    byteSize = sizeof(str);
    printf ("Byte size of str is: %d\n", byteSize);

    int num[4];
    byteSize = sizeof(num);
    printf("Byte size of int is: %d\n", byteSize);


    return 0;

}