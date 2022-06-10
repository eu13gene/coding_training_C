#include <stdio.h>

int main(){
    FILE *fp = NULL;
    FILE *wp = NULL;

    wp = fopen("wtest.txt", "w");
    if(wp == NULL){
        printf("write open 실패\n");
    }
    else printf("write open 성공\n");
    fclose(fp);

    fp = fopen("test.txt", "r");
    if(fp == NULL){
        printf("파일 open 실패!\n");
    }
    else printf("파일 open 성공\n");
    fclose(fp);

    return 0;
}