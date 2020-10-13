#include <stdio.h>

int main (){
    int sum ;
    int i;
    int arr[10] = {1, 5, 6, 10, 3, 20, 7, 12, 17, 9 };

    for ( i = 0; i < 10; i++)

    {
        sum += arr[i];

        printf("the average integer is = %d\n", sum /10 );



    }
    return 0;

    
}