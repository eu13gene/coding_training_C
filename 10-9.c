#include <stdio.h>
int main(){
    
    char str[255]; //배열주소 불변
    char *p; //p는 주소변수 

    printf("str = %p, %d \n", str, str); //%p로 찍으면 16진수, %d로 찍으면 10진수

    p = str;
    printf("p = %p, %d \n", p, p);

    printf("문자열 키보드 입력: ");
    scanf("%s", str); //문자열은 변수이름 앞에 & 안 붙여도 됨

    while(*p != NULL){// 어떤 값이 있으면!
        *p = *p - 32; // *p는 특정 값, 대문자와 소문자의 차이가 32 차이임
        printf("p = %d, *p = %c \n", p, *p); // 아스키코드 
        p = p + 1; //char라서 1씩 더하는 거임, int였으면 4씩 더했을 것
    }



    return 0;

}