#include <stdio.h>

// Função recursiva para calcular a soma dos dígitos de um número
int somaDigitos(int num) {
    if (num == 0) {
        return 0;
    } else {
        return (num % 10) + somaDigitos(num / 10);
    }
}

int main() {
    int num;
    
    // Leitura do número fornecido pelo usuário
    printf("Insira qualquer número para encontrar a soma dos dígitos: ");
    scanf("%d", &num);
    
    int resultado = somaDigitos(num);
    printf("A soma dos dígitos de %d é: %d\n", num, resultado);
    
    return 0;
}
