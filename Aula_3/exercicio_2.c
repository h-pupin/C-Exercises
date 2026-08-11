#include <stdio.h>

#define TAM 6

int main(){

    int vet[TAM];
    for (int i = 0; i < TAM; i++)
    {
        printf("Digite o %d° numero da lista: ", i+1);
        scanf("%d",&vet[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        int troca = vet[i];
        vet[i] = vet[5-i];
        vet[5-i] = troca;
        
    }

    for (int i = 0; i < TAM; i++)
    {
        printf("%d\n",vet[i]);
    }
    



    return 0;
}