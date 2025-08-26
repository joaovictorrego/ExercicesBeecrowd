#include <stdio.h>

int main(){
    int K;
    int TOP[7] = {1, 3, 5, 10, 25, 50, 100};
    int i;

    scanf("%d", &K);

    for(i = 0; i < 7; i++){
        if(K <= TOP[i] ){
            printf("Top %d\n", TOP[i]);
            break;
        }
    }
    return 0;
}
