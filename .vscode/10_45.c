#include <stdio.h>

int main(){
    char str[5] = "ABCD", *p;

    p = &str[1];
    printf("1 = %s, 2 = %c\n", p, p[1]);

    return 0;
    }