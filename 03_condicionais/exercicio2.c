
#include <stdio.h>

int main() {
    int num;

    // Leitura do número inteiro
    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    // Verificação se é divisível por 7
    if (num % 7 == 0) {
        printf("O número %d é divisível por 7.\n", num);
    } else {
        printf("O número %d não é divisível por 7.\n", num);
    }

    return 0;
}
