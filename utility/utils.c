#include "utils.h"

void pause(bool wait, int duration){
    if (wait == true){
        sleep(duration);
    }else{
        printf("\n\nPress Enter to continue...\n");
        getchar();
    }
}