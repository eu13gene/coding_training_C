#include <stdio.h>
#include <stdlib.h>

int main(){
    int k, jul, met;

    for (k = 1; k <= 100; k++){
        system("clear");
        for (jul = 1; jul <= 8; jul++){
            for (met = 0; met <= rand() % 80; met++)
                printf("ㅁ");
            printf("\n");
        }
    }
    return 0;
}
