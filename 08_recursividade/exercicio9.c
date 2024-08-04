#include <stdio.h>
#include <string.h>

// Função recursiva para reverter uma string
void reverterString(char *str, int start, int end) {
    if (start >= end) {
        return;
    }

    // Troca os caracteres
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    // Chamada recursiva
    reverterString(str, start + 1, end - 1);
}

int main() {
    char str[100];

    // Leitura da string
    printf("String de entrada: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove o caractere de nova linha

    // Calcula o comprimento da string
    int length = strlen(str);

    // Chama a função para reverter a string
    reverterString(str, 0, length - 1);

    // Exibe a string revertida
    printf("A string reversa é: %s\n", str);

    return 0;
}
