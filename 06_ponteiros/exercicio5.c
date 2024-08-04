#include <stdio.h>

// Função para dobrar os valores e retornar a soma dos dobrados
int dobrarESomar(int *a, int *b) {
    *a *= 2;
    *b *= 2;
    return *a + *b;
}

int main() {
    int A, B, soma;

    // Leitura dos valores
    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    // Chamando a função para dobrar e somar
    soma = dobrarESomar(&A, &B);

    // Exibindo os valores após a função
    printf("\nApós dobrar os valores:\n");
    printf("Valor de A (dobrado) = %d\n", A);
    printf("Valor de B (dobrado) = %d\n", B);
    printf("Soma do dobro de A e B = %d\n", soma);

    return 0;
}
