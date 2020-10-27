#include <stdio.h>
#include<stdlib.h>

int main(){

    int N;
    scanf("%d", N);
    int *arr = malloc(N*sizeof(int));

    if(arr == NULL){
        printf("malloc failed");
        return 1;
    }
   
    for(int i =0; i< 10; i++){
       arr[i] += arr[i]/10;
    }
    
    free(arr);
    return 0;

}