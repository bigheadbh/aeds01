#include <stdio.h>

int main() {
    int L, a = 0, b = 1, next = 0;
    
    printf("Imprimir elementos da série de Fibonacci menores que: ");
    scanf("%d", &L);
    
    while (next < L) {
        printf("%d ", next);
        a = b;
        b = next;
        next = a + b;
    }
    printf("\n");
    
    return 0;
}
