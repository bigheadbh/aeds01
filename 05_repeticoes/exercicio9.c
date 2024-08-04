#include <stdio.h>

int main() {
    int I;
    float R;

    printf("Digite um número inteiro I: ");
    scanf("%d", &I);

    printf("Digite um número real R: ");
    scanf("%f", &R);

    while (I > 10) {
        printf("Valor de I: %d\n", I);
        I -= 2;

        while (R < 10) {
            printf("Valores de R: %.2f e I: %d\n", R, I);
            R += 1.0;
        }
    }

    return 0;
}
