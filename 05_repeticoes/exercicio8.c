#include <stdio.h>

int main() {
    int numAlunos, numProvas;
    
    printf("Digite o número de alunos: ");
    scanf("%d", &numAlunos);
    
    printf("Digite o número de provas: ");
    scanf("%d", &numProvas);
    
    float notas[numAlunos][numProvas];
    float medias[numAlunos];
    float somaTurma = 0.0;
    int count80 = 0;
    
    // Leitura das notas
    for (int i = 0; i < numAlunos; i++) {
        float soma = 0.0;
        printf("Digite as notas do aluno %d:\n", i + 1);
        for (int j = 0; j < numProvas; j++) {
            printf("Prova %d: ", j + 1);
            scanf("%f", &notas[i][j]);
            soma += notas[i][j];
        }
        medias[i] = soma / numProvas;
        somaTurma += medias[i];
        if (medias[i] >= 80.0) {
            count80++;
        }
    }
    
    // Impressão das médias individuais
    printf("\nMédias dos alunos:\n");
    for (int i = 0; i < numAlunos; i++) {
        printf("A
