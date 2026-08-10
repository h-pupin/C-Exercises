#include <stdio.h>

int main(){

    float nota_1;
    float nota_2;
    float nota_3;
    int peso_1;
    int peso_2;
    int peso_3;

    printf("Nota primeira prova: ");
    scanf("%f", &nota_1);
    printf("Peso primeira prova: ");
    scanf("%d", &peso_1);

    printf("Nota segunda prova: ");
    scanf("%f", &nota_2);
    printf("Peso segunda prova: ");
    scanf("%d", &peso_2);

    printf("Nota terceira prova: ");
    scanf("%f", &nota_3);
    printf("Peso terceira prova: ");
    scanf("%d", &peso_3);

    float media = ((nota_1*peso_1)+(nota_2*peso_2)+(nota_3*peso_3))/(peso_1+peso_2+peso_3);

    printf("--------------------------\n");

    printf("A média do aluno é: %.2f", media);

    return 0;
}