#include <stdio.h>

int main() {
    float numerador, denominador, resultado;

    // Leitura do numerador e denominador
    printf("Digite o numerador: ");
    scanf("%f", &numerador);
    printf("Digite o denominador: ");
    scanf("%f", &denominador);

    // Verificação para evitar divisão por zero
    if (denominador == 0) {
        printf("Erro: Divisão por zero não é permitida.\n");
    } else {
        // Cálculo do resultado da divisão
        resultado = numerador / denominador;
        // Exibindo o resultado
        printf("O resultado da divisão é: %.2f\n", resultado);
    }

    return 0;
}
