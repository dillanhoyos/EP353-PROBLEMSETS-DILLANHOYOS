#include <stdio.h>

int main (){
    int *ip;
    int i;
    double *dp;
    ip = &i;
    //dp = &i;

    dp = (double*) &i;

    return 0;

}