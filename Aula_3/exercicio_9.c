#include <stdio.h>
#define linha 4
#define coluna 4

int main(){

    int matriz[linha][coluna] = {0};
    for (int i=0; i<linha;i++){
        for (int j = 0; j < coluna; j++)
        {
            printf("Digite o numero da posição [%d][%d]: ",i+1,j+1);
            scanf("%d",&matriz[i][j]);
        }
    }
    
    int matrizIdentidae [linha][coluna] = {1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1};
    int saoIguais = 1;

    for (int i=0; i<linha;i++){
        for (int j = 0; j < coluna; j++){
            if (matriz[i][j]!=matrizIdentidae[i][j]){
            saoIguais = 0;
            break;
            }
        }
        if (!saoIguais) break;
    }

    if (saoIguais){
        printf("\nEssa é uma MATRIZ IDENTIDADE");
    }else{
        printf("\nEssa não é uma matriz identidade");
    }

    return 0;
}