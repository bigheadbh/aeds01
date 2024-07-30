
#include <stdio.h>
#include <math.h> // Biblioteca necessária para a função M_PI

int main() {
    char opcao;
    float raio, area;

    // Leitura do caractere e do raio do círculo
    printf("Digite um caractere (T, Q, H) e o raio do círculo: ");
    scanf(" %c", &opcao);
    scanf("%f", &raio);

    // Verificação e cálculos correspondentes
    if (opcao == 'T') {
        area = (sqrt(3) / 4) * (2 * raio) * (2 * raio);
        printf("A área do triângulo inscrito é: %.2f\n", area);
    } else if (opcao == 'Q') {
        area = (2 * raio) * (2 * raio);
        printf("A área do quadrado inscrito é: %.2f\n", area);
    } else if (opcao == 'H') {
        area = (3 * sqrt(3) / 2) * raio * raio;
        printf("A área do hexágono inscrito é: %.2f\n", area);
    } else {
        printf("Caractere inválido.\n");
    }

    return 0;
}
