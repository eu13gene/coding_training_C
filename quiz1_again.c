#include <stdio.h>
int main()
{
    int num, k = 50, temp = 25;

    printf("1-100 중 아무 숫자나 생각하시오.\n");
    while (num != 0)
    {
        printf("%d 맞습니까? : ", k);
        scanf("%d", &num);
        if (num == 1)
        {
            k += temp;
        }
        else if (num == -1)
        {
            k -= temp;
        }
        temp = (temp + 1) / 2;
    }
    printf("브라보!\n\n");
    printf("서울과학기술대학교 인공지능응용학과 22102340 이유진 입니다.");

    return 0;
}
