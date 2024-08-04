#include <stdio.h>

// Função recursiva para copiar uma string para outra
void copiarString(char *dest, const char *src) {
    if (*src == '\0') {
        *dest = '\0'; // Termina a string copiada
    } else {
        *dest = *src; // Copia o caractere atual
        copiarString(dest + 1, src + 1); // Chamada recursiva para o próximo caractere
    }
}

int main() {
    char str1[100], str2[100];

    // Leitura da string original
    printf("Insira a string a ser copiada: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // Remove o caractere de nova linha

    // Chama a função para copiar a string
    copiarString(str2, str1);

    // Exibe as strings
    printf("A string foi copiada com sucesso.\n");
    printf("A primeira string é: %s\n", str1);
    printf("A string copiada é: %s\n", str2);

    return 0;
}
