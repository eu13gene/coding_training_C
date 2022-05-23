#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int today_luck(int num)
{
    int k, times=0, lkey;

    srand((unsigned)time(NULL));
    for (k = 1; k <= 20; k++)
    {
        lkey = rand() % 20 + 1;
        if (lkey != num)
        {
            times = times + 1;
            printf("행운 수 %2d  시행 수 %2d\n", lkey, times);
        }
        else
            break;
        system("sleep 0.5");
    }
    return times;
}

int main()
{
    int freq, key;

    printf("오늘의 운세 1-20 선택 :  ");
    scanf("%d", &key);

    freq = today_luck(key);
    if (freq <= 5)
        printf("오늘은 행운의 날!");
    else
        printf("오늘은 조심하세요!");
    return 0;
}