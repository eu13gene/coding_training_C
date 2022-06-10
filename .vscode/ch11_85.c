#include <stdio.h>
#include <stdlib.h>

int main(){
    char str[40] = "C programming";
    int len = 0, k, m, jul = 0, a = -1;

    while(str[len] != 0)
        len++;

    for(k = 0; k < 500; k++){
        system("clear");
        while (jul < a){
            printf("\n");
            jul ++;
        }
        jul = 0;
        if(k % len == 0) a++;
        for(m = 0; m < len; m++)
            putchar(str[(m+k) % len]);
        system("sleep 0.2");
    }
    return 0;
}