#include <stdio.h>

int main() {
    int numero, centena, dezena, unidade, invertido;

    // Ler o n�mero inteiro de tr�s d�gitos do teclado
    printf("Digite um n�mero inteiro de tr�s d�gitos (no formato CDU): ");
    scanf("%d", &numero);

    // Extrair os d�gitos da centena, dezena e unidade
    centena = numero / 100;        // Obt�m o d�gito da centena (C)
    dezena = (numero / 10) % 10;   // Obt�m o d�gito da dezena (D)
    unidade = numero % 10;         // Obt�m o d�gito da unidade (U)

    // Formar o n�mero invertido no formato UDC
    invertido = (unidade * 100) + (dezena * 10) + centena;

    // Exibir o n�mero invertido
    printf("O n�mero invertido �: %d\n", invertido);

    return 0;
}
