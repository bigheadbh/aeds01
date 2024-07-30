#include <stdio.h>

int main() {
    int num, invertedNum;
    int unidade, dezena, centena;

    // Leitura do número de três dígitos
    printf("Digite um número inteiro de três dígitos (CDU): ");
    scanf("%d", &num);

    // Separando os dígitos
    unidade = num % 10;
    dezena = (num / 10) % 10;
    centena = num / 100;

    // Formando o número invertido
    invertedNum = unidade * 100 + dezena * 10 + centena;

    // Mostrando o número invertido
    printf("Número invertido (UDC): %d\n", invertedNum);

    return 0;
}