#include <stdio.h>
int main(){

    char str[5] = "ABCD", *p;

    p = str;
    printf("p = %c, str = %c\n", *p, *str);
    printf("p = %s, str = %s\n", p, str);

    return 0;
}