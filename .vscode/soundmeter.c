#include <stdio.h>
#include <stdlib.h>

void sound_meter(int dan){
    int k, jul, met;

    for (k = 1; k < 100; k++)
    {
        system("clear");
        for (jul = 1; jul <= dan; jul++)
        {
            for (met = 0; met <= rand() % 80; met++)
                printf("ㅁ");
            printf("\n");
        }
    }
    return;
}

int main(){
    sound_meter(8);
    sound_meter(16);
    sound_meter(24);

    return 0;
}