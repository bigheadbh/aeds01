#include <stdio.h>

int main() {
    int n;
    
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    
    printf("Os %d primeiros elementos da sequência são:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", 1 + 2 * i);
    }
    printf("\n");
    
    return 0;
}
