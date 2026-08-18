#include <stdio.h>

#define linha 4
#define coluna 3

int main(){

    int matriz[linha][coluna] = {0};
    int totalGeral = 0;

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            printf("O vendedor %d vendeu quantas unidades do produto %d: ",i+1,j+1);
            scanf("%d",&matriz[i][j]);
            totalGeral += matriz[i][j];
        }
    }

    //matriz vendas
    printf("\nTabela de vendas\n");
    for (int i = 0; i < linha; i++)
    {
        for(int j = 0; j < coluna; j++)
        {
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }



    
    //vendedor
    int vendMaisVendeu = 0,quantVendMaisVendeu = 0;
    int vendedores[linha]={0};
    
    for (int i = 0; i < linha; i++)
    {
        int totalVendedor = 0;
        for (int j = 0; j < coluna; j++)
        {
            totalVendedor += matriz[i][j];
        }
        vendedores[i] = totalVendedor;
        
        if (totalVendedor > quantVendMaisVendeu){
            vendMaisVendeu = i+1;
            quantVendMaisVendeu = totalVendedor;
        }
    }

    //produto
    int produtoMaisVendido = 0,quantProdMaisVendido = 0;
    int produtos[coluna]={0};

    for (int i = 0; i < coluna; i++)
    {
        int totalProduto = 0;
        for (int j = 0; j < linha; j++)
        {
            totalProduto += matriz[j][i];
        }
        produtos[i] = totalProduto;

        if (totalProduto > quantProdMaisVendido){
            produtoMaisVendido = i+1;
            quantProdMaisVendido = totalProduto;
        }
    }

    //PRINTS

    //total unid vendidas p/ cd vendedor
    for (int i = 0; i < linha; i++)
    {
        printf("\nO vendedor %d vendeu %d unidades.",i+1,vendedores[i]);
    }
    
    printf("\n");
    
    //total unid vendida d/ cd produto
    for (int i = 0; i < coluna; i++)
    {
        printf("\nO produto %d vendeu %d unidades.",i+1,produtos[i]);
    }
    printf("\n");

    //maior numero de vendas produto/vendedor
    printf("\nO vendedor que teve o maior numero de vendas foi %d com %d itens\n",vendMaisVendeu,quantVendMaisVendeu);
    printf("\nO produto que teve o maior numero de vendas foi %d com %d itens\n",produtoMaisVendido,quantProdMaisVendido);

    //Total geral
    printf("\nO teotal geral de unidades vendidas foi de %d itens",totalGeral);


    return 0;
}