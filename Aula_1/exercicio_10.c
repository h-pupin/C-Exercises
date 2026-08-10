#include <stdio.h>

int main(){

    int saco;
    int gato1;
    int gato2;

    printf("Digite a quantidade do saco de ração (Kg): ");
    scanf("%d", &saco);

    printf("Digite quanta ração o Gato 1 come por dia(g): ");
    scanf("%d", &gato1);

    printf("Digite quanta ração o Gato 2 come por dia(g): ");
    scanf("%d", &gato2);

    float consumoGato1 = ((float)gato1 * 5)/1000;
    float consumoGato2 = ((float)gato2 * 5)/1000;

    float racaoRestante = saco - (consumoGato1 + consumoGato2);

    printf("O consumo do Gato 1 é de %.2f Kg por 5 dias.\n", consumoGato1);
    printf("O consumo do Gato 2 é de %.2f Kg por 5 dias.\n", consumoGato2);
    printf("Restou %.2f Kg de ração no saco após 5 dias.\n",racaoRestante);


    return 0;
}