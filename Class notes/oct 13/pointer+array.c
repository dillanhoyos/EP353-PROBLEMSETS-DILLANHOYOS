#include <stdio.h>

int main(){
    char str[4] = { 'a', 'b', 'c', '\0'};
    char *pc = &str[1]; //base address
    printf("the address of pc is %p\n", pc);

    pc = &str[1];
    //pc = str + 1;

for (int i = 0; i < 4; i++)
{
    pc = &str[i];
    printf("The address of str at index %d is %p\n", i, pc);
}

    int num[] = {4,3,2,1};
    int *ip = &num[0];
    for (int  i = 0; i < 4; i++)
    {
        ip = &num[i];
        printf("the address of num at index %d is %p\n", i, ip);
        
            }
    
   
    return 0;

}