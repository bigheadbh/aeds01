
#include <stdio.h>
#include <math.h> // Biblioteca necessária para a função pow

int main() {
    float lado1, lado2, lado3;

    // Leitura das medidas dos lados do triângulo
    printf("Digite o primeiro lado: ");
    scanf("%f", &lado1);
    printf("Digite o segundo lado: ");
    scanf("%f", &lado2);
    printf("Digite o terceiro lado: ");
    scanf("%f", &lado3);

    // Ordenação dos lados para garantir que lado1 <= lado2 <= lado3
    if (lado1 > lado2) { float temp = lado1; lado1 = lado2; lado2 = temp; }
    if (lado2 > lado3) { float temp = lado2; lado2 = lado3; lado3 = temp; }
    if (lado1 > lado2) { float temp = lado1; lado1 = lado2; lado2 = temp; }

    // Verificação do tipo de triângulo
    if (pow(lado3, 2) == pow(lado1, 2) + pow(lado2, 2)) {
        printf("O triângulo é RETÂNGULO.\n");
    } else if (pow(lado3, 2) < pow(lado1, 2) + pow(lado2, 2)) {
        printf("O triângulo é ACUTÂNGULO.\n");
    } else {
        printf("O triângulo é OBTUSÂNGULO.\n");
    }

    return 0;
}
