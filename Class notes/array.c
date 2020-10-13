#include <stdio.h>
int main(){
    //type name[size]
    int data[10];

    //Initializing 
    int numbers[4] = {5, 3, 0, 6};
    int nums[] = {5, 3, 0, 6};

    printf("%d\n", nums[0]);

for (int i = 0; i < 10; i++)
{
    data[i] = 0;

}

for (int i = 0; i < 10; i++)
{
    printf("%d", data[i]);
}

printf("\n");
    return 0;

}cl