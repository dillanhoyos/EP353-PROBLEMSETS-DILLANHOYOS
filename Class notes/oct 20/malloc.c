#include <stdio.h>
#include<stdlib.h>

int main(){
    int *arr = malloc(10*sizeof(int));
    if(arr == NULL){
        printf("malloc failed");
        return 1;
    }
    for(int i =0; i< 10; i++){
        arr[i]= i +1;

    }
    for(int i =0; i< 10; i++){
        printf("%d\n", arr[i]);

        
    }
    free(arr);
    return 0;

}