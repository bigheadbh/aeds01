#include <stdio.h>

// Função para encontrar o maior e menor valor
void encontrarMaiorMenor(int *a, int *b) {
    if (*a < *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main() {
    int A, B;

    // Leitura dos valores
    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    // Chamando a função para encontrar o maior e menor valor
    encontrarMaiorMenor(&A, &B);

    // Exibindo os valores após a função
    printf("\nApós encontrar maior e menor:\n");
    printf("Maior valor (A) = %d\n", A);
    printf("Menor valor (B) = %d\n", B);

    return 0;
}
