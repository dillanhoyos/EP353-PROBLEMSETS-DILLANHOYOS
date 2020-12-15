#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "soundpipe.h"

// Compile this program with:
// clang BatchSoundPipe.c -lsoundpipe -lsndfile

#define kNumBatches 20

typedef struct {
    sp_tseg *tseg;
    sp_osc *osc;
    sp_ftbl *ft; 
} UserData;

void process(sp_data *sp, void *udata) {
    UserData *ud = udata;
    SPFLOAT osc = 0, tseg = 0;
    SPFLOAT trig = (sp->pos == 0);
    sp_tseg_compute(sp, ud->tseg, &trig, &tseg);
    ud->osc->freq = 30 + (tseg * 150);
    sp_osc_compute(sp, ud->osc, NULL, &osc);
    sp->out[0] = osc;
}

int main() {
    //srand(time(NULL));
     time_t t;
     srand((unsigned int)time(&t));
    for(int i = 0; i < kNumBatches; i++){
        
        UserData ud;
        sp_data *sp;
        
       
        sp_create(&sp);
        sprintf(sp->filename, "%d.wav", i+1);
        

       
       // float x = ((float)rand()%50/(float)(RAND_MAX)) * a;


        sp_tseg_create(&ud.tseg);
        sp_osc_create(&ud.osc);
        sp_ftbl_create(sp, &ud.ft, 2048);

        // Randomize your parameter here
        
        float a = 0.5;
        float x = (rand() % 5)+1;
        float b = 5.0;
        float s = (float)rand()/((float)RAND_MAX/b) + 0.25;
        float o = (float)rand()/((float)RAND_MAX/a) + 0.1;

        sp_tseg_init(sp, ud.tseg, 0.001);
        ud.tseg->end = s;
        ud.tseg->type = x;
        ud.tseg->dur = o;

        sp_gen_sine(sp, ud.ft);
        sp_osc_init(sp, ud.osc, ud.ft, 0);

        sp->len = 44100 * o;
        sp_process(sp, &ud, process);

        sp_tseg_destroy(&ud.tseg);
        sp_ftbl_destroy(&ud.ft);
        sp_osc_destroy(&ud.osc);

        sp_destroy(&sp);
       

    }
    return 0;
}
