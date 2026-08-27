#include <stdio.h> 
#include <string.h>

typedef struct {
    char placa[9];
    char marca[20];
    char modelo[20];
    int anoFabricacao;
}Carro;

int main(){

    Carro a1;

    printf("Digite a placa do carro: ");
    fgets(a1.placa,sizeof(a1.placa), stdin);
    a1.placa[strcspn(a1.placa,"\n")] =  '\0';
    
    printf("Digite a marca do carro: ");
    fgets(a1.marca,sizeof(a1.marca),stdin);
    a1.marca[strcspn(a1.marca,"\n")] =  '\0';
    
    printf("Digite o modelo do carro: ");
    fgets(a1.modelo,sizeof(a1.modelo),stdin);
    a1.modelo[strcspn(a1.modelo,"\n")] =  '\0';

    printf("Digite o ano do carro: ");
    scanf("%d", &a1.anoFabricacao);
    
    printf("\n");
    printf("Dados do seu Carro:\n");
    printf("Placa: %s\n",a1.placa);
    printf("Marca: %s\n",a1.marca);
    printf("Modelo: %s\n",a1.modelo);
    printf("Ano: %d\n",a1.anoFabricacao);

    return 0;
}
