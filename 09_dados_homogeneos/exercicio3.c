#include <stdio.h>
#include <math.h>

// Struct para representar um ponto 2D
typedef struct {
    float x;
    float y;
    float z;
} Ponto2D;

// Função para calcular a distância entre dois pontos
float calcularDistancia(Ponto2D p1, Ponto2D p2) {
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2) + pow(p1.z - p2.z, 2));
}

int main() {
    Ponto2D ponto_inicial, ponto_final;
    int opcao;

    do {
        printf("\nMenu:\n");
        printf("1. Digitar o valor do primeiro ponto\n");
        printf("2. Digitar os valores do segundo ponto\n");
        printf("3. Mostrar a distância entre os pontos\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite os valores do primeiro ponto (x y z): ");
                scanf("%f %f %f", &ponto_inicial.x, &ponto_inicial.y, &ponto_inicial.z);
                break;
            case 2:
                printf("Digite os valores do segundo ponto (x y z): ");
                scanf("%f %f %f", &ponto_final.x, &ponto_final.y, &ponto_final.z);
                break;
            case 3:
                printf("A distância entre os pontos é: %.2f\n", calcularDistancia(ponto_inicial, ponto_final));
                break;
            case 4:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 4);

    return 0;
}
