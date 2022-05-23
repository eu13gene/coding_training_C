#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int today_luck(int num){
    int k, luck = 60, lkey;

    srand((unsigned)time(NULL));
    for(k=1; k<= 20; k++){
        lkey = rand() % 20 + 1;
        if (lkey != num){
            luck = luck - k;
            printf("행운 수 %2d  %2d만점 사라짐 %4d만점\n", lkey, k, luck);
            }
        else break;
        system("sleep 2");
    }
    return luck;
}

int main(){
    int point, key;

    printf("60만점부터 시작 : 1-20 선택: ");
    scanf("%d", &key);

    point = today_luck(key);
    printf("\n 오늘은 %d만점! \n", point);
    return 0;
}