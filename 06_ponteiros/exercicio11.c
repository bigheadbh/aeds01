#include <stdio.h>

// Função para ordenar três valores e verificar se são iguais
int ordenarEVerificar(int *a, int *b, int *c) {
    int temp;
    
    // Ordenar os valores usando bubble sort
    if (*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }
    if (*a > *c) {
        temp = *a;
        *a = *c;
        *c = temp;
    }
    if (*b > *c) {
        temp = *b;
        *b = *c;
        *c = temp;
    }

    // Verificar se todos os valores são iguais
    if (*a == *b && *b == *c) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int A, B, C;
    int resultado;

    // Leitura dos valores
    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    printf("Digite o valor de C: ");
    scanf("%d", &C);

    // Chamando a função para ordenar e verificar os valores
    resultado = ordenarEVerificar(&A, &B, &C);

    // Exibindo os valores ordenados
    printf("\nValores ordenados:\n");
    printf("A = %d\n", A);
    printf("B = %d\n", B);
    printf("C = %d\n", C);

    // Exibindo o resultado da verificação
    if (resultado == 1) {
        printf("Os três valores são iguais.\n");
    } else {
        printf("Existem valores diferentes.\n");
    }

    return 0;
}
