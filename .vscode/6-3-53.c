#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int com, user;

    srand((unsigned)time(NULL));
    com = rand() % 3;

    printf("가위(0), 바위(1), 보(2) 선택: ");
    scanf("%d", &user);
    printf("com = %d, user = %d\n", com, user);

    switch((com-user+2)%3){
        case 2:
            printf("비겼습니다!\n");
            break;
        case 1:
            printf("사용자 승!\n");
            break;
        default:
            printf("컴퓨터 승!\n");
            break;
    }
    return 0;
}