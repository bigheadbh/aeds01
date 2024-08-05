#include <stdio.h>
#include <stdlib.h>

// Função para copiar o conteúdo de um arquivo para outro
void copiarArquivo(const char *arquivoOrigem, const char *arquivoDestino) {
    FILE *fpOrigem = fopen(arquivoOrigem, "r");
    FILE *fpDestino = fopen(arquivoDestino, "w");

    if (!fpOrigem || !fpDestino) {
        printf("Erro ao abrir arquivos.\n");
        exit(1);
    }

    char c;
    while ((c = fgetc(fpOrigem)) != EOF) {
        fputc(c, fpDestino);
    }

    fclose(fpOrigem);
    fclose(fpDestino);
}

int main() {
    char arquivoOrigem[100];
    char arquivoDestino[100];

    printf("Digite o nome do arquivo de origem: ");
    scanf("%s", arquivoOrigem);
    printf("Digite o nome do arquivo de destino: ");
    scanf("%s", arquivoDestino);

    copiarArquivo(arquivoOrigem, arquivoDestino);

    printf("Arquivo copiado com sucesso.\n");

    return 0;
}
