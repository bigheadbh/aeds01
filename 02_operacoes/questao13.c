#include <stdio.h>

int main() {
    float salarioMinimo, salarioPessoa, quantidadeSalarios;

    // Leitura do valor do salário mínimo e do salário da pessoa
    printf("Digite o valor do salário mínimo: ");
    scanf("%f", &salarioMinimo);
    printf("Digite o valor do salário da pessoa: ");
    scanf("%f", &salarioPessoa);

    // Cálculo da quantidade de salários mínimos que a pessoa ganha
    quantidadeSalarios = salarioPessoa / salarioMinimo;

    // Exibindo o resultado
    printf("A pessoa ganha %.2f salários mínimos.\n", quantidadeSalarios);

    return 0;
}
