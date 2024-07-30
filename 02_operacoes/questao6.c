#include <stdio.h>
#include <math.h> // Biblioteca necessária para a função log2

int main() {
    float a, b, c, y;

    // Leitura dos valores de a, b e c
    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);

    // Cálculo de y
    y = (a + b) / (c + a) + 2 * (a - b) + log2(64);

    // Exibindo o resultado
    printf("O valor de y é: %.2f\n", y);

    return 0;
}
