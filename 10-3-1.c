#include <stdio.h>
int print_score(int *score, int size); 

int main(){
     int jumsu[5] = {67, 89, 77, 100, 98};
     int hap;
     //함수 사용(call)
    hap = print_score(jumsu, 5);
    printf("hap = %d\n", hap);
}

int print_score(int *score, int size)
{

    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        printf("*(score + %d) = %d \n", i, *(score + i));
        sum = sum + *(score + i);
    }

    return sum;
}

