
#include <stdio.h>

int main() {
    float a1, b1, c1, a2, b2, c2;
    float det, detX, detY, x, y;

    // Leitura dos coeficientes e termos independentes
    printf("Digite os coeficientes a1, b1 e o termo independente c1 da primeira equação: ");
    scanf("%f %f %f", &a1, &b1, &c1);
    printf("Digite os coeficientes a2, b2 e o termo independente c2 da segunda equação: ");
    scanf("%f %f %f", &a2, &b2, &c2);

    // Cálculo dos determinantes
    det = a1 * b2 - a2 * b1;
    detX = c1 * b2 - c2 * b1;
    detY = a1 * c2 - a2 * c1;

    // Verificação e cálculo das soluções
    if (det != 0) {
        x = detX / det;
        y = detY / det;
        printf("O sistema tem solução única: x = %.2f, y = %.2f\n", x, y);
    } else if (detX == 0 && detY == 0) {
        printf("O sistema tem infinitas soluções.\n");
    } else {
        printf("O sistema não tem solução.\n");
    }

    return 0;
}
