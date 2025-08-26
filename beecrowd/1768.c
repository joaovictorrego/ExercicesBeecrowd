#include <stdio.h>

int main(){

    int N;
    int i;
    int j;
    while(scanf("%d", &N) != EOF){
        i = 1;
        while(i <= N){
            for(j = 0; j < ((N - i) / 2.0); j++){
                printf(" ");
            }
            for(j = 0; j < i; j++){
                printf("*");
            }
            i = i + 2;
            printf("\n");
        }
        i = 1;
        for(j = 0; j < ((N - i) / 2.0); j++){
            printf(" ");
        }
        for(j = 0; j < i; j++){
            printf("*");
        }
        printf("\n");
        i = 3;
        for(j = 0; j < ((N - i) / 2.0); j++){
            printf(" ");
        }
        for(j = 0; j < i; j++){
            printf("*");
        }
        printf("\n");
        printf("\n");
    }

    return 0;
}
