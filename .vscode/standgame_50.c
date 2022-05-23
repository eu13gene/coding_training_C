#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int chip = 10, bet, user, com, k = 1;

    srand((unsigned)time(NULL));
    while(k<6){
            com = rand() % 10 + 1;
            user = rand() % 10 + 1;
            printf("\nchip=%d you=%d 배팅(0은 포기): ", chip, user);
            scanf("%d", &bet);
            printf("com = %d: ", com);
           

            if (bet == 0){
                printf("이번 판은 포기했습니다.\n");
            }
         
            if (bet <= 0 || bet > chip){
                printf("\n");
                continue;
            }

            if (user > com){
                chip = chip + bet;
                printf("사용자 승! chip = %d \n\n",chip);
                k = k + 1;
            }

            else if (user == com){
                printf("비겼습니다! chip = %d\n\n", chip);
                continue;
            }

            else{
                chip = chip - bet;
                printf("컴퓨터 승! chip = %d\n\n", chip);
                k = k + 1;
            }

            if (chip <= 0)
                break;
    }
    return 0;
    }
