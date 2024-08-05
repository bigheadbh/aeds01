#include <stdio.h>
#include <string.h>

#define MAX_COMPANHIAS 10

// Struct para representar uma ação de bolsa de valores
typedef struct {
    char nome[100];
    char area[100];
    float valorAtual;
    float valorAnterior;
    double variacao;
} Acao;

int main() {
    Acao acoes[MAX_COMPANHIAS];
    int n;

    printf("Digite o número de companhias (até %d): ", MAX_COMPANHIAS);
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Digite o nome da companhia %d: ", i + 1);
        scanf(" %[^\n]", acoes[i].nome);
        printf("Digite a área de atuação da companhia %d: ", i + 1);
        scanf(" %[^\n]", acoes[i].area);
        printf("Digite o valor atual da ação da companhia %d: ", i + 1);
        scanf("%f", &acoes[i].valorAtual);
        printf("Digite o valor anterior da ação da companhia %d: ", i + 1);
        scanf("%f", &acoes[i].valorAnterior);
        acoes[i].variacao = ((acoes[i].valorAtual - acoes[i].valorAnterior) / acoes[i].valorAnterior) * 100.0;
    }

    // Exibição dos dados
    printf("\nDados das companhias:\n");
    for (int i = 0; i < n; i++) {
        printf("Nome: %s\n", acoes[i].nome);
        printf("Área de Atuação: %s\n", acoes[i].area);
        printf("Valor Atual: %.2f\n", acoes[i].valorAtual);
        printf("Valor Anterior: %.2f\n", acoes[i].valorAnterior);
        printf("Variação: %.2f%%\n", acoes[i].variacao);
        printf("\n");
    }

    return 0;
}
