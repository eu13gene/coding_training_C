#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    //int num[] : 에러
    int num[] = {5,6,7,8,32,5,3}; // []안에 7이 자동으로 넣어짐

    //int num[][] : 에러
    //int num[3][] : 에러
    //int num[3][] = {1,3,45,5,6,6} : 에러

    int num [][3] = {1,3,25,5,6,6}; // num[2][3] 라고 컴파일러가 자동으로 넣어줌

    //빈 괄호는 뒤에서부터 채워야되고 빈 괄호는 1개만 가능
    //int num[][][]
    //int num[2][3][]
    //int num [][3][2] -> 셋 다 에러

    int num[][2][2] = {1,2,4,5,6,7,8,9,8,5,4,3,2}; //얘만 가능
    }
