// Função para calcular o último dígito do número de chamadas
int fibonacci_calls(int n, int b) {
    if (n <= 1)
        return 1 % b;

    int fib_prev = 0;
    int fib_curr = 1;
    int fib_calls = 1; // Inicialmente, uma chamada para fib(1)
    int i;

    for (i = 2; i <= n; i++) {
        int temp = (fib_curr + fib_prev) % b;
        fib_prev = fib_curr;
        fib_curr = temp;
        fib_calls++; // Atualiza o número de chamadas
    }

    return fib_calls % b; // Retorna o último dígito do número de chamadas
}

int main() {
    int n, b, case_num = 1;

    while (1) {
        scanf("%d %d", &n, &b);
        if (n == 0 && b == 0)
            break;

        int last_digit = fibonacci_calls(n, b);
        printf("Case %d: %d %d %d\n", case_num, n, b, last_digit);
        case_num++;
    }

    return 0;
}
