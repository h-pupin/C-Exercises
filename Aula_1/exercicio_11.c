#include <stdio.h>

int main(){

    float salario;
    float quilowatts;

    printf("Digite o valor do salario minimo: R$");
    scanf("%f", &salario);

    printf("Digite a quantidade de quilowatt: ");
    scanf("%f", &quilowatts);

    float precoQuilowatts = salario / 5;

    float valorPago = precoQuilowatts * quilowatts;

    printf("O valor do quilowatt é: R$ %.2f\n", precoQuilowatts);
    printf("O valor a ser pago por essa residencia é de R$ %.2f", valorPago);


    return 0;
}