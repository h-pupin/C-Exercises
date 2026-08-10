/* Três amigos foram a uma lanchonete e decidiram rachar a conta igualmente. 
Além do valor total consumido, a lanchonete cobra uma taxa de serviço (gorjeta) 
de 10% sobre o valor da conta.
Faça um programa em C que leia o valor total consumido e mostre:

1- O valor da taxa de serviço;
2- O valor total da conta (consumo + taxa);
3- Quanto cada um dos 3 amigos deverá pagar.*/

#include <stdio.h>

int main(){
    
    float conta;

    printf("Qual o valor total da conta? R$");
    scanf("%f", &conta);

    float taxaServico = conta * 0.1;

    float totalConta = conta + taxaServico;

    float totalPessoa = totalConta / 3;

    printf("O valor da taxa de serviço foi de R$%2.f.\n",taxaServico);
    printf("O Valor total da conta com a taxa foi de R$%2.f.\n", totalConta);
    printf("O valor que cada um deve pagar é de R$%2.f.\n", totalPessoa);


    return 0;
}