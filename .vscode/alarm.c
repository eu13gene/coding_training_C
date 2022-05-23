#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){

    int min, sec;
    int limit, k;

    printf("분 초 입력: ");
    scanf("%d %d", &min, &sec);

    limit = min * 60 + sec;
    for (k = limit; k > 0; k--){
        usleep(10000);
        system("clear");
        sec -= 1;
        
        if (sec < 0){
            sec = 59;
            min--;
        }
        printf("%d분 %d초 ", min, sec);
    }
    printf("띠링띠링");
    return 0;
}
