#include <stdio.h>
#include <string.h>

typedef struct {
    float salario;
    char sexo[11];
    int idade;
    int quantFilhos;
}Habitante;

void limparBuffer(){
    int c;
    while((c = getchar()) != '\n' && c != EOF);
}

int main(){

    Habitante habitantes[5];

    for (int  i = 0; i < 5; i++)
    {
        printf("Digite o salário do Habitante %d: ",i+1);
        scanf("%f", &habitantes[i].salario);
        limparBuffer();

        printf("Digite o Sexo: ");
        fgets(habitantes[i].sexo, sizeof(habitantes[i].sexo), stdin);
        habitantes[i].sexo[strcspn(habitantes[i].sexo, "\n")] = '\0';

        printf("Digite a idade: ");
        scanf("%d",&habitantes[i].idade);

        printf("Digite a quantidade de filhos: ");
        scanf("%d",&habitantes[i].quantFilhos);

        limparBuffer();
        printf("\n");
    }

    float somaSalarios = 0;
    float somaFilhos = 0;
    float maiorSalario = habitantes[0].salario;
    float menorSalario = habitantes[0].salario;
    int mulheresMais2000 = 0;

    for (int i = 0; i < 5; i++)
    {
        somaSalarios += habitantes[i].salario;
        somaFilhos += habitantes[i].quantFilhos;

        if(habitantes[i].salario > maiorSalario){maiorSalario = habitantes[i].salario;}
        if(habitantes[i].salario < menorSalario){menorSalario = habitantes[i].salario;}
        if(strcmp(habitantes[i].sexo, "feminino") == 0 && habitantes[i].salario > 2000){mulheresMais2000++;}
    }


    float mediaSalarial = somaSalarios / 5;
    float mediaFilhos = (float) somaFilhos / 5;
    float percentualFemininoMais2000 = (mulheresMais2000 * 100) / 5;

    printf("A media de salário da popuplação é de R$%.2f.\n",mediaSalarial);
    printf("O número medio de filhos é de %.1f por habitante\n",mediaFilhos);
    printf("O maior salário é R$%.2f e o menor salário é R$%.2f.\n",maiorSalario,menorSalario);
    printf("O percentual de mulher com salariosuperior a R$2.000,00 é de %.2f%%\n",percentualFemininoMais2000);


    return 0;
}