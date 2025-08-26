#include <stdio.h>
#include <stdlib.h>
int main(){
    int N;
    int i, j;
    char palavra[120];
    int hexValue;
    char *endptr;
    char caracter;
    char hexString[] = "42";
    palavra[0] = '\0';
    scanf("%d", &N);

    for(i = 0; i < N; i++){
        scanf("%s", hexString);
        hexValue = strtol(hexString, &endptr, 16);
        caracter = (char)hexValue;
        for(j = 0; j < 120; j++){
            if(palavra[j] == '\0'){
                palavra[j] = caracter;
                palavra[j + 1] = '\0';
                break;
            }
        }
    }

    printf("%s\n", palavra);

    return 0;
}
