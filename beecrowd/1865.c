#include <stdio.h>

int main(){
    int C; // numero de casos
    int i; // contador;
    char nome[100];
    int forca;

    scanf("%d", &C);

    for(i = 0; i < C; i++){
        scanf("%s %d", nome, &forca);
        if(strcmp(nome, "Thor") == 0){
            printf("Y\n");
        }
        else{
            printf("N\n");
        }
    }

    return 0;
}