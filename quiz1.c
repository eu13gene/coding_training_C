#include <stdio.h>
int main(){

    int num;
    int k ;

    printf("1-100 중 아무 숫자나 생각하시오.\n");
    printf("50 맞습니까? : " );
    scanf("%d", &num);
    while(num != 0){
        if (num == 1) {
            k = (k + 100) / 2;
            printf("%d 맞습니까? : ", (k + 100) / 2);
            scanf("%d", &num);
        }
    else if (num == -1){
        printf("%d 맞습니까? : ", k);
        k = k - ((100 - k) / 2);
        scanf("%d", &num);
    }
    else{
        printf("브라보!");
    }
    }
    printf("브라보!\n\n");
    printf("서울과학기술대학교 인공지능응용학과 2212345 안영아 입니다.");
    return 0;
}