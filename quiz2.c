#include <stdio.h>
int main(){

    char a;
    int seat[10] ={0};
    int num , s, check, k;
    

    while(1){
        printf("\n좌석을 예약하시겠습니까?(y 또는 n) ");
        scanf("  %c", &a);

        if(a == 'y'){
            printf("몇번째 좌석을 예약하시겠습니까? ");
            scanf("%d", &k);
            if (seat[k - 1] == 0){
                printf("예약되었습니다.\n");
                printf("------------------------------------------\n");
                for (s = 1; s < 11; s++)
                {
                    printf("%4d", s);
                }
                printf("\n------------------------------------------\n");
                for (check = 1; check < 11; check++)
                {
                    if (check == k)
                    {
                        seat[k - 1] = 1;
                    }
                    printf("%4d", *(seat + (check - 1)));
                    // printf("%4d", seat[check-1]);
                }
            }
            else if(seat[k-1] == 1){
                printf("이미 예약된 자리입니다. 다른 좌석을 선택하세요.\n");
                printf("------------------------------------------\n");
                for (s = 1; s < 11; s++){
                    printf("%4d", s);
                }
                printf("\n------------------------------------------\n");
                for (check = 1; check < 11; check++){
                    printf("%4d", *(seat + (check - 1)));
            }
        }
        }
        else    break;
    }
        return 0;
}