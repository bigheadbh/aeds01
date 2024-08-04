#include <stdio.h>

// Função recursiva para calcular o MDC de dois números
int mdc(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return mdc(b, a % b);
    }
}

int main() {
    int num1, num2;

    // Leitura dos dois números fornecidos pelo usuário
    printf("Insira o Primeiro número: ");
    scanf("%d", &num1);

    printf("Insira o Segundo número: ");
    scanf("%d", &num2);

    int resultado = mdc(num1, num2);
    printf("O MDC de %d e %d é: %d\n", num1, num2, resultado);

    return 0;
}
