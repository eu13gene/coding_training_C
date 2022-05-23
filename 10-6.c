#include <stdio.h>
int main(void){


    int num[5] = {6, 7, 13, 135, 32}; //num은 배열이라서 주소 변경 불가능

    printf("num = %d \n", num);
    printf("&num[0] = %d \n", &num[0]); // &의 의미: 주소
    printf("&num[1] = %d \n", &num[1]);
    printf("&num[2] = %d \n", &num[2]);
    printf("num[0] = %d \n", num[0]);
    printf("* num= %d \n", *num); // *의 의미: 값

    int *pnum; // pnum은 주소변수라 주소변경이 가능!
    pnum = num;
    printf("pnum = %d\n", pnum);
    printf("pnum+1 = %d\n", pnum + 1);
    printf("pnum+2 = %d\n", pnum + 2);
    printf("pnum+3 = %d\n", pnum + 3);

    printf("pnum[2] = %d\n", pnum[2]);

    pnum = &num[3];
    printf("pnum = &num[3]; ==> pnum = %d \n", pnum);

    //여기서 잘 이해하면 됨!
    printf("pnum[0] = %d\n", pnum[0]);
    printf("pnum[1] = %d\n", pnum[1]);
    //pnum에 &num[3]을 넣었는데... 그러면 pnum[0](배열의 시작) = num이라는 배열의 인덱스 3에 해당하는 135이고
    //pnum[1]은 그 다음 인덱스인 인덱스 4에 해당하는 32가 출력됨!?


    // num = pnum; 변경불가능한 num에 주소변수 pnum을 대입할 수는 없음! 

    return 0;
}