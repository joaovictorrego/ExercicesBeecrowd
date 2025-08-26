#include <stdio.h>

int main(){
    int N;
    int pi;
    int soma = 0;
    int i;
    int ndqici;
    scanf("%d", &N);

    while(N != -1){
        ndqici = 0;
        soma = 0;
        for(i = 0; i < N; i++){
            scanf("%d", &pi);
            soma = soma + pi;
            if(soma % 100 == 0){
                soma = 0;
                ndqici = ndqici + 1;
            }
        }
        printf("%d\n", ndqici);

        scanf("%d", &N);
    }
    return 0;
}
