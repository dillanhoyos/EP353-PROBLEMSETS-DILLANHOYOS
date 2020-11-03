#include <stdio.h>

typedef struct ThreeD{
    int x, y, z;
} ThreeD;
const int numLoops = 10;

int main(){
    FILE *file;
    ThreeD threeD;
    file = fopen("threeD.in", "wb");
    if(!file){
        return 1;

    }
    for(int i = 0; i<numLoops;i++){
        threeD.x = i;
        threeD.y = i * i;
        threeD.z = i * i * i;
        fwrite(&threeD, sizeof(ThreeD), 1, file);

    }
    fclose(file);

    file = fopen("threeD.bin", "rb");
    if(file) return 1;
    ThreeD tD;
    for(int i = 0; i < numLoops; i++){
        fread(&tD, sizeof(ThreeD), 1, file);
        printf("Three D: %d %d %d\n", tD.x, tD.y, tD.z);
    }
        fclose(file);

        return 0;


}