#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){

    char passwd[8];
    int i = 0;

    printf("passwd: ");
    while (1){
        passwd[i] = _getch();
        if (passwd[i] != '\n')
            printf("*");
        i = i + 1;
        if(i == 7) break;
    }
    passwd[7] = '\0';
    printf("\n passwd : %s", passwd);

    return 0;
}