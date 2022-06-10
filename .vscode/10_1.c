#include <stdio.h>

int main(){
   int num = 5, *p_num, copy;

   p_num = &num; // p_num의 주소가 num의 주소와 같아짐
   *p_num = 7; // p_num이라는 주소(=num의 주소)가 가리키는 값이 7이다. 
   printf("num = %d, p_num = %d\n", num, *p_num); //num주소가 가리키는 값이 7이 되었으므로 num = 7, 
                                                //p_num주소가 가리키는 값이 7.

    num = 9;
    copy = *p_num; //p_num주소가 가리키는 값(=num 주소가 가리키는 값 = 9로 변경) => copy = 9
    printf("copy = %d, p_num = %d", copy, *p_num);

    return 0;
}                                       