#include <stdio.h>

int fat(int X){

    int i;
    int R = 1;

    for(i = 1; i <= X; i++){
        R = R * i;
    }

    return R;
}

int main (){

    int N;
    int R;
    int i = 1;
    int c;

    scanf("%d", &N);

    while(1){
        if(fat(i + 1) > N){
            break;
        }
        else{
            i = i + 1;
        }
    }

    R = 0;
    c = 0;
    while(R != N){
        if((R + fat(i)) <= N){
            R = R + fat(i);
            c = c + 1;
        }
        else{
            i = i - 1;
        }
    }

    printf("%d\n", c);

    return 0;
}
