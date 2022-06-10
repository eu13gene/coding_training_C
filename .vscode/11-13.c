#include <stdio.h>
#include <string.h>

int main(){
    char str1[20] = "";
    char str2[10] = "Love You";
    char str3[10] = "So Much!!";

    strcpy(str1, str2);
    printf("%s : %d\n", str1, strlen(str1)); // str1 = str2 
    strcat(str1, " ");
    printf("%s : %d\n", str1, strlen(str1)); // str1 = str2 + 공백 한칸
    strncat(str1, str3, 7);
    printf("%s : %d\n", str1, strlen(str1)); // str1 = str2 + 공백한칸 + str3 7바이트만

}