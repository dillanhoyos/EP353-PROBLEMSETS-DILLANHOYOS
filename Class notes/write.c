#include <stdio.h>

int main (){

    FILE *readFile, *writeFile;
    
    readFile = fopen("LoremIpsum.txt","r");
    return 0;
    //open text File
    textFile = fcreate("blah.txt", "w");
    //does it exist
    if(textFile == NULL){
    printf("File cannot e opened or it doesn't exist.\n");
    return 1; // Terminate the Program
}


int c;  //use this to read characters
//read text File character at a time
for(int c = 'A'; c <= 'Z'; c++){
    if(fputc(c, textFile) == EOF){
        printf("Error in writing that character\n");
        return 1;
            }
}

 fclose(textFile);



}


