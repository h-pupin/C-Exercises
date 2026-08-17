#include <stdio.h>
#define linha 4
#define coluna 3
int main(){
    int matriz [linha][coluna] ={};

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            printf("Digite o numero da posição[%d][%d]: ",i+1,j+1);
            scanf("%d",&matriz[i][j]);
        }
    }
printf("\n");

for (int i = 0; i < linha; i++)
{
    int pares =0;
    for (int j = 0; j < coluna; j++)
    {
        if (matriz[i][j]%2 == 0){
            pares++;
        }
    }
    printf("A matriz tem %d numeros pares na linha %d.\n",pares,i+1);
}
printf("\n");

for (int i = 0; i < coluna; i++)
{
    int somaColuna = 0;
    for (int j = 0; j < linha; j++)
    {
        somaColuna += matriz[j][i];
    }
    float mediaColuna = (float)somaColuna/4;
    printf("A média da coluna %d é %.1f\n",i+1,mediaColuna);
    
}



    return 0;
}