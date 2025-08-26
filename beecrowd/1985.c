#include <stdio.h>

int main(){
    int quantidadeDeProdutosComprados;
    int produtos[5] = {1001, 1002, 1003, 1004, 1005};
    double valorDeCadaProduto[5] = {1.50, 2.50, 3.50, 4.50, 5.50};
    int contador1, contador2;
    int quantidadeProduto;
    int produto;
    double valorDaCompra = 0;

    scanf("%d", &quantidadeDeProdutosComprados);

    for(contador1 = 0; contador1 < quantidadeDeProdutosComprados; contador1++){
        scanf("%d %d", &produto, &quantidadeProduto);
        for(contador2 = 0; contador2 < 5; contador2++){
            if(produto == produtos[contador2]){
                valorDaCompra = (quantidadeProduto * valorDeCadaProduto[contador2]) + valorDaCompra;
                break;
            }
        }
    }

    printf("%.2lf\n", valorDaCompra);

    return 0;
}
