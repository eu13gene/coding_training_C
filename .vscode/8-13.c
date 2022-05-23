#include <stdio.h>

double ret_cent(double len){
    return (len * 2.54);
}

int main(){
    double conv, inch;

    printf("변환할 인치 값: ");
    scanf("%lf", &inch);

    conv = ret_cent(inch);
    printf("%.2lf inch = %.2lf cm", inch, conv);

    return 0;
}