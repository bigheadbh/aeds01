#include <stdio.h>

int main() {
    int var1, var2;

    // Leitura das variáveis
    printf("Digite o valor da primeira variável: ");
    scanf("%d", &var1);

    printf("Digite o valor da segunda variável: ");
    scanf("%d", &var2);

    // Comparação dos endereços e exibição do maior endereço
    if (&var1 > &var2) {
        printf("Conteúdo do maior endereço: %d\n", var1);
    } else {
        printf("Conteúdo do maior endereço: %d\n", var2);
    }

    return 0;
}
