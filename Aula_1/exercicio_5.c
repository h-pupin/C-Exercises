#include <stdio.h>

int main()
{
    float salario;
    float reajuste;

    printf("Digite o salário do funcionário: ");
    scanf("%f", &salario);
    printf("Digite o reajuste(%%): ");
    scanf("%f", &reajuste);

    float aumento = salario*(reajuste/100);
    float novo_salario = salario + aumento;

    printf("O funcionário teve um aumento de R$ %.2f \n", aumento);
    printf("O novo salário do funcionário é de R$ %.2f", novo_salario);

    return 0;
}
