#include <stdio.h>
#include <stdlib.h>

int main(){
    int pos[26], spd[26], met, k, jul;
    char str[6];

    for(jul = 0; jul < 26; jul++){
        pos[jul] = -24;
        spd[jul] = rand() % 10 + 3;
    }
    printf("5글자를 입력하시오: ");
    scanf("%s", &str[6]);
    

    for(k = 0; k < 100; k++){
        system("clear");
        for(jul = 0; jul < 26; jul ++){
            pos[jul] = pos[jul] + spd[jul];
            if(pos[jul] > 115){
                pos[jul]  = -22;
                spd[jul] = rand() % 20 + 3;
            }
        
        for(met = 0; met <= 115; met++){
            if(pos[jul] == met)
                printf("%s", str);
            else
                printf(" ");
        }
        printf("\n");
        }
    system("sleep 1");
    }
    return 0;
}