#include <stdio.h>

int main() {
    int n, num, sum = 0;
    
    printf("Quantos números você quer somar? ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &num);
        sum += num;
    }
    
    printf("A soma dos números é: %d\n", sum);
    
    return 0;
}
