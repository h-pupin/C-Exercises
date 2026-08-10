#include <stdio.h>
#include <math.h>

int main(){

    int c;
    int taxa;
    int tempo;

    printf("Digite o Capital investido: R$");
    scanf("%d", &c);

    printf("Digite a Taxa anual (%%): ");
    scanf("%d", &taxa);

    printf("Digite o tempo em anos: ");
    scanf("%d", &tempo);

    float m = c * pow((1+((float)taxa/100)),tempo);

    printf("O montante acumulado foi de R$ %.2f", m);
    

    return 0;
}