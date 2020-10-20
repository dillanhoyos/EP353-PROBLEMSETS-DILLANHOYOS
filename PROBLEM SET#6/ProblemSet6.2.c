 #include<stdio.h>
//initialize Function
void setArray(int *numbers, int value, int size){
    for(int i = 0; i < size; i++);}
 
 int  main() {
    int array[8];
    int value;
    int size = 8;
    scanf("%d", value);//scan input from user

setArray(&array, value, size); //call function
//print elements in array
for(int i; i < size; i++){
printf("%s", array[i]);
 }

 }