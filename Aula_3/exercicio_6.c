#include <stdio.h>
#define tam 2

int main(){

    int matriz[tam][tam] = {};
    int maiorNumero = 0;
    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam; j++)
        {
            printf("Digite o numero da posição [%d][%d]: ",i+1,j+1);
            scanf("%d",&matriz[i][j]);
            if (matriz[i][j] > maiorNumero){maiorNumero = matriz[i][j];}
        }
    }
    printf("\n");    

    int matrizR [tam][tam] ={};
    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam; j++)
        {
            matrizR[i][j] = matriz[i][j] * maiorNumero;
        }
    }

    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam; j++)
        {
            printf("%d ",matrizR[i][j]);
        }
        printf("\n");
    }
    printf("\n");


    return 0;
}