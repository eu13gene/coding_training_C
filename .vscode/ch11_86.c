#include <stdio.h>
#include <stdlib.h>


int main()
{
    char str[40];
    int len = 0, k, m;

    printf("아무 문자열이나 입력하세요: ");
    scanf("%s", str);

    while (str[len] != '\0')
        len++;
    for (int i = len + 1; i < 40; i++)
        str[i] = ' ';

    for (k = 0; k < 500; k++)
    {
        system("clear");
        for (m = 0; m < 40; m++)
        {
            putchar(str[(m + k) % 40]);
        }
        system("sleep 0.2");
    }
    return 0;
}