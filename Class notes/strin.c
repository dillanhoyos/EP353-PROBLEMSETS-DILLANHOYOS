#include<stdio.h>

int main(){
    FILE *file;
    file = open("text.txt", "r");

    if(file == NULL) {
        printf("File cannot be opened or does not exist\n");
        return 1;

    }
    char string[3];
    int count = 0;

    while(fgets(string, 3, file) != NULL){
        if(strcmp(string,"ta")== 0) count++;

    }
    rewind(file);

    fgets(string, 1, file);

    while(fgets(string, 3, file) != NULL) {

        if(strcmp(string, "ta")== 0) count++;

    }

    print("%d", count);
    
    

    fclose(file);



}