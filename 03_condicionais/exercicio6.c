
#include <stdio.h>
#include <math.h> // Biblioteca necessária para a função sqrt

int main() {
    float a, b, c, delta, raiz1, raiz2, realPart, imagPart;

    // Leitura dos coeficientes
    printf("Digite o coeficiente a: ");
    scanf("%f", &a);
    printf("Digite o coeficiente b: ");
    scanf("%f", &b);
    printf("Digite o coeficiente c: ");
    scanf("%f", &c);

    // Cálculo do delta
    delta = b * b - 4 * a * c;

    // Verificação e cálculo das raízes
    if (delta > 0) {
        raiz1 = (-b + sqrt(delta)) / (2 * a);
        raiz2 = (-b - sqrt(delta)) / (2 * a);
        printf("As raízes reais são: %.2f e %.2f\n", raiz1, raiz2);
    } else if (delta == 0) {
        raiz1 = -b / (2 * a);
        printf("A raiz real é: %.2f\n", raiz1);
    } else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-delta) / (2 * a);
        printf("As raízes imaginárias são: %.2f + %.2fi e %.2f - %.2fi\n", realPart, imagPart, realPart, imagPart);
    }

    return 0;
}
