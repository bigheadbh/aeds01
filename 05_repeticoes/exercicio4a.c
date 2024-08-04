#include <stdio.h>
#include <math.h>

int main() {
    int a1, q, n;
    double an;
    
    printf("Digite o 1º termo da PG: ");
    scanf("%d", &a1);
    
    printf("Digite a razão da PG: ");
    scanf("%d", &q);
    
    printf("Digite o número do termo que você quer encontrar: ");
    scanf("%d", &n);
    
    an = a1 * pow(q, n-1);
    
    printf("O %dº termo da PG é: %.2lf\n", n, an);
    
    return 0;
}
