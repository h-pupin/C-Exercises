#include <stdio.h>

int main(){

    int numero;

    printf("Digite um número pra saber sua equivalência em horas: ");
    scanf("%d", &numero);

    float numero_hora = (float)numero / 60;

    printf("O número digitado equivale a %.2f Horas", numero_hora);

    return 0;
}