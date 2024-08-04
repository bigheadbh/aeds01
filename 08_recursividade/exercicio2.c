#include <stdio.h>

// Função recursiva para calcular a soma dos números de 1 a n
int somaRecursiva(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + somaRecursiva(n - 1);
    }
}

int main() {
    int n;
    printf("Insira o último número do intervalo começando em 1: ");
    scanf("%d", &n);
    
    int resultado = somaRecursiva(n);
    printf("A soma dos números de 1 a %d é: %d\n", n, resultado);
    
    return 0;
}
