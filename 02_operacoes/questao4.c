#include <stdio.h>
#include <math.h> // Biblioteca necessária para a constante M_PI

int main() {
    float raio, perimetro, area;

    // Leitura do raio do círculo
    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);

    // Cálculo do perímetro (circunferência)
    perimetro = 2 * M_PI * raio;

    // Cálculo da área
    area = M_PI * raio * raio;

    // Exibindo os resultados
    printf("Perímetro (circunferência): %.2f\n", perimetro);
    printf("Área: %.2f\n", area);

    return 0;
}
