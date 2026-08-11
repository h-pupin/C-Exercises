#include <stdio.h>

#define tam 10

int main(){

    int vet[tam];

    for (int i = 0; i < tam; i++)
    {
        printf("Digite o valor: ");
        scanf("%d",&vet[i]);
    }

    int cont = tam;
    for (int i = 0; i < cont; i++)
    {
        for (int j = i+1; j < cont; j++)
        {
            if (vet[i]==vet[j]){
                cont--;
                for (int n = j; n < cont; n++)
                {
                    vet[n] = vet[n+1];
                }
            }
        }
    }

    for (int i = 0; i < cont; i++)
    {
        printf("\n%d",vet[i]);
    }


    return 0;
}