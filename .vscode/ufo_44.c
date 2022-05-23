#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k, sp, m = 0;

    for (k = 0; k < 140; k++)
    {
        system("clear"); //커서가 첫번째 줄로 다시 돌아감!!
        if (k >= 70)
        {
            m = k - 70;
        }
        if (k % 2 == 0)
            printf("\n");
        for (sp = 0; sp <= k - 2 * m; sp++)
        {
            printf(" ");
        }
        printf("<#=#>\n");
        system("sleep 0.1");
    }
    return 0;
}