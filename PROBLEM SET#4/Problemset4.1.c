#include<stdio.h>

int main(){
    FILE *readFile, *writeFile;

    readFile = fopen("LoremIpsum.txt", "r");
    if(readFile == NULL){

        printf("File cannot be opened or does not exist for readinng.\n");
        return 1;
    }
    writeFile =fopen("IoremIpsum.txt","w");

    if (writeFile == NULL){

        printf("File cannot be opened for writing.\n");
        return 1;

    }


    int c;
    while ((c = fgetc(readFile))!= EOF) {
    if(c >= 'a' && c <= 'z')
      c = c - 'a' + 'A';
   
    fputc(c, writeFile);
  }  

   

    if(readFile) fclose(readFile);
    if(writeFile) fclose(writeFile);

    return 0;




}