#include <stdio.h>

// Função recursiva para encontrar o maior elemento do array
int maiorElemento(int *arr, int n) {
    if (n == 1) {
        return arr[0];
    } else {
        int maior = maiorElemento(arr, n - 1);
        if (arr[n - 1] > maior) {
            return arr[n - 1];
        } else {
            return maior;
        }
    }
}

int main() {
    int n;
    
    // Leitura do número de elementos do array
    printf("Insira o número de elementos a serem armazenados no vetor: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Leitura dos valores do array
    printf("Insira %d elementos no vetor:\n", n);
    for (int i = 0; i < n; i++) {
        printf("elemento - %d: ", i);
        scanf("%d", &arr[i]);
    }
    
    // Encontrar o maior elemento usando recursão
    int maior = maiorElemento(arr, n);
    
    // Exibindo o resultado
    printf("O maior elemento do array é: %d\n", maior);
    
    return 0;
}
