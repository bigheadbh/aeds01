#include <stdio.h>
#include <ctype.h>

// Função recursiva para encontrar a primeira letra maiúscula em uma string
char primeiraMaiuscula(char *str) {
    if (*str == '\0') {
        return '\0'; // Retorna nulo se não encontrar nenhuma letra maiúscula
    }
    if (isupper(*str)) {
        return *str; // Retorna a letra maiúscula encontrada
    }
    return primeiraMaiuscula(str + 1); // Chamada recursiva para o próximo caractere
}

int main() {
    char str[100];

    // Leitura da string
    printf("Insira uma string para incluir uma ou mais letras maiúsculas: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove o caractere de nova linha

    // Chama a função para encontrar a primeira letra maiúscula
    char resultado = primeiraMaiuscula(str);

    // Exibe o resultado
    if (resultado == '\0') {
        printf("Nenhuma letra maiúscula foi encontrada na string.\n");
    } else {
        printf("A primeira letra maiúscula que aparece na string %s é %c.\n", str, resultado);
    }

    return 0;
}
