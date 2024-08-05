#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINHA 100

// Função para mesclar e ordenar dois arquivos
void mesclarArquivos(const char *arquivo1, const char *arquivo2, const char *arquivoSaida) {
    FILE *fp1 = fopen(arquivo1, "r");
    FILE *fp2 = fopen(arquivo2, "r");
    FILE *fpSaida = fopen(arquivoSaida, "w");

    if (!fp1 || !fp2 || !fpSaida) {
        printf("Erro ao abrir arquivos.\n");
        exit(1);
    }

    char linha1[MAX_LINHA];
    char linha2[MAX_LINHA];
    int fim1 = (fgets(linha1, MAX_LINHA, fp1) == NULL);
    int fim2 = (fgets(linha2, MAX_LINHA, fp2) == NULL);

    while (!fim1 || !fim2) {
        if (fim1 || (!fim2 && strcmp(linha1, linha2) > 0)) {
            fprintf(fpSaida, "%s", linha2);
            fim2 = (fgets(linha2, MAX_LINHA, fp2) == NULL);
        } else {
            fprintf(fpSaida, "%s", linha1);
            fim1 = (fgets(linha1, MAX_LINHA, fp1) == NULL);
        }
    }

    fclose(fp1);
    fclose(fp2);
    fclose(fpSaida);
}

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Uso: %s <arquivo1> <arquivo2> <arquivoSaida>\n", argv[0]);
        return 1;
    }

    mesclarArquivos(argv[1], argv[2], argv[3]);

    printf("Arquivos mesclados com sucesso.\n");
    return 0;
}
