
#include <stdio.h>
#include <math.h> // Biblioteca necessária para a função M_PI

int main() {
    int opcao;
    float lado, raio, area;

    // Leitura da opção
    printf("Digite um número inteiro: ");
    scanf("%d", &opcao);

    // Verificação e cálculos correspondentes
    if (opcao == 1 || opcao == 2) {
        printf("Digite os lados do retângulo: ");
        scanf("%f %f", &lado, &raio); // Usando raio para armazenar o segundo lado
        area = M_PI * (lado * lado + raio * raio) / 4;
        printf("A área do círculo circunscrito ao retângulo é: %.2f\n", area);
    } else if (opcao == 3 || opcao == 4 || opcao == 5) {
        printf("Digite o raio do círculo: ");
        scanf("%f", &raio);
        area = (2 * raio) * (2 * raio);
        printf("A área do quadrado inscrito no círculo é: %.2f\n", area);
    } else {
        printf("Digite o lado do quadrado: ");
        scanf("%f", &lado);
        area = M_PI * (lado * lado / 4 - lado * lado / 16);
        printf("A área da coroa circular é: %.2f\n", area);
    }

    return 0;
}
