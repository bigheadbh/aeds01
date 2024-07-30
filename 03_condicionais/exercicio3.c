
#include <stdio.h>

int main() {
    float a, b, c;

    // Leitura dos três números reais
    printf("Digite o primeiro lado: ");
    scanf("%f", &a);
    printf("Digite o segundo lado: ");
    scanf("%f", &b);
    printf("Digite o terceiro lado: ");
    scanf("%f", &c);

    // Verificação se podem ser lados de um triângulo
    if (a + b > c && a + c > b && b + c > a) {
        printf("Os valores podem formar um triângulo.\n");
    } else {
        printf("Os valores não podem formar um triângulo.\n");
    }

    return 0;
}
