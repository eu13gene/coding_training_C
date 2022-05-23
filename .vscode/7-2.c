#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int com, user, num;
    int k, comwin = 0, userwin = 0;

    srand((unsigned)time(NULL));

    for(k=1 ; k<4 ; k++){
        num = rand();
        com = num % 2;
        printf("홀(1), 짝(0) 입력: ");
        scanf("%d", &user);

        printf("%d \n",num);

        if(com == user){
            printf("맞췄어요! 사용자 %d승!\n", ++userwin);}

        else
            printf("틀렸네요! 컴퓨터 %d승!\n", ++comwin);

        }
    printf("\n사용자 %d승, 컴퓨터 %d승\n", userwin, comwin); 
    
    return 0;
}