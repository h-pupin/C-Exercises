#include <stdio.h>

#define tam 5

int main(){

    int vet1[tam];
    int vet2[tam];

    for (int i = 0; i < tam; i++)
    {
        printf("Digite o %d° numero da lista 1:",i+1);
        scanf("%d",&vet1[i]);
    }

    for (int i = 0; i < tam; i++)
    {
        printf("Digite o %d° numero da lista 2:",i+1);
        scanf("%d",&vet2[i]);
    }


    for (int i = 0; i < tam;i++)
    {
        for (int j = 0; j < tam; j++)
        {
            if (vet1[i] == vet2[j]){
                printf("\n%d", vet1[i]);
            }
        }
        
    }    

    return 0;
}