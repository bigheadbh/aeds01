#include <stdio.h>

int fibonacci(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }
    int a = 1, b = 1, next;
    for (int i = 3; i <= n; i++) {
        next = a + b;
        a = b;
        b = next;
    }
    return next;
}

int main() {
    int n;

    printf("Digite o valor de N para encontrar o N-ésimo termo da sequência de Fibonacci: ");
    scanf("%d", &n);

    int resultado = fibonacci(n);

    printf("O %dº termo da sequência de Fibonacci é: %d\n", n, resultado);

    return 0;
}
