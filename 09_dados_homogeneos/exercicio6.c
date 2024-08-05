#include <stdio.h>

#define NUM_ALUNOS 5

// Struct para representar um aluno
typedef struct {
    int matricula;
    char nome[100];
    float nota1;
    float nota2;
    float nota3;
} Aluno;

// Função para calcular a média de um aluno
float calcularMedia(Aluno aluno) {
    return (aluno.nota1 + aluno.nota2 + aluno.nota3) / 3;
}

int main() {
    Aluno alunos[NUM_ALUNOS];
    int i, indexMaiorNota1 = 0, indexMaiorMedia = 0, indexMenorMedia = 0;

    // Leitura dos dados dos alunos
    for (i = 0; i < NUM_ALUNOS; i++) {
        printf("Digite a matrícula do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].matricula);
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf(" %[^\n]", alunos[i].nome);
        printf("Digite a nota da primeira prova do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota1);
        printf("Digite a nota da segunda prova do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota2);
        printf("Digite a nota da terceira prova do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota3);
    }

    // Encontrar o aluno com maior nota da primeira prova
    for (i = 1; i < NUM_ALUNOS; i++) {
        if (alunos[i].nota1 > alunos[indexMaiorNota1].nota1) {
            indexMaiorNota1 = i;
        }
    }

    // Encontrar o aluno com maior média geral
    for (i = 1; i < NUM_ALUNOS; i++) {
        if (calcularMedia(alunos[i]) > calcularMedia(alunos[indexMaiorMedia])) {
            indexMaiorMedia = i;
        }
    }

    // Encontrar o aluno com menor média geral
    for (i = 1; i < NUM_ALUNOS; i++) {
        if (calcularMedia(alunos[i]) < calcularMedia(alunos[indexMenorMedia])) {
            indexMenorMedia = i;
        }
    }

    // Exibição dos resultados
    printf("\nAluno com maior nota da primeira prova:\n");
    printf("Matrícula: %d, Nome: %s, Nota: %.2f\n", alunos[indexMaiorNota1].matricula, alunos[indexMaiorNota1].nome, alunos[indexMaiorNota1].nota1);

    printf("\nAluno com maior média geral:\n");
    printf("Matrícula: %d, Nome: %s, Média: %.2f\n", alunos[indexMaiorMedia].matricula, alunos[indexMaiorMedia].nome, calcularMedia(alunos[indexMaiorMedia]));

    printf("\nAluno com menor média geral:\n");
    printf("Matrícula: %d, Nome: %s, Média: %.2f\n", alunos[indexMenorMedia].matricula, alunos[indexMenorMedia].nome, calcularMedia(alunos[indexMenorMedia]));

    // Verificar se cada aluno foi aprovado ou reprovado
    printf("\nStatus dos alunos:\n");
    for (i = 0; i < NUM_ALUNOS; i++) {
        if (calcularMedia(alunos[i]) >= 6.0) {
            printf("Matrícula: %d, Nome: %s, Status: Aprovado\n", alunos[i].matricula, alunos[i].nome);
        } else {
            printf("Matrícula: %d, Nome: %s, Status: Reprovado\n", alunos[i].matricula, alunos[i].nome);
        }
    }

    return 0;
}
