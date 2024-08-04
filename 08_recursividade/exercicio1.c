#include <stdio.h>

// Função recursiva para imprimir os números naturais
void imprimirNaturais(int n) {
    if (n > 0) {
        imprimirNaturais(n - 1);
        printf("%d ", n);
    }
}

int main() {
    int n = 50;
    printf("Os números naturais são:\n");
    imprimirNaturais(n);
    printf("\n");
    return 0;
}
