#include <stdio.h>

int main(){

    float dolar;
    float quantidade;

    printf("Digite o valor do dólar: R$");
    scanf("%f", &dolar);

    printf("Digite a quantidade de dólares pra converter: ");
    scanf("%f", &quantidade);

    float real = dolar * quantidade;

    printf("Você possui R$ %.2f", real);



    return 0;
}