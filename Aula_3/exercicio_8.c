#include <stdio.h>

#define linha 3
#define coluna 3

int main(){

    int matriz[linha][coluna] = {1,2,3,4,5,6,7,8,9};

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            if (i <= j){printf("%d ",matriz[i][j]);}
        }
    }

    return 0;
}