#include <stdio.h>
#include <string.h>

int main(){
    char str1[20] = "Love you So Much!";
    char str2[10] = "Love yOu";
    int st;

    st = strcmp(str1, str2);
    printf("str1과 str2 비교: %d\n", st);
    st = strncmp(str1, str2, 5);
    printf("앞에서 5글자 비교: %d\n", st);
    
    return 0;
    }