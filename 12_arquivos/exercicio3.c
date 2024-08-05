#include <stdio.h>
#include <stdlib.h>

// Função para contar caracteres em um arquivo
int contarCaracteres(const char *nomeArquivo) {
    FILE *fp = fopen(nomeArquivo, "r");
    if (!fp) {
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }

    int contador = 0;
    char c;

    while ((c = fgetc(fp)) != EOF) {
        contador++;
    }

    fclose(fp);
    return contador;
}

int main() {
    char nomeArquivo[100];

    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);

    int totalCaracteres = contarCaracteres(nomeArquivo);

    printf("O arquivo '%s' tem %d caracteres.\n", nomeArquivo, totalCaracteres);

    return 0;
}
