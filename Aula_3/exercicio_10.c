#include <stdio.h>
#define linha 3
#define coluna 3

int main(){

    int matriz [linha][coluna] = {0};

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {        
            printf("Digite o número da posção[%d][%d]: ",i+1,j+1);
            scanf("%d",&matriz[i][j]);
        }
    }

    int numIgual = 1;

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            if (matriz[i][j] != matriz [j][i])
            {
                numIgual = 0;
                break;
            }
        }
        if(!numIgual) break;
    }

    if (numIgual)
    {
        printf("Essa é uma MATRIZ SIMÉTRICA");
    }else {printf("Essa não é uma matriz simetrica");}
    



    return 0;
}