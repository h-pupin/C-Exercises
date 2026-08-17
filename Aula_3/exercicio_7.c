#include <stdio.h>
#define linha 5
#define coluna 4

int main(){

    int matriz [linha][coluna] = {};

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            printf("Digite o numero da posição[%d][%d]: ",i+1,j+1);
            scanf("%d",&matriz[i][j]);
        }
    }
//TODO - trocar linha 1 cm linha 4 e trocar coluna 0 cm coluna 3

    int matrizTrocada [linha][coluna] = {};

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            if (i == 1){
                matrizTrocada[1][j] = matriz[4][j];
            }
            else if (i == 4){
                matrizTrocada[4][j] = matriz[1][j];
            }
            else {matrizTrocada[i][j] = matriz[i][j];}
        }
    }

    for (int i = 0; i < linha; i++)
    {
        int temp = matrizTrocada[i][0];
        matrizTrocada[i][0] = matrizTrocada[i][3];
        matrizTrocada[i][3] = temp;
    }


//TODO - fazer 2 prints, um com o antes e um com dps
    printf("\nMatriz primária\n");
    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz trocada\n");
    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            printf("%d ", matrizTrocada[i][j]);
        }
        printf("\n");
    }


    return 0;
}