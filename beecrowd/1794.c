#include <stdio.h>

int main (){

    int N;
    int LA, LB;
    int SA, SB;
    int i;
    int lavar;

    scanf("%d", &N);
    scanf("%d %d", &LA, &LB);
    scanf("%d %d", &SA, &SB);


    lavar = 0;
    if(N >= LA && N <= LB){
        if(N >= SA && N <= SB){
            lavar = 1;
        }
    }

    if(lavar == 1){
        printf("possivel\n");
    }
    else{
        printf("impossivel\n");
    }

    return 0;
}
