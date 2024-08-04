#include <stdio.h>

int main() {
    int L, a = 0, b = 1, next;
    
    printf("Quantos elementos da série de Fibonacci você quer imprimir? ");
    scanf("%d", &L);
    
    for (int i = 0; i < L; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = a + b;
            a = b;
            b = next;
        }
        printf("%d ", next);
    }
    printf("\n");
    
    return 0;
}
