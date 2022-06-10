#include <stdio.h>

int main(){
    char str[5] = "ABCD", *p;

    p = str; //오류: str은 배열이름이자 배열시작주소로 포인터이기 때문에 &없이 대입해야한다
    printf("p = %c, str = %c\n", *p, *str);
    return 0;
}