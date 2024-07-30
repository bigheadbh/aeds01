
#include <stdio.h>

int main() {
    float lado1, lado2, lado3;

    // Leitura das medidas dos lados do triângulo
    printf("Digite o primeiro lado: ");
    scanf("%f", &lado1);
    printf("Digite o segundo lado: ");
    scanf("%f", &lado2);
    printf("Digite o terceiro lado: ");
    scanf("%f", &lado3);

    // Verificação do tipo de triângulo
    if (lado1 == lado2 && lado2 == lado3) {
        printf("O triângulo é EQUILÁTERO.\n");
    } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
        printf("O triângulo é ISÓSCELES.\n");
    } else {
        printf("O triângulo é ESCALENO.\n");
    }

    return 0;
}
