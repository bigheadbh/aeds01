#include <stdio.h>

int main() {
    int n, count = 0, i = 0;
    
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    
    printf("Os %d primeiros elementos da sequência que são divisíveis por 3 e múltiplos de 5 ou divisíveis por 7 são:\n", n);
    
    while (count < n) {
        int num = 1 + 2 * i;
        if ((num % 3 == 0 && num % 5 == 0) || (num % 7 == 0)) {
            printf("%d ", num);
            count++;
        }
        i++;
    }
    printf("\n");
    
    return 0;
}
