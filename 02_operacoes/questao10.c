#include <stdio.h>

int main() {
    float A, B, temp;

    // Leitura dos valores de A e B
    printf("Digite o valor de A: ");
    scanf("%f", &A);
    printf("Digite o valor de B: ");
    scanf("%f", &B);

    // Trocando os valores das variáveis usando uma variável temporária
    temp = A;
    A = B;
    B = temp;

    // Exibindo os valores trocados
    printf("Após a troca, o valor de A é: %.2f\n", A);
    printf("Após a troca, o valor de B é: %.2f\n", B);

    return 0;
}
