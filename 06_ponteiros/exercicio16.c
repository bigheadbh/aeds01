#include <stdio.h>
#include <limits.h>

// Função para encontrar o valor mínimo e máximo no array
void encontrarMinMax(int *V, int N, int *min, int *max) {
    *min = INT_MAX;
    *max = INT_MIN;
    
    for (int i = 0; i < N; i++) {
        if (*(V + i) < *min) {
            *min = *(V + i);
        }
        if (*(V + i) > *max) {
            *max = *(V + i);
        }
    }
}

int main() {
    int N;

    // Leitura do tamanho do array
    printf("Digite o tamanho do array: ");
    scanf("%d", &N);

    int array[N];

    // Leitura dos valores do array
    printf("Digite %d valores inteiros:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &array[i]);
    }

    int min, max;

    // Chamando a função para encontrar o mínimo e máximo
    encontrarMinMax(array, N, &min, &max);

    // Exibindo os resultados
    printf("Valor mínimo no array: %d\n", min);
    printf("Valor máximo no array: %d\n", max);

    return 0;
}
