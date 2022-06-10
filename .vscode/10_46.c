#include <stdio.h>

int main(){
    char str[225], *p;

    p = str;
    printf("소문자 입력: ");
    scanf("%s", str);

    while (*p != '\0'){
        if (*p >= 97 && *p <= 122){
            printf("%c", *p - 32);
        }
        else{
            printf("%c", *p);
        }
        p++;
    }
    return 0;
}