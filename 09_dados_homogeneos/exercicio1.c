#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_PESSOAS 10

// Struct para representar a data de nascimento
typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

// Struct para representar uma pessoa
typedef struct {
    char nome[100];
    float altura;
    Data nascimento;
} Pessoa;

// Função para gerar uma data de nascimento aleatória
Data gerarDataAleatoria() {
    Data data;
    data.dia = rand() % 31 + 1;
    data.mes = rand() % 12 + 1;
    data.ano = rand() % 31 + 1970; // Ano entre 1970 e 2000
    return data;
}

int main() {
    Pessoa pessoas[MAX_PESSOAS];
    int n;

    // Inicialização da semente do gerador de números aleatórios
    srand(time(NULL));

    printf("Digite o número de pessoas (até %d): ", MAX_PESSOAS);
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Digite o nome da pessoa %d: ", i + 1);
        scanf(" %[^\n]", pessoas[i].nome);
        printf("Digite a altura da pessoa %d (em metros): ", i + 1);
        scanf("%f", &pessoas[i].altura);
        pessoas[i].nascimento = gerarDataAleatoria();
    }

    // Exibição dos dados
    printf("\nDados das pessoas:\n");
    for (int i = 0; i < n; i++) {
        printf("Nome: %s\n", pessoas[i].nome);
        printf("Altura: %.2f metros\n", pessoas[i].altura);
        printf("Data de Nascimento: %02d/%02d/%04d\n", pessoas[i].nascimento.dia, pessoas[i].nascimento.mes, pessoas[i].nascimento.ano);
        printf("\n");
    }

    return 0;
}
