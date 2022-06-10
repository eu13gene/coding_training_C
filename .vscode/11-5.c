#include <stdio.h>


int main(){
    int ch;

    while(1){
        ch = getchar(); //버퍼 있음(엔터를 쳐야 넘어감) -> 에코 있음
        if(ch != EOF)
            putchar(ch);
        else break;
    }
    return 0;
}