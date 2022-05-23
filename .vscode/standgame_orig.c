#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int user, com, k;
    int chip = 10, bet;

    srand((unsigned)time(NULL));
    for (k = 1; k < 6; k++)
    {
        com = rand() % 10 + 1;
        user = rand() % 10 + 1;
        printf("\nchip=%d you=%d 배팅(0은 포기): ", chip, user);
        scanf("%d", &bet);

        printf("com=%d: ", com);

        if (bet <= 0 || bet > chip)
            continue;

        if (user >= com)
        {
            chip = chip + bet;
            printf("사용자 승! chip = %d \n\n", chip);
        }

        else
        {
            chip = chip - bet;
            printf("컴퓨터 승! chip = %d\n\n", chip);
        }

        if (chip <= 0)
            break;
    }
    return 0;
}