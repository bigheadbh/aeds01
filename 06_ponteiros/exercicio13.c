#include <stdio.h>

// Função para imprimir o array usando aritmética de ponteiros
void imprimirArray(int *array, int tamanho) {
    int *ptr = array;
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
}

int main() {
    int array[5];
    int tamanho = sizeof(array) / sizeof(array[0]);

    // Leitura dos valores do array
    printf("Digite 5 valores inteiros:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &array[i]);
    }

    // Chamando a função para imprimir o array
    printf("Os valores do array são:\n");
    imprimirArray(array, tamanho);

    return 0;
}
