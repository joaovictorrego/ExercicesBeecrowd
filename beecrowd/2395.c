#include <stdio.h>

int main (){

    int X, Y, Z;
    int A, B, C;
    int Q;

    scanf("%d %d %d", &A, &B, &C);
    scanf("%d %d %d", &X, &Y, &Z);

    Q = ((int) ( X / A )) * ((int)( Y / B )) * ((int) ( Z / C ));

    printf("%d\n", Q);

    return 0;
}
