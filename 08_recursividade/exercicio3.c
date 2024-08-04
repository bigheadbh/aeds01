#include <stdio.h>

// Função recursiva para calcular o n-ésimo termo da série Fibonacci
int fibonacci(int n) {
    if (n == 1 || n == 2) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

// Função recursiva para imprimir a série Fibonacci
void imprimirFibonacci(int termos, int atual) {
    if (atual <= termos) {
        printf("%d ", fibonacci(atual));
        imprimirFibonacci(termos, atual + 1);
    }
}

int main() {
    int termos;
    printf("Insira o número de termos para a série (<20): ");
    scanf("%d", &termos);

    printf("A série é:\n");
    imprimirFibonacci(termos, 1);
    printf("\n");

    return 0;
}
