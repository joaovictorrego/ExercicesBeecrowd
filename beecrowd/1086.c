#include <stdio.h>
#define MAX 100000;

typedef struct{
    int tamanho;
}madeira;

typedef struct {
    madeira madeiras[MAX];
    int qtd;
}lista_madeira;

void inicializarLista(lista_madeira *l){
    l->qtd = 0;
}

int main(){
    int M, N, L, K;
    int *X;

    scanf("%d %d", &M, &N);

    while(M <= 10000 || N >= 1){
        
        scanf("%d", &L);
        scanf("%d", &K);
        
        scanf("%d %d", &M, &N);
    }

    return 0;
}