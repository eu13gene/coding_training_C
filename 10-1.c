#include <stdio.h>
int main(void){
    
    int num; //정수형 변수
    int *p_num; //주소 변수
    printf("sizeof int num = %d\n", sizeof(num));
    printf("sizeof int *p_num = %d\n", sizeof(p_num));

    double dnum; //실수형 변수
    double* p_dnum; // 주소 변수
    printf("sizeof double dnum = %d\n", sizeof(dnum));
    printf("sizeof double *p_num = %d\n", sizeof(p_dnum));

    char cnum; //문자형 변수
    char* ptr_cnum; // 주소 변수
    printf("sizeof char cnum = %d\n", sizeof(cnum));
    printf("sizeof char *c_num = %d\n", sizeof(ptr_cnum));

    return 0;
}