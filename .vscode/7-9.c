#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    int min, sec;
    int limint, k;

    printf("분 초 입력: ");
    scanf("%d %d", &min, &sec);

    for (; min >= 0; min--){
        for (; sec >= 0 ; sec--){
            system("clear");
            printf("%d분 %d초\n", min, sec);
            sleep (1);

        }
            sec = 59;
    }
    printf("띠링띠링\n");
    return 0;

}