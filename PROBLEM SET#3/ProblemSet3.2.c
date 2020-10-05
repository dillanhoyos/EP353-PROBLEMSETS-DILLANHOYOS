#include <stdio.h>

int main()
{
    char note = 'B';
   

    int pc1;






    switch (note) {
        case 'C': pc1 = 0;
        
        case 'D': pc1 = 2;
        
        case 'E': pc1 = 4;
        case 'F': pc1 = 5;
        
        case 'G': pc1 = 7;
        
        case 'A': pc1 = 9;
        
        case 'B': pc1 = 11;
    
    printf("A note '%c' translates\n ", note);
    printf( "to %i in pitch class\n", pc1);
    
    break;



       
       

       
        default:
           printf("MIDI note %d is not in the range of MIDI.\n", note);
    }
    

 

    return 0;

}


