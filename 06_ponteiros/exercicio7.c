#include <stdio.h>
#include <string.h>

// Função para trocar as vogais na frase
void trocarVogais(char *frase) {
    for (int i = 0; frase[i] != '\0'; i++) {
        switch (frase[i]) {
            case 'a': frase[i] = 'u'; break;
            case 'e': frase[i] = 'o'; break;
            case 'i': frase[i] = 'u'; break;
            case 'o': frase[i] = 'a'; break;
            case 'u': frase[i] = 'e'; break;
            case 'A': frase[i] = 'U'; break;
            case 'E': frase[i] = 'O'; break;
            case 'I': frase[i] = 'U'; break;
            case 'O': frase[i] = 'A'; break;
            case 'U': frase[i] = 'E'; break;
        }
    }
}

// Função para imprimir a frase trocada
void imprimirFrase(char *frase) {
    printf("Frase trocada: %s\n", frase);
}

int main() {
    char frase[100];

    // Leitura da frase
    printf("Digite uma frase (max. 100 caracteres): ");
    fgets(frase, sizeof(frase), stdin);

    // Remove o caractere de nova linha, se presente
    frase[strcspn(frase, "\n")] = '\0';

    // Trocando as vogais na frase
    trocarVogais(frase);

    // Imprimindo a frase trocada
    imprimirFrase(frase);

    return 0;
}
