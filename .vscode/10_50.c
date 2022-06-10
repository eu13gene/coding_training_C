#include <stdio.h>
int main(){
    int answer;
    int k = 10, temp = 5;
    printf("1~20 중 아무 숫자나 생각하시오.\n");

    while(1){
        printf("%d 맞습니까? : ", k);
        scanf("%d", &answer);

        if (answer == 1){
            k = k + temp;
        }
        else if (answer == -1){
            k = k - temp;
        }
        else if (answer == 0){
            printf("브라보!");
            break;
        }
        temp = (temp+1)/2;
    }
    return 0;
}