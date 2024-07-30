#include <stdio.h>

int main() {
    float salarioMinimo, quilowatts, valorQuilowatt, valorTotal, valorComDesconto;

    // Leitura do salário mínimo e da quantidade de quilowatts consumidos
    printf("Digite o valor do salário mínimo: ");
    scanf("%f", &salarioMinimo);
    printf("Digite a quantidade de quilowatts consumidos: ");
    scanf("%f", &quilowatts);

    // Cálculo do valor de cada quilowatt
    valorQuilowatt = (salarioMinimo / 7) / 100;

    // Cálculo do valor total a ser pago
    valorTotal = valorQuilowatt * quilowatts;

    // Cálculo do valor com desconto de 10%
    valorComDesconto = valorTotal * 0.9;

    // Exibindo os resultados
    printf("Valor de cada quilowatt: R$ %.2f\n", valorQuilowatt);
    printf("Valor total a ser pago: R$ %.2f\n", valorTotal);
    printf("Valor com desconto de 10%%: R$ %.2f\n", valorComDesconto);

    return 0;
}
