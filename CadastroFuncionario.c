

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int codigo;
    char nome[50];
    char endereco[100];
    char cargo[50];
    char dt_admissao[11];
    char telefone[15];
    float salario;

} RegFuncionarios;

int main()
{
    int resp;
    RegFuncionarios *func;

    func = (RegFuncionarios *)malloc(sizeof(RegFuncionarios));

    printf("Digite o codigo do funcionario..........: ");
    scanf("%d", &func->codigo);

    printf("Digite o nome do funcionario............: ");
    fflush(stdin);
    fgets(func->nome, 50, stdin);

    printf("Digite o endereco do funcionario........: ");
    fflush(stdin);
    fgets(func->endereco, 100, stdin);

    printf("Digite o cargo do funcionario...........: ");
    fflush(stdin);
    fgets(func->cargo, 50, stdin);

    printf("Digite a data de admissao do funcionario: ");
    fflush(stdin);
    fgets(func->dt_admissao, 11, stdin);

    printf("Digite o telefone do funcionario........: ");
    fflush(stdin);
    fgets(func->telefone, 15, stdin);

    printf("Digite o salario do funcionario.........: ");
    scanf("%f", &func->salario);

    // exibier informaçoes do funcionario //

    printf("O codigo do funcionario e..........: %d\n", func->codigo);
    printf("O nome do funcionario e............: %s\n", func->nome);
    printf("O endereco do funcionario e........: %s\n", func->endereco);
    printf("O cargo do funcionario e...........: %s\n", func->cargo);
    printf("A data de admissao do funcionario e: %s\n", func->dt_admissao);
    printf("O telefone do funcionario e........: %s\n", func->telefone);
    printf("O salario do funcionario e.........: %.2f\n", func->salario);

}
