#include <stdio.h>

int main(){

    int N;
    int T[1020];
    int VT[100];
    int i, j;

    scanf("%d", &N);

    while(N != 0){

        for(i = 0; i < N; i++){
            scanf("%d", &VT[i]);
        }

        for(i = 0; i < 1020; i++){
            T[i] = 0;
        }

        for(i = 0; i < N; i++){
            for(j = 1; j <= 10; j++){
                T[VT[i] + j] = 1;
            }
        }
        j = 0;
        for(i = 0; i < 1020; i++){
            if(T[i] == 1){
                j = j + 1;
            }
        }
        printf("%d\n", j);
        scanf("%d", &N);
    }

    return 0;
}
