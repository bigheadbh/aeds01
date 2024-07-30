#include <stdio.h>

int main() {
    int horas, minutos, totalMinutos;

    // Leitura das horas e minutos
    printf("Digite as horas (0-23): ");
    scanf("%d", &horas);
    printf("Digite os minutos (0-59): ");
    scanf("%d", &minutos);

    // Cálculo do total de minutos desde o início do dia
    totalMinutos = horas * 60 + minutos;

    // Exibindo o resultado
    printf("Total de minutos desde o início do dia: %d\n", totalMinutos);

    return 0;
}
