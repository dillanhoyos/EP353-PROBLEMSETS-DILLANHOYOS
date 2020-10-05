#include <stdio.h>

int bar = 0;
int me = 30;



void funct();
void func(){
    static int foo = 20;
    printf("%d, %d, %d\n", foo, bar, me);

    foo += 1;
    bar += 1;
    me += 1;


    
}
int main(){
    func();
    func();
    
    return 0;

}