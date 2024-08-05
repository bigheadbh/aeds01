#include <stdio.h>

#define NUM_BANDAS 5

// Struct para representar uma banda de música
typedef struct {
    char nome[100];
    char tipo[100];
    int integrantes;
    int ranking;
} Banda;

int main() {
    Banda bandas[NUM_BANDAS];

    // Leitura dos dados das bandas
    for (int i = 0; i < NUM_BANDAS; i++) {
        printf("Digite o nome da banda %d: ", i + 1);
        scanf(" %[^\n]", bandas[i].nome);
        printf("Digite o tipo de música da banda %d: ", i + 1);
        scanf(" %[^\n]", bandas[i].tipo);
        printf("Digite o número de integrantes da banda %d: ", i + 1);
        scanf("%d", &bandas[i].integrantes);
        bandas[i].ranking = i + 1; // Define a posição no ranking
    }

    // Exibição dos dados das bandas
    printf("\nInformações das bandas:\n");
    for (int i = 0; i < NUM_BANDAS; i++) {
        printf("Nome: %s\n", bandas[i].nome);
        printf("Tipo de Música: %s\n", bandas[i].tipo);
        printf("Número de Integrantes: %d\n", bandas[i].integrantes);
        printf("Ranking: %d\n", bandas[i].ranking);
        printf("\n");
    }

    return 0;
}
