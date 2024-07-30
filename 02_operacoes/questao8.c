#include <stdio.h>

int main() {
    float primeiroTermo, razao, decimoTermo;

    // Leitura do primeiro termo e da razão da PA
    printf("Digite o primeiro termo da PA: ");
    scanf("%f", &primeiroTermo);
    printf("Digite a razão da PA: ");
    scanf("%f", &razao);

    // Cálculo do décimo termo da PA
    // Fórmula do n-ésimo termo da PA: an = a1 + (n - 1) * r
    decimoTermo = primeiroTermo + (10 - 1) * razao;

    // Exibindo o resultado
    printf("O décimo termo da PA é: %.2f\n", decimoTermo);

    return 0;
}
