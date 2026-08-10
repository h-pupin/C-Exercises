/*Faça um programa em C que receba a distância total percorrida por um carro 
(em Km) e o total de combustível gasto (em litros). Calcule e exiba o consumo 
médio do veículo em Km/l, formatando a saída com 2 casas decimais.*/

#include <stdio.h>

int main(){

    float distancia;
    float combustivel;

    printf("A distancia percorrida pelo carro foi(Km): ");
    scanf("%f", &distancia);

    printf("O gasto de combustivel foi(L): ");
    scanf("%f", &combustivel);

    float consumoMedio = distancia / combustivel;

    printf("O veículo fez uma média de %.2f Km/L.", consumoMedio);


    return 0;

}