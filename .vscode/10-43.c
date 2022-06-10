#include <stdio.h>

int main(){
    int num = 5, copy;
    int *p_num;

    copy = num; 
    p_num = &num; // p_num은 포인터이고 num은 int값이므로 num 앞에 &를 붙여줘야한다.
    printf("참조값 = %d\n", *p_num); //참조값은 주소가 가리키는 값이므로 p_num 앞에 *를 붙여서 p_num주소가
                                    // 가리키는 값을 출력시켜야함

    return 0;
}
