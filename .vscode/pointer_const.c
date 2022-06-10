#include <stdio.h>

int main(){
    char str[6] = "korea";

    printf("str = %d\n", str);
    printf("str = %d\n", &str[0]);
    printf("str = %d\n", &str);
    printf("str = %d\n", *str);
    printf("str = %c\n", *str);
    printf("str = %c\n", *(str+1));
    return 0;
}