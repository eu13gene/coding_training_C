#include <stdio.h>
#include <stdlib.h>


int main()
{
    int k, garo, sero;

    for(k=0; k < 70; k++){
        system("clear");
       int garo_limit = rand() % 70 ;
       int sero_limit = rand() % 40 ;
        for (sero = 0; sero < sero_limit; sero++)
            printf("\n");
        for(garo = 0; garo < garo_limit; garo++)
            printf(" ");

        printf("<#=#>\n");
        system("sleep 0.5");
    }
    
    return 0;
}


