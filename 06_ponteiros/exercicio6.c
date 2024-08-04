#include <stdio.h>

// Função para calcular a soma de A e B e armazenar em A
void somar(int *a, int b) {
    *a = *a + b;
}

int main() {
    int A, B;

    // Leitura dos valores
    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    // Chamando a função para somar B a A
    somar(&A, B);

    // Exibindo os valores após a função
    printf("\nApós a soma:\n");
    printf("Valor de A = %d\n", A);
    printf("Valor de B = %d\n", B);

    return 0;
}
