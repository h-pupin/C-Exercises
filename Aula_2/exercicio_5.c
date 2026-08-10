#include <stdio.h>

int main(){

int km,p;
float v1,v2;

printf("Digite quanto troca o valor(KM): ");
scanf("%d",&km);
printf("Digite O Valor 1: ");
scanf("%f",&v1);
printf("Digite o valor 2: ");
scanf("%f",&v2);
printf("Digite a distância percorrida(KM): ");
scanf("%d",&p);

if (p<km){
    float total = p*v1;
    printf("O total da corrida é R$%.2f", total);
}else{
    float total = p*v2;
    printf("O total da corrida é R$%.2f", total);
}

    return 0;
}