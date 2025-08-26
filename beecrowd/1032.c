#include <stdio.h>
#include <stdlib.h>

int proximoNumeroPrimo(int n) {
    if (n <= 1) return 2;

    int proximo = n + 1;
    while (1) {
        int primo = 1;
        for (int i = 2; i * i <= proximo; i++) {
            if (proximo % i == 0) {
                primo = 0;
                break;
            }
        }
        if (primo) return proximo;
        proximo++;
    }
}

typedef struct aux{
  int n;
  struct aux *prox;
}ELEMENTO, *PONT;

typedef struct{
  PONT cabeca;
}LISTA;

void inicializarLista(LISTA *l){
  l->cabeca = (PONT) malloc(sizeof(ELEMENTO));
  l->cabeca->prox = l->cabeca;
}

int inserirElemento(LISTA *l, int x){
  PONT atual, ant, novo;
  if(l->cabeca == l->cabeca->prox){
    novo = (PONT) malloc(sizeof(ELEMENTO));
    l->cabeca->prox = novo;
    novo->n = x;
    novo->prox = l->cabeca;
    return 1;
  }
  atual = l->cabeca->prox;
  while(atual != l->cabeca ){
    ant = atual;
    atual = atual->prox;
  }
  novo = (PONT) malloc(sizeof(ELEMENTO));
  novo->n = x;
  novo->prox = l->cabeca;
  ant->prox = novo;
  return 1;
}
int ultimoSobrevivente(LISTA *l, int m){
  int primo = 1;
  int i;
  PONT ant, atual, apagar;
  atual = l->cabeca->prox;
  ant = l->cabeca;
  while(m > 1){
    primo = proximoNumeroPrimo(primo);
    i = 0;
    while(i < primo){
      i = i + 1;
      if(i == primo){
        ant->prox = atual->prox;
        apagar = atual;
        atual = atual->prox;
        if(atual == l->cabeca){
          atual = l->cabeca->prox;
        }
        free(apagar);
        m = m - 1;
        break;
      }
      ant = atual;
      atual = atual->prox;
      if(atual == l->cabeca){
          atual = l->cabeca->prox;
      }
    }

  }
  m = atual->n;
  return m;
}
int main(){
  int i;
  int n;
  int resultado = 0;

  scanf("%d", &n);
  while(n != 0){
    LISTA lista;
    inicializarLista(&lista);
    for(i = 1; i <= n; i++){
      inserirElemento(&lista, i);
    }
    resultado = ultimoSobrevivente(&lista, n);
    printf("%d\n", resultado);
    scanf("%d", &n);
  }

  return 0;
}
