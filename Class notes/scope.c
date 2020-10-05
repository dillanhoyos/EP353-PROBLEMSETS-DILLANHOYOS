#include <stdio.h>

int foo = 0;
 
void func ();

void func (){
    int bar = 2;//local variable. The scope is limited to this function named func.

}
 int main()
{
    int me = 1;

    printf("Gloal: %d\n", foo);
    printf("Local: %d\n", me);
    printf("Func's variale: $d\n", bar);



}