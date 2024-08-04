#include <stdio.h>

// Função recursiva para imprimir os elementos do array
void imprimirArray(int *arr, int tamanho, int index) {
    if (index < tamanho) {
        printf("%d ", arr[index]);
        imprimirArray(arr, tamanho, index + 1);
    }
}

int main() {
    int tamanho;
    
    // Leitura do tamanho do array
    printf("Insira o número de elementos a serem armazenados no vetor: ");
    scanf("%d", &tamanho);
    
    int arr[tamanho];

    // Leitura dos valores do array
    printf("Insira %d elementos no vetor:\n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        printf("elemento - %d: ", i);
        scanf("%d", &arr[i]);
    }

    // Imprimindo os elementos do array usando recursão
    printf("Os elementos no vetor são: ");
    imprimirArray(arr, tamanho, 0);
    printf("\n");

    return 0;
}
