
#include <stdio.h>

int main() {
    float valor1, valor2;

    // Leitura dos valores reais
    printf("Digite o primeiro valor real: ");
    scanf("%f", &valor1);
    printf("Digite o segundo valor real: ");
    scanf("%f", &valor2);

    // Verificação e exibição do maior valor
    if (valor1 > valor2) {
        printf("O maior valor é: %.2f\n", valor1);
    } else if (valor2 > valor1) {
        printf("O maior valor é: %.2f\n", valor2);
    } else {
        printf("Os valores são iguais: %.2f\n", valor1);
    }

    return 0;
}
