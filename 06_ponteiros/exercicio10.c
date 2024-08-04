#include <stdio.h>

int main() {
    int array[5];

    // Leitura dos valores do array
    printf("Digite 5 valores inteiros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &array[i]);
    }

    // Impressão dos endereços das posições contendo valores pares
    printf("Endereços das posições com valores pares:\n");
    for (int i = 0; i < 5; i++) {
        if (array[i] % 2 == 0) {
            printf("Endereço do elemento %d: %p\n", i, (void*)&array[i]);
        }
    }

    return 0;
}
