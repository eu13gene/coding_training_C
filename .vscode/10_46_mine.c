#include <stdio.h>

int main(){
    char str[225], *p;

    p = str;
    printf("소문자 입력: ");
    scanf("%s", str);
    

    while(*p != '\0'){
        //의문2) char *p로 선언을 했으면 *p가 char일 것 같은데 왜 부등식에 숫자랑 같이 써도 작동이 되는거죠??마치 int처럼? 
        if(*p >= 0 && *p <= 9){ // 숫자
            printf("%d", *p); //의문1) 왜 %d로 해도 되고 %c로 해도 되지?
        }
        else if(*p >= 97 && *p <= 122){ //소문자
            printf("%c", *p - 32);
        }
        else{ //특수기호
            printf("%c", *p);
        }
        p++;
    }

    return 0;
}