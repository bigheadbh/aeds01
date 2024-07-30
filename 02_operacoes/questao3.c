#include <stdio.h>
#include <math.h> // Biblioteca necessária para a função sqrt

int main() {
    float base, altura, perimetro, area, diagonal;

    // Leitura da base e altura do retângulo
    printf("Digite a base do retângulo: ");
    scanf("%f", &base);
    printf("Digite a altura do retângulo: ");
    scanf("%f", &altura);

    // Cálculo do perímetro
    perimetro = 2 * (base + altura);

    // Cálculo da área
    area = base * altura;

    // Cálculo da diagonal usando o teorema de Pitágoras
    diagonal = sqrt(base * base + altura * altura);

    // Exibindo os resultados
    printf("Perímetro: %.2f\n", perimetro);
    printf("Área: %.2f\n", area);
    printf("Diagonal: %.2f\n", diagonal);

    return 0;
}
