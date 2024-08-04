#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    
    printf("Digite um caractere: ");
    scanf("%c", &ch);
    
    if (isupper(ch)) {
        printf("Maiúscula\n");
    } else if (islower(ch)) {
        printf("Minúscula\n");
    } else if (isdigit(ch)) {
        printf("Dígito\n");
    } else {
        printf("Outro caractere\n");
    }
    
    return 0;
}
