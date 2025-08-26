// Leitura de N; OK
// Parar quando saida EOF;OK
// Criar um Vetor X e um VETOR Y com tamanho de N;OK
// Leitura de X e Y;OK
// Ordenar Vetor Y e X com base Y do menor para o maior
// Verificar se X = +1 e -1 se for o oposto sera a sequencia da curva

#include <stdio.h>
#include <stdlib.h>
int main(){
  int N;
  int aux;
  int maior, menor;
  int ant;
  int pontos;
  int a, b;
  int *X;
  int *Y;
  while(scanf("%d", &N) != EOF){
    Y = (int *) malloc(sizeof(int) * N);
    X = (int *) malloc(sizeof(int) * N);
    int i, j;

    for(i = 0; i < N; i++){
      scanf("%d %d", &X[i], &Y[i]);
    }
   
    for(i = 0; i < (N - 1); i++){
      for(j = 0; j < (N - 1); j++){
	if(X[j] > X[j + 1]){
	  aux = Y[j];
	  Y[j] = Y[j + 1];
	  Y[j + 1] = aux;
	  
	  aux = X[j];
	  X[j] = X[j + 1];
	  X[j + 1] = aux;
	}
      }
    }

    maior = Y[0];
    menor = Y[0];
    for(i = 0; i < N; i++){
      // printf("%d %d\n", X[i], Y[i]);
      if(maior < Y[i])
	maior = Y[i];
      if(menor > Y[i])
	menor = Y[i];
    }
    //printf("\n%d %d\n\n",menor, maior);

    pontos = 0;
    menor--;
    maior++;
    for(j = menor; j < maior; j++){
       aux = 0;
       a = 0;
       
       ant = 10000;
       for(i = 0; i < N; i++){
	 if(Y[i] == (j + 1)  && aux == 0 && ant != X[i]){
	   aux = 1;
 	   a = a + 1;
	   ant = X[i];
	 }
	 if(Y[i] == (j - 1) && aux == 1 && ant != X[i]){
	   aux = 0;
	   a = a + 1;
	   ant = X[i];
	 }
       }
       //
       ant = 10000;
       aux = 1;
       b = 0;
       for(i = 0; i < N; i++){
	 if(Y[i] == (j + 1)  && aux == 0 && ant != X[i]){
	   aux = 1;
	   b = b + 1;
	   ant = X[i];
	 }
	 if(Y[i] == (j - 1) && aux == 1 && ant != X[i]){
	   aux = 0;
	   b = b + 1;
	   ant = X[i];
	 }
       }
       if(pontos < a)
	 pontos = a;
       if(pontos < b)
	 pontos = b;

       //printf("%d = %d\n", j, pontos);
    }
    

    printf("%d\n", pontos);
    pontos = 0;
    free(X);
    free(Y);
  }
}
