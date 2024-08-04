#include <stdio.h>

// Função para contar os números negativos no array
int negativos(float *vet, int N) {
    int count = 0;
    for (int i = 0; i < N; i++) {
        if (*(vet + i) < 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int N;

    // Leitura do tamanho do array
    printf("Digite o tamanho do array: ");
    scanf("%d", &N);

    float array[N];

    // Leitura dos valores do array
    printf("Digite %d valores reais:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%f", &array[i]);
    }

    // Chamando a função para contar os negativos
    int numNegativos = negativos(array, N);

    // Exibindo o resultado
    printf("Número de valores negativos no array: %d\n", numNegativos);

    return 0;
}
