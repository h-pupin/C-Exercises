#include <stdio.h>

#define TAM 10

int main(){

    float salario [TAM] = {0};

    float soma = 0;
    for(int i = 0; i < TAM; i++)
    {
        printf("Digite o salário do %d° funcionario: R$",i+1);
        scanf("%f",&salario[i]);
        soma += salario[i];
    }

    float media = soma/TAM;
    printf("\nMédia de salários: %.2f\n", media);

    for (int i=0;i<TAM;i++){
        printf("\nSalário antes do reajuste: R$%.2f\n",salario[i]);
        if (salario[i] > media){
            salario[i] = salario[i] * 1.05;
        } else{
            salario[i] = salario[i] * 1.10;
        }
        printf("Salário após o reajuste: R$%.2f\n",salario[i]);
    }

    return 0;
}