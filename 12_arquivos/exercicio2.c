#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Função para contar palavras em um arquivo
int contarPalavras(const char *nomeArquivo) {
    FILE *fp = fopen(nomeArquivo, "r");
    if (!fp) {
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }

    int contador = 0;
    char c;
    int dentroPalavra = 0;

    while ((c = fgetc(fp)) != EOF) {
        if (isspace(c)) {
            dentroPalavra = 0;
        } else if (!dentroPalavra) {
            dentroPalavra = 1;
            contador++;
        }
    }

    fclose(fp);
    return contador;
}

int main() {
    char nomeArquivo[100];

    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);

    int totalPalavras = contarPalavras(nomeArquivo);

    printf("O arquivo '%s' tem %d palavras.\n", nomeArquivo, totalPalavras);

    return 0;
}
