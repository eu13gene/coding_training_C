#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k, jul;

    for (k = 0; k < 27; k++)
    {
        system("clear");
        for(jul = 0; jul <= k; jul++)
            printf("\n");
        if (k % 2 ==0)
        { 
            printf("    ");
        }
        printf("<#=#>\n");
        system("sleep 0.1 ");
    }
    return 0;
}


