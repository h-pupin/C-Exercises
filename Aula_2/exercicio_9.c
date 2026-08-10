#include <stdio.h>

int main(){

    int numero;

    printf("Digite um número: ");
    scanf("%d",&numero);

    while (numero <= 1){
        printf("Numero inválido!\n");

        printf("Digite um número: ");
        scanf("%d",&numero);
    }

    int divisores = 0;

    for(int i = 1; i <= numero; i++){
        if(numero % i == 0){
            divisores++;
        }
    }

    if (divisores == 2){
        printf("O numero %d é um numero primo.",numero);
    }
    else{
        printf("O numero %d não é um numero primo.",numero);
    }



    return 0;
}