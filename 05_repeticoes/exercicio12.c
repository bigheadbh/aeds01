#include <stdio.h>

int main() {
    int a, b, i = 0;
    
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    
    printf("Elementos da sequência que são maiores que %d e menores que %d:\n", a, b);
    
    while (1) {
        int num = 1 + 2 * i;
        if (num > b) {
            break;
        }
        if (num > a && num < b) {
            printf("%d ", num);
        }
        i++;
    }
    printf("\n");
    
    return 0;
}
