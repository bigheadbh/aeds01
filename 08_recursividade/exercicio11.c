#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Função recursiva para verificar se a string é um palíndromo
int verificarPalindromo(char *str, int inicio, int fim) {
    if (inicio >= fim) {
        return 1; // É um palíndromo
    }
    if (tolower(str[inicio]) != tolower(str[fim])) {
        return 0; // Não é um palíndromo
    }
    return verificarPalindromo(str, inicio + 1, fim - 1);
}

int main() {
    char str[100];

    // Leitura da string
    printf("Insira uma palavra para verificar o palíndromo: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove o caractere de nova linha

    // Calcula o comprimento da string
    int length = strlen(str);

    // Verifica se a string é um palíndromo
    if (verificarPalindromo(str, 0, length - 1)) {
        printf("A palavra inserida é um palíndromo.\n");
    } else {
        printf("A palavra inserida não é um palíndromo.\n");
    }

    return 0;
}
