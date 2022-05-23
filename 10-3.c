#include <stdio.h>
int main(){

    char str[5+1] = "korea";
    for (int i=0; i < 6; i++){
        printf("str[%d] = %c\n", i, str[i]);
    }

    for (int i = 0; i < 6; i++){
        printf("&str[%d] = %d, %p", i, &str[i], &str[i]);
        // 메모리는 1바이트씩 나누어져있으니까(자료형이 char일 때는) 주소를 10진수 %d로 찍으면 1씩 커지게 찍힌다
        // 그리고 16진수 %p(pointer)로 찍어도 하나씩 커지게 찍힌다.
        printf("\n");
        
    }

    printf("str = %d \n", str); // str=주소이고, 데이터가 들어있는 시작점(= 0번 인덱스)의 주소가 str=주소임!

    printf("* str = %c \n", *str); //*str은 물론 값이지만 이 주소로 가면 char가 있으므로 문자 1개가 출력됨
    printf("*(str+1) = %c \n", *(str + 1)); 
    printf("*(str+2) = %c \n", *(str + 2));
    printf("*(str+3) = %c \n", *(str + 3));
    printf("*(str+4) = %c \n", *(str + 4));

    char *cp; // ****  *cp 주소로 가면 문자(열)가 있다는 뜻!! *******
    cp = NULL;  // NULL은 cp 안에 아무런 값도 안 들어있다는 뜻
    printf("cp = %d\n", cp); //0이 출력됨

    cp = str; // cp가 배열의 주소를 받으면 배열처럼 쓸 수 있다

    printf("cp = %d\n", cp); //cp = str이므로 시작점의 주소가 출력됨
    printf("*(cp+0) = %c \n", *(cp + 0)); // *(cp + 0)은 값이다 = 시작점 주소값에 해당하는 문자!!!
    printf("*(cp+1) = %c \n", *(cp + 1)); 
    printf("*(cp+2) = %c \n", *(cp + 2));
    printf("*(cp+3) = %d \n", *(cp + 3));
    printf("*(cp+4) = %d \n", *(cp + 4));

    for(int i= 0; i < 6; i++){
        printf("cp[%d] = %c\n", i, cp[i]);
    }
    return 0; 
}
  