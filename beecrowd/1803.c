#include <stdio.h>
#include <string.h>
#include <math.h>

int caracterParaDecimal(char caracter){
    switch(caracter){
        case '0': return 0;
        case '1': return 1;
        case '2': return 2;
        case '3': return 3;
        case '4': return 4;
        case '5': return 5;
        case '6': return 6;
        case '7': return 7;
        case '8': return 8;
        case '9': return 9;
    }
}
int main(){
    int i, j;
    char matriz[4][100];
    int C[84];
    int numero;
    int exp;
    char letra;
    int tam;

    for(i = 0; i < 4; i++){
        scanf("%s", matriz[i]);
    }
    for(i = 0; i < 84; i++){
        C[i] = 0;
    }

    exp = 3;
    for(i = 0; i < 4; i++){
        for(j = 0; j < strlen(matriz[i]); j++){
            numero = caracterParaDecimal(matriz[i][j]);
            C[j] = C[j] + (pow(10, exp) * numero);
        }
        exp = exp - 1;
    }
    tam = strlen(matriz[0]);

    for(i = 1; i < (tam - 1); i++){
        letra = ((C[0] * C[i]) + C[tam - 1]) % 257;
        printf("%c", letra);
    }
    printf("\n");

    return 0;
}
