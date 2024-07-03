#include <stdio.h>

int main() {
    int numero, centena, dezena, unidade, invertido;

    // Ler o número inteiro de três dígitos do teclado
    printf("Digite um número inteiro de três dígitos (no formato CDU): ");
    scanf("%d", &numero);

    // Extrair os dígitos da centena, dezena e unidade
    centena = numero / 100;        // Obtém o dígito da centena (C)
    dezena = (numero / 10) % 10;   // Obtém o dígito da dezena (D)
    unidade = numero % 10;         // Obtém o dígito da unidade (U)

    // Formar o número invertido no formato UDC
    invertido = (unidade * 100) + (dezena * 10) + centena;

    // Exibir o número invertido
    printf("O número invertido é: %d\n", invertido);

    return 0;
}
