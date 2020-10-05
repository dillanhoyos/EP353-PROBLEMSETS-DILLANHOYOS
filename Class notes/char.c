#include <stdio.h>

int main ()
{
    int c;
    printf("Enter a character:");
    c = getchar();

    printf("The character you entered is: ");

    putchar(c);
    printf("\n");

    return 0;

}