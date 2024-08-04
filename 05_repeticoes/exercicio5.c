#include <stdio.h>

int main() {
    int limit;

    printf("Digite o limite até onde você quer imprimir os múltiplos de 5: ");
    scanf("%d", &limit);

    printf("Múltiplos de 5 até %d:\n", limit);
    for (int i = 0; i <= limit; i++) {
        if (i % 5 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    
    return 0;
}
