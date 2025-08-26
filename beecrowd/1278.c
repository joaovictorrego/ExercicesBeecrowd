#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void limparBuffer() {
  int c;
  while ((c = getchar()) != '\n' && c != EOF) {
    // Descartar caracteres
  }
}

int main(){
  int N;
  int i, j, k;
  char **palavras;
  int umEspaco;
  
  scanf("%d", &N);
  
  while(N > 0){
    limparBuffer();
    palavras = (char **) malloc(sizeof(char *) * N);
    
    for(i = 0; i < N; i++){
      palavras[i] = (char *) malloc(50 * sizeof(char));
    }

    for(i = 0; i < N; i++){
      fgets(palavras[i], 50, stdin);
      palavras[i][strcspn(palavras[i], "\n")] = '\0';
    }
    int maior = 0;
    for(i = 0; i < N; i++){
      umEspaco = 0;
      char aux[50] = "";
      k = 0;
      
      for(j = 0; j < strlen(palavras[i]); j++){
	if(palavras[i][j] != 32){
	  aux[k] = palavras[i][j];
	  k++;
	  umEspaco = 0;
	}
	else{
	  if(umEspaco == 0){
	    aux[k] = 32;
	    k++;
	    umEspaco = 1;
	  }
	}
      }
      strcpy(palavras[i], aux);
      if(palavras[i][0] == ' '){
	for(j = 1; j < (strlen(palavras[i]) + 1); j++){
	  palavras[i][j - 1] = palavras[i][j];
	}
      }
      for(j = 1; j < (strlen(palavras[i]) + 1); j++){
	if(palavras[i][j] == '\0'){
	  for(k = j; k >=0; k--){
	    if(palavras[i][k - 1] >= 65 && palavras[i][k - 1] <= 90){
	      break;
	    }
	    else{
	      palavras[i][k - 1] = palavras[i][k];
	    }
	  }
	}
      }
      
      
      if(strlen(palavras[i]) > maior){
	maior = strlen(palavras[i]);
      }
      // printf("%s", palavras[i]);
    }

    for(i = 0; i < N; i++){
      for(j = 0; j < ( maior - strlen(palavras[i]) ); j++){
	printf(" ");
      }
      printf("%s\n", palavras[i]);
    }

    for (i = 0; i < N; i++) {
      free(palavras[i]);
    }

    free(palavras);
    
  }

  return 0;
}
