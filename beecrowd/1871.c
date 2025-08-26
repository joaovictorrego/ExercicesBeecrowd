#include <stdio.h>
#include <math.h>

int main(){
    int M, N;
    int R;
    int T;
    int i;
    int aux;

    while(1){
        scanf("%d %d", &M, &N);
        if(M == 0 && M == N){
            break;
        }

        R = M + N;

        //Descobrir o valor de T;
        T = 0;
        while(pow(10, T) <= R){
            T = T + 1;
        }
        T = T - 1;

        for(i = T; i >= 0; i--){
            aux = (int) R / (pow(10, i));
            R = R - (aux * pow(10, i));
            if(aux != 0){
                printf("%d", aux);
            }
        }
        printf("\n");
    }
}
