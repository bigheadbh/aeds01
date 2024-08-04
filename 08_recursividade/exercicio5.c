#include <stdio.h>

// Função recursiva para contar os dígitos de um número
int contarDigitos(int num) {
    if (num == 0) {
        return 0;
    } else {
        return 1 + contarDigitos(num / 10);
    }
}

int main() {
    int num;
    
    // Leitura do número fornecido pelo usuário
    printf("Entre com um número: ");
    scanf("%d", &num);
    
    // Tratamento do caso em que o número é 0
    if (num == 0) {
        printf("O número de dígitos do número é: 1\n");
    } else {
        int resultado = contarDigitos(num);
        printf("O número de dígitos do número é: %d\n", resultado);
    }
    
    return 0;
}
