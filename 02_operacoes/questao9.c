#include <stdio.h>
#include <math.h> // Biblioteca necessária para a função pow

int main() {
    float primeiroTermo, razao, quintoTermo;

    // Leitura do primeiro termo e da razão da PG
    printf("Digite o primeiro termo da PG: ");
    scanf("%f", &primeiroTermo);
    printf("Digite a razão da PG: ");
    scanf("%f", &razao);

    // Cálculo do quinto termo da PG
    // Fórmula do n-ésimo termo da PG: an = a1 * r^(n - 1)
    quintoTermo = primeiroTermo * pow(razao, 5 - 1);

    // Exibindo o resultado
    printf("O quinto termo da PG é: %.2f\n", quintoTermo);

    return 0;
}
