#include <stdio.h>
#include <string.h>

void limparBuffer(){
    int c;
    while((c = getchar()) != '\n' && c!=EOF);
}

typedef struct{
    int dia;
    int mes;
    int ano;
}Data;

typedef struct{
    char nome[20];
    char uf[5];
}Cidade;

typedef struct{
    char rua[30];
    int numero;
    Cidade cidade;
}Endereco;

typedef struct{
    char nome[40];
    Data dataAdmissao;
    Endereco endereco;
}Funcionario;

int main(){

    Funcionario funcionario;
    printf("CADASTRO DE FUNCIONÁRIO\n\n");

    printf("Digite o nome do funcionário: ");
    fgets(funcionario.nome,sizeof(funcionario.nome), stdin);
    funcionario.nome[strcspn(funcionario.nome, "\n")] = '\0';
    limparBuffer();
    
    printf("\nData de admissão: \n");
    printf("Dia: ");
    scanf("%d", &funcionario.dataAdmissao.dia);
    printf("Mês: ");
    scanf("%d", &funcionario.dataAdmissao.mes);
    printf("Ano: ");
    scanf("%d", &funcionario.dataAdmissao.ano);
    limparBuffer();

    printf("\nEndereço:\n");
    printf("Digite a Rua: ");
    fgets(funcionario.endereco.rua,sizeof(funcionario.endereco.rua), stdin);
    funcionario.endereco.rua[strcspn(funcionario.endereco.rua, "\n")] = '\0';
    printf("Número: ");
    scanf("%d",&funcionario.endereco.numero);
    limparBuffer();
    printf("Digite a Cidade: ");
    fgets(funcionario.endereco.cidade.nome,sizeof(funcionario.endereco.cidade.nome), stdin);
    funcionario.endereco.cidade.nome[strcspn(funcionario.endereco.cidade.nome, "\n")] = '\0';
    printf("Digite a UF: ");
    fgets(funcionario.endereco.cidade.uf,sizeof(funcionario.endereco.cidade.uf), stdin);
    funcionario.endereco.cidade.uf[strcspn(funcionario.endereco.cidade.uf, "\n")] = '\0';

    printf("\n\n**********************************");
    printf("Cadastro concluido com sucesso!!!!");
    printf("**********************************\n\n");
    
    printf("DADOS DO FUNCIONÁRIO\n");
    printf("Nome: %s\n",funcionario.nome);
    printf("Data admissão: %d/%d/%d\n",funcionario.dataAdmissao.dia,funcionario.dataAdmissao.mes,funcionario.dataAdmissao.ano);
    printf("Endereço:\n");
    printf("Rua %s,%d\n",funcionario.endereco.rua,funcionario.endereco.numero);
    printf("%s - %s",funcionario.endereco.cidade.nome,funcionario.endereco.cidade.uf);


    return 0;
}