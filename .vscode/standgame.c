#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int chip_result = 10, batting_chip, user, com,k;

    srand((unsigned)time(NULL));
    for(k=1 ; k <= 5; k ++){
        com = rand() % 10 + 1;
        user = rand() % 10 + 1;
        printf("\n내기에 걸 칩 개수: ");
        scanf("%d", &batting_chip);
        printf("chip = %d, you = %d 배팅(0이면 포기): %d\n", chip_result, user, batting_chip);

        printf("com = %d: ", com);
        
        if (batting_chip <= 0 || batting_chip > chip_result)
            continue;

        if (user >= com){
            chip_result = chip_result + batting_chip;
            printf("사용자 승! chip = %d \n\n", chip_result);
        }

        else{
            chip_result = chip_result - batting_chip;
            printf("컴퓨터 승! chip = %d\n\n", chip_result);
        }

        if (chip_result <= 0)
            break;
}
    return 0;
}