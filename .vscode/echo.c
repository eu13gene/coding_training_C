#include <stdio.h>
#include <stdlib.h>

int main(){
    char ch;

    while(1){
        printf("\n문자 입력: ");
        ch = getchar();
        if(ch != EOF)
            printf("%c, %d \n", ch, ch);
            //putchar(ch);
        else
             break;
    }

    return 0;
}