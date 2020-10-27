#include <stdio.h>
int main(){
    int avg = 0;
    int sum = 0;
    int x = 0;
    int size;
     printf("Enter size \n");
        scanf("%i", &size);
    long *num;
    num = (long*)malloc(sizeof(long) * size);
    
    /* Array- declaration – length 4*/

   
    /* We are using a for loop to traverse through the array
     * while storing the entered values in the array
     */

    int i = 0;
    while (i < size)
    {
        printf("Enter number \n");
        scanf("%d", &num[i]);
        if (num[i] == 0){
            break;
        }
        if (i == size){
            break;
        }
        i++;
    }
   
    for (x=0; x < size;x++)
    {
        sum = sum+num[x];
    }
    avg = sum/size;
    printf("Average of entered number is: %d", avg);
    return 0;
}