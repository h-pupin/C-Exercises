#include <stdio.h>

#define linha 3
#define coluna 2


int main(){

    int matriz[linha][coluna] = {0};

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            printf("Digite o número da posição [%d][%d]: ",i+1,j+1);
            scanf("%d",&matriz[i][j]);
        }        
    }


    int matrizTransposta [coluna][linha] = {0};

    for (int i = 0; i < coluna; i++)
    {
        for (int j = 0; j < linha; j++)
        {
            matrizTransposta[i][j] = matriz [j][i];
        }
    }

    printf("\nMatriz principal\n");
    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            printf("%d ",matriz[i][j]);
        } 
        printf("\n");
    }
    
    printf("\nMatriz transposta\n");
    for (int i = 0; i < coluna; i++)
    {
        for (int j = 0; j < linha; j++)
        {
            printf("%d ",matrizTransposta[i][j]);
        }        
        printf("\n");
    }


    return 0;
}