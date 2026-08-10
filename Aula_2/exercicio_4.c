#include <stdio.h>
#include <math.h>

int main(){

    float peso, altura;

    printf("Digite seu peso: ");
    scanf("%f",&peso);
    printf("Digite sua altura: ");
    scanf("%f",&altura);

    float imc = peso / pow(altura,2);

    if (imc < 18.5){
    printf("Abaixo do peso");
    }
    else if(imc < 25){
        printf("Peso Normal");
    }
    else if(imc <30){
        printf("Acima do peso");
    }
    else if(imc < 35){
        printf("Obesidade I");
    }
    else if(imc < 40){
        printf("Obesidade II");
    }
    else{
        printf("Obesidade III");
    }

    return 0;
}