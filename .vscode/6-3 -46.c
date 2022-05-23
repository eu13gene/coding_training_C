#include <stdio.h>

int main(){
    int ticket;

    printf("1,2,3 중 하나 선택: "); // 오류1 -> printf()로 입력할 수 있는 수를 알려주고 
                                 // 입력을 받을 수 있게끔 만들어야 scanf가 정상적으로 작동할 수 있다
    scanf("%d", &ticket);

    switch(ticket){
        case 1: // 오류2 -> 'case _ :'처럼 콜론을 뒤에 붙여야함
            printf("돌고래 ");
        case 2: // 오류 2 -> 뒤에 콜론을 붙여야함
            printf("10종 ");
            break;
        default:
            printf("입장권 ");
    } // 오류 3 -> return 0; 전에 switch(){}에 걸린 중괄호로 마무리해줘야한다
    return 0;
}
