#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int palja[40] = {0};
    int vic = 0, m, k, user, pos;

    srand((unsigned)time(NULL));
    for(k=0; k<5; k++){
        pos = rand() % 40;
        palja[pos] = 8;
        for(m=0; m<40; m++)
            printf("%2d ", m); //두자리수도 있으니까 두자리수 칸을 확보!
        printf("\n");
        for(m=0; m < 40; m++)
            printf(" %d ", palja[m]);
        system("sleep 5");
        system("clear");

        printf("\n\n 8은 몇번에? ");
        scanf("%d", &user);
        if(user == pos)
            printf("\n 맞췄음! %d번 찾음\n\n", ++vic);
        else
            printf("\n 틀렸음! %d번 찾음\n\n", vic);
        palja[pos] = 0;
    }
        return 0;
}