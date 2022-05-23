#include <stdio.h>
#include <stdlib.h>

int main(){
    int k, jul, met, sound[60];

    for(k=0; k<200; k++){
        system("clear");
        for (met = 0; met < 60; met++)
            sound[met] = rand() % 25;
        
        for(jul = 0; jul < 25; jul++){
            for (met = 0; met < 60; met++){
                if (sound[met] <= jul) 
                    printf("  ");
                else
                    printf("ㅁ");
            }
            printf("\n");
    }
}
    return 0;
}

