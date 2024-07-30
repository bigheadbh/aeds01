#include <stdio.h>
#include <math.h> // Biblioteca necessária para a função sqrt

int main() {
    float lado, perimetro, area, diagonal;

    // Leitura do lado do quadrado
    printf("Digite o lado do quadrado: ");
    scanf("%f", &lado);

    // Cálculo do perímetro
    perimetro = 4 * lado;

    // Cálculo da área
    area = lado * lado;

    // Cálculo da diagonal usando o teorema de Pitágoras
    diagonal = lado * sqrt(2);

    // Exibindo os resultados
    printf("Perímetro: %.2f\n", perimetro);
    printf("Área: %.2f\n", area);
    printf("Diagonal: %.2f\n", diagonal);

    return 0;
}
