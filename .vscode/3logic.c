#include <stdio.h>

int main(){
    int num1, num2, max;

    printf("두 수를 입력하시오: ");
    scanf("%d %d", &num1, &num2);

    max = (num1 > num2) ? num1 : num2;
    printf("큰 수는 %d입니다.\n", max);
    printf("num2의 절댓값은 %d\n", (num2 < 0) ? -num2 : num2);
    printf("num1 = %d은 ", num1);
    (num1 % 2 == 0) ? printf("짝수") : printf("홀수");

    return 0;
}