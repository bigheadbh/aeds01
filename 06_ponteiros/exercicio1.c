#include <stdio.h>

int main() {
    int inteiro = 10;
    float real = 5.5;
    char caractere = 'A';

    int *p_inteiro = &inteiro;
    float *p_real = &real;
    char *p_caractere = &caractere;

    // Imprimindo os valores originais
    printf("Valores originais:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Caractere: %c\n", caractere);

    // Modificando os valores usando ponteiros
    *p_inteiro = 20;
    *p_real = 10.5;
    *p_caractere = 'B';

    // Imprimindo os valores modificados
    printf("\nValores modificados:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Caractere: %c\n", caractere);

    return 0;
}
