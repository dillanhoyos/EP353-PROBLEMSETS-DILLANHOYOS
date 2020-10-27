#include <stdio.h>
#include <string.h>


char *copyString (char *string){
    char *string2;
    int length; 
    length = strlen(string);
    string2 = (char*)malloc (sizeof(char) * length);
}


int main(){

char input[30];
char copy[30];

printf("input string");
scanf("%s", input);

copy[30] = copyString(&input);

printf("copy%s", input);


return 0;

}