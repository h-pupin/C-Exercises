#include <stdio.h>
#include <math.h>

int main(){
    float peso;
    float altura;

    printf("Digite seu peso(Kg): ");
    scanf("%f", &peso);

    printf("Digite sua altura(M): ");
    scanf("%f", &altura);

    float imc = peso / pow(altura,2);

    printf("Seu IMC é: %.2f", imc);

    return 0;
}