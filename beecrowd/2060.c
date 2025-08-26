# include <stdio.h>

int main(){
    int N;
    int L;
    int i;
    int multiploDeDois = 0;
    int multiploDeTres = 0;
    int multiploDeQuatro = 0;
    int multiploDeCinco = 0;

    scanf("%d", &N);

    for(i = 0; i < N; i++){
        scanf("%d", &L);

        if(L % 2 == 0){
            multiploDeDois++;
        }

        if(L % 3 == 0){
            multiploDeTres++;
        }

        if(L % 4 == 0){
            multiploDeQuatro++;
        }

        if(L % 5 == 0){
            multiploDeCinco++;
        }
    }
    printf("%d Multiplo(s) de 2\n", multiploDeDois);
    printf("%d Multiplo(s) de 3\n", multiploDeTres);
    printf("%d Multiplo(s) de 4\n", multiploDeQuatro);
    printf("%d Multiplo(s) de 5\n", multiploDeCinco);
}
