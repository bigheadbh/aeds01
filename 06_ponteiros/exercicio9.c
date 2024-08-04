9#include <stdio.h>

int main() {
    int array[5];
    int *ptr = array; // Ponteiro para o array

    // Leitura dos valores do array usando aritmética de ponteiros
    printf("Digite 5 valores inteiros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", ptr + i);
    }

    // Impressão do dobro de cada valor usando aritmética de ponteiros
    printf("O dobro de cada valor lido é:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i) * 2);
    }
    printf("\n");

    return 0;
}
