#include <stdio.h>

int main(){
    float base, altura;
    printf("Digite a base do retângulo: ");
    scanf("%f", &base);
    printf("Digite a altura do retângulo: ");
    scanf("%f", &altura);

    float area = base * altura;

    printf("Area: %.2f ", area);

    return 0;
}
    