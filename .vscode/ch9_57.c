#include <stdio.h>
#include <stdlib.h>

#define HGT 24
#define WTH 60

int main(){
    int k, jul, met, sound[WTH];

    for(k=0; k<200; k++){
        system("clear");
        for (met = 0; met < WTH; met++)
            sound[met] = rand() % 25;
        
        for(jul = 0; jul < (HGT + 1); jul++){
            for (met = 0; met < WTH; met++){
                if (sound[met] <= jul) 
                    printf("ㅁ");
                else
                    printf("  ");
            }
            printf("\n");
    }
}
    return 0;
}
