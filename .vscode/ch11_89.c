#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char pwd[20];
    int low = 0, upp = 0, dig = 0, pct = 0;
    int n=0, k;

    printf("사용할 암호 입력: ");
    scanf("%s", pwd);

    for(k = 0; pwd[k] != 0; k++){
        if(islower(pwd[k]))
            low = 1;
        else if (isupper(pwd[k])) 
            upp = 1;
        else if (isdigit(pwd[k]))
            dig = 1;
        else if (ispunct(pwd[k]))
            pct = 1;
    }
    if((low + upp + dig + pct) >= 3){
        if(strlen(pwd) <= 7) {printf("암호가 너무 짧아요!\n");}
        else {printf("사용 가능한 암호입니다.\n");} 
    }
    else {printf("불가능한 암호!\n");}
    return 0;
}