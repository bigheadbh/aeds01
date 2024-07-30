
#include <stdio.h>

int main() {
    float a, b, raiz;

    // Leitura dos coeficientes
    printf("Digite o coeficiente a: ");
    scanf("%f", &a);
    printf("Digite o coeficiente b: ");
    scanf("%f", &b);

    // Verificação e cálculo da raiz
    if (a != 0) {
        raiz = -b / a;
        printf("A raiz da equação é: %.2f\n", raiz);
    } else {
        printf("Coeficiente 'a' não pode ser zero em uma equação do primeiro grau.\n");
    }

    return 0;
}
