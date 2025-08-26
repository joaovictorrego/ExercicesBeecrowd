#include <stdio.h>
#include <math.h>

int main()
{

    int T, N, S;
    int i;
    int j;

    scanf("%d", &T);

    for (i = 0; i < T; i++)
    {
        scanf("%d", &N);
        S = 1;
        for (j = 1; j < N; j++)
        {
            S = S + pow(2, j);
        }
        printf("%d\n", S);
    }

    return 0;
}