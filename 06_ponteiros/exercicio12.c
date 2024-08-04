#include <stdio.h>
#include <string.h>

// Função para verificar se a segunda string ocorre dentro da primeira
int stringOcorre(char *str1, char *str2) {
    while (*str1) {
        char *p1 = str1;
        char *p2 = str2;

        // Comparação das strings
        while (*p1 && *p2 && (*p1 == *p2)) {
            p1++;
            p2++;
        }

        // Se a string str2 terminou, significa que foi encontrada dentro de str1
        if (!*p2) {
            return 1; // str2 ocorre dentro de str1
        }

        str1++;
    }

    return 0; // str2 não ocorre dentro de str1
}

int main() {
    char str1[100], str2[100];

    // Leitura das strings
    printf("Digite a primeira string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // Remove o caractere de nova linha

    printf("Digite a segunda string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // Remove o caractere de nova linha

    // Verificando se a segunda string ocorre dentro da primeira
    if (stringOcorre(str1, str2)) {
        printf("A segunda string ocorre dentro da primeira.\n");
    } else {
        printf("A segunda string não ocorre dentro da primeira.\n");
    }

    return 0;
}
