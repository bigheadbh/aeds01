
#include <stdio.h>
#include <math.h> // Biblioteca necessária para a função pow

int main() {
    int num;

    // Leitura do número inteiro
    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    // Verificação se é par ou ímpar e cálculo correspondente
    if (num % 2 == 0) {
        printf("O quadrado de %d é: %d\n", num, num * num);
    } else {
        printf("O cubo de %d é: %d\n", num, num * num * num);
    }

    return 0;
}
