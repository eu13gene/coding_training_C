#include <stdio.h>

void swap(int *one, int *two){
    int temp;

    temp = *one;
    *one = *two;
    *two = temp;
}

int main(){
    int first = 7, second = 24;

    swap(&first, &second);
    printf("f= %d, s= %d", first, second);

    return 0;
}