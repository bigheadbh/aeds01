#include <stdio.h>

int main() {
    int a1, q, n, an;
    
    printf("Digite o 1º termo da PG: ");
    scanf("%d", &a1);
    
    printf("Digite a razão da PG: ");
    scanf("%d", &q);
    
    printf("Digite o número do termo que você quer encontrar: ");
    scanf("%d", &n);
    
    an = a1;
    for (int i = 1; i < n; i++) {
        an *= q;
    }
    
    printf("O %dº termo da PG é: %d\n", n, an);
    
    return 0;
}
