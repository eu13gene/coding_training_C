#include <stdio.h>

int main(){
    char name; // 1바이트 = 영어 한 글자
    name = 'a';
    
    printf("name = %c \n", name);

    //문자열은 맨 끝에 '\0' = NULL(문자열의 끝이라는 뜻) 로 끝나야함
    char text[10]; // 문자배열 

    //문자열은 ""큰따옴표로 
    char temp[10] = "computer"; // 'computer'는 9바이트, ""를 붙이면 NULL을 의미.
                                // []안에 들어있는 수보다 적은 바이트만큼의 문자열을 넣어야함. 
                                //[10]이면 10글자 안됨, 9글자하고 NULL이 최대.

    printf("temp = %s\n", temp);

    //문자 하나씩은 ''작은 따옴표로 
    text[0] = 'k';
    text[1] = 'o';
    text[2] = 'r';
    text[3] = 'e';
    text[4] = 'a';
    text[5] = '\0'; // NULL

    for(int i = 0; i < 6; i++)
        printf("%c", text[i]); // 문자 하나씩 (%c)

    printf("\ntext = %s \n", text); // NULL이 나올 때까지 찍음, 문자열 (%s)
    return 0;
}