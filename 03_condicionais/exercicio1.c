
#include <stdio.h>

int main() {
    int num1, num2, diferenca;
    float divisao;

    // Leitura dos dois números inteiros
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    // Cálculo e impressão da diferença
    diferenca = num1 - num2;
    printf("A diferença entre os números é: %d\n", diferenca);

    // Verificação e cálculo da divisão
    if (num2 != 0) {
        divisao = (float)num1 / num2;
        printf("A divisão do primeiro pelo segundo número é: %.2f\n", divisao);
    } else {
        printf("Divisão por zero não é permitida.\n");
    }

    return 0;
}
