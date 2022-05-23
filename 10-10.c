#include <stdio.h>
int main(){
    //주소상수들
    char ca[50];
    int ia[20];
    double da[10];

    printf("ca = %p, %d\n", ca,ca);
    printf("ia = %p, %d\n", ia, ia);
    printf("da = %p, %d\n", da, da);

    //주소변수들
    char* cp;
    int* ip;
    double *dp;

    cp = ca;
    ip = ia;
    dp = da;

    printf("ca = %d cp = %d \n", ca, cp);
    printf("cp + 1 = %d\n\n", cp + 1); //<주소에서> char는 1바이트씩 커짐

    printf("ia = %d ip = %d \n", ia, ip);
    printf("ip + 1 = %d\n\n", ip + 1); // <주소에서> int는 4바이트씩 커짐

    printf("da = %d dp = %d \n", da, dp);
    printf("dp + 1 = %d\n\n", dp + 1); //<주소에서> double은 8바이트씩 커짐

    return 0;
}