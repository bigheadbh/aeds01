#include <stdio.h>

// Função para trocar os valores de duas variáveis inteiras
void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int A, B;

    // Leitura dos valores
    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    // Exibindo valores antes da troca
    printf("\nAntes da troca:\n");
    printf("A = %d\n", A);
    printf("B = %d\n", B);

    // Chamando a função para trocar os valores
    trocar(&A, &B);

    // Exibindo valores após a troca
    printf("\nApós a troca:\n");
    printf("A = %d\n", A);
    printf("B = %d\n", B);

    return 0;
}
