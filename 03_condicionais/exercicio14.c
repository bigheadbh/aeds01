
#include <stdio.h>

int main() {
    float num;

    // Leitura do número real
    printf("Digite um número real: ");
    scanf("%f", &num);

    // Verificação se é maior, menor ou igual a zero
    if (num > 0) {
        printf("O número %.2f é maior que zero.\n", num);
    } else if (num < 0) {
        printf("O número %.2f é menor que zero.\n", num);
    } else {
        printf("O número é igual a zero.\n");
    }

    return 0;
}
