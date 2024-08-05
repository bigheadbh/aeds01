#include <stdio.h>
#include <stdlib.h>
#include <float.h>

// Função para calcular o valor máximo, mínimo e a média dos valores em um arquivo
void calcularEstatisticas(const char *nomeArquivo, float *maximo, float *minimo, float *media) {
    FILE *fp = fopen(nomeArquivo, "r");
    if (!fp) {
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }

    float valor, soma = 0.0;
    int contador = 0;
    *maximo = FLT_MIN;
    *minimo = FLT_MAX;

    while (fscanf(fp, "%f", &valor) != EOF) {
        if (valor > *maximo) *maximo = valor;
        if (valor < *minimo) *minimo = valor;
        soma += valor;
        contador++;
    }

    *media = (contador > 0) ? soma / contador : 0.0;

    fclose(fp);
}

int main() {
    char nomeArquivo[100];
    float maximo, minimo, media;

    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);

    calcularEstatisticas(nomeArquivo, &maximo, &minimo, &media);

    printf("Valor máximo: %.2f\n", maximo);
    printf("Valor mínimo: %.2f\n", minimo);
    printf("Média: %.2f\n", media);

    return 0;
}
