#include <stdio.h>

// Função recursiva para imprimir números pares
void imprimirPares(int inicio, int fim) {
    if (inicio > fim) {
        return;
    }
    if (inicio % 2 == 0) {
        printf("%d ", inicio);
    }
    imprimirPares(inicio + 1, fim);
}

// Função recursiva para imprimir números ímpares
void imprimirImpares(int inicio, int fim) {
    if (inicio > fim) {
        return;
    }
    if (inicio % 2 != 0) {
        printf("%d ", inicio);
    }
    imprimirImpares(inicio + 1, fim);
}

int main() {
    int inicio, fim;

    // Leitura do intervalo fornecido pelo usuário
    printf("Insira o intervalo de impressão a partir de: ");
    scanf("%d", &inicio);
    printf("Insira o intervalo de impressão até: ");
    scanf("%d", &fim);

    // Imprimindo números pares no intervalo
    printf("Todos os números pares de %d a %d são: ", inicio, fim);
    imprimirPares(inicio, fim);
    printf("\n");

    // Imprimindo números ímpares no intervalo
    printf("Todos os números ímpares de %d a %d são: ", inicio, fim);
    imprimirImpares(inicio, fim);
    printf("\n");

    return 0;
}
