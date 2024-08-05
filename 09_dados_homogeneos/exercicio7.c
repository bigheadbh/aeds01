#include <stdio.h>

// Struct para representar a data de nascimento
typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

// Struct para representar um funcionário
typedef struct {
    char nome[100];
    int idade;
    char sexo;
    char cpf[15];
    Data dataNascimento;
    int codigoSetor;
    char cargo[30];
    float salario;
} Funcionario;

int main() {
    Funcionario funcionario;

    // Leitura dos dados do funcionário
    printf("Digite o nome do funcionário: ");
    scanf(" %[^\n]", funcionario.nome);

    printf("Digite a idade do funcionário: ");
    scanf("%d", &funcionario.idade);

    printf("Digite o sexo do funcionário (M/F): ");
    scanf(" %c", &funcionario.sexo);

    printf("Digite o CPF do funcionário: ");
    scanf(" %[^\n]", funcionario.cpf);

    printf("Digite a data de nascimento do funcionário (dd mm aaaa): ");
    scanf("%d %d %d", &funcionario.dataNascimento.dia, &funcionario.dataNascimento.mes, &funcionario.dataNascimento.ano);

    printf("Digite o código do setor do funcionário (0-99): ");
    scanf("%d", &funcionario.codigoSetor);

    printf("Digite o cargo do funcionário: ");
    scanf(" %[^\n]", funcionario.cargo);

    printf("Digite o salário do funcionário: ");
    scanf("%f", &funcionario.salario);

    // Exibição dos dados do funcionário
    printf("\nDados do funcionário:\n");
    printf("Nome: %s\n", funcionario.nome);
    printf("Idade: %d\n", funcionario.idade);
    printf("Sexo: %c\n", funcionario.sexo);
    printf("CPF: %s\n", funcionario.cpf);
    printf("Data de Nascimento: %02d/%02d/%04d\n", funcionario.dataNascimento.dia, funcionario.dataNascimento.mes, funcionario.dataNascimento.ano);
    printf("Código do Setor: %d\n", funcionario.codigoSetor);
    printf("Cargo: %s\n", funcionario.cargo);
    printf("Salário: %.2f\n", funcionario.salario);

    return 0;
}
