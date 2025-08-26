#include <stdio.h>
#include <string.h>

int main (){
    
    int jogadas[3];
    char jogadasStr[3][30];
    
    while(scanf("%s %s %s", jogadasStr[0], jogadasStr[1], jogadasStr[2]) != EOF){
    
        int jogador[3];
        jogador[0] = 0;
        jogador[1] = 0;
        jogador[2] = 0;
        
        for(int i = 0; i < 3; i++){
            if( strcmp(jogadasStr[i], "pedra")== 0){
                jogadas[i] = 1;
            }
            if( strcmp(jogadasStr[i], "papel") == 0){
                jogadas[i] = 2;
            }
            if( strcmp(jogadasStr[i], "tesoura") == 0){
                jogadas[i] = 3;
            }
        }
        
        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                if(i == j){
                    continue;
                }
                if(jogadas[i] == 1){
                    if(jogadas[j] == 3){
                        jogador[i] = jogador[i] + 1;
                    }
                }
                
                if(jogadas[i] == 2){
                    if(jogadas[j] == 1){
                        jogador[i] = jogador[i] + 1;
                    }
                }
                
                if(jogadas[i] == 3){
                    if(jogadas[j] == 2){
                        jogador[i] = jogador[i] + 1;
                    }
                }
                
            }
        }
        
        int maior = jogador[0];
        int posMaior = 0;
        for(int i = 0; i < 3; i++){
            if(jogador[i] > maior){
                posMaior = i;
                maior = jogador[i];
            }
        }
        
        int empate = 0;
        
        for(int i = 0; i < 3; i++){
            if(i == posMaior){
                continue;
            }
            
            if(maior == jogador[i]){
                empate = 1;
            }
        }
        
        if(empate == 1){
            printf("Putz vei, o Leo ta demorando muito pra jogar...\n");
        }
        else{
            if(posMaior == 0){
                printf("Os atributos dos monstros vao ser inteligencia, sabedoria...\n");
            }
            else{
                if(posMaior == 1){
                    printf("Iron Maiden's gonna get you, no matter how far!\n");
                }
                else{
                    if(posMaior == 2){
                        printf("Urano perdeu algo muito precioso...\n");
                    }
                }
            }
        }
        
    }
    
    return 0;
}
