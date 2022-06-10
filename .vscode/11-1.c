#include <stdio.h>
#include <stdlib.h>

int main(){
    char str[] = "C Programming", *p = str;

    while(*p != 0){
        printf("%c\n", *p++);
        system("sleep 0.5");
    }
    return 0;
}