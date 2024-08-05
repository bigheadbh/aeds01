#include <stdio.h>
#include <string.h>

#define NUM_BANDAS 5

// Struct para representar uma banda de música
typedef struct {
    char nome[100];
    char tipo[100];
    int integrantes;
    int ranking;
} Banda;

// Função para verificar se uma banda está entre as favoritas
int isBandaFavorita(Banda bandas[], int numBandas, char nome[]) {
    for (int i = 0; i < numBandas; i++) {
        if (strcmp(bandas[i].nome, nome) == 0) {
            return 1; // Encontrou a banda
        }
    }
    return 0; // Não encontrou a banda
}

int main() {
    Banda bandas[NUM_BANDAS];
    char nomeBanda[100];

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

    // Pergunta o nome da banda ao usuário e verifica se está entre as favoritas
    printf("\nDigite o nome da banda para verificar se está entre as favoritas: ");
    scanf(" %[^\n]", nomeBanda);

    if (isBandaFavorita(bandas, NUM_BANDAS, nomeBanda)) {
        printf("A banda %s está entre suas bandas favoritas.\n", nomeBanda);
    } else {
        printf("A banda %s não está entre suas bandas favoritas.\n", nomeBanda);
    }

    return 0;
}
