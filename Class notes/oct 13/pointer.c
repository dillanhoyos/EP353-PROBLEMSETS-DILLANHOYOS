#include <stdio.h>

int main(){
     int num = 4;

     float pi = 3.14f;
    
    int *pnum = &num;
    float *ppi = &pi;

    printf("num = %d\n", *pnum);
    printf("pi = %f\n", *ppi);
    printf("addres of num is; %p %p\n", pnum, &num);

    //Equivalent
    pi += num;


    *ppi += *pnum;
    //NULL pointer -. its not pointinng to any memory address
    int *pointer;


    prinf("Memory addres is : %p\n", pointer);
    


    return 0;


}