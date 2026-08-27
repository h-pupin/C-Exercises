#include <stdio.h>
#include <string.h>

void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

typedef struct {
    char nome[20];
    float preco;
    int quantiadeEstoque;
}Produto;

int main(){

    Produto produtos[5];
    for (int i=0; i<5; i++){
        printf("Cadastro do produto %d \n", i+1);
        printf("Nome do produto: ");
        fgets(produtos[i].nome, sizeof(produtos[i].nome), stdin);
        produtos[i].nome[strcspn(produtos[i].nome, "\n")] = '\0';

        printf("Preço: R$ ");
        scanf("%f",&produtos[i].preco);

        printf("Quantidade no estoque: ");
        scanf("%d", &produtos[i].quantiadeEstoque);
        
        limpar_buffer();
        printf("\n");
    }

    for (int i = 0; i < 5; i++){
        float somaProduto = 0;
        somaProduto = produtos[i].preco * produtos[i].quantiadeEstoque;
        printf("O produto %s tem caputal de R$%.2f.\n",produtos[i],somaProduto);
    }

    float somaPrecos = 0;
    for (int i = 0; i < 5; i++){
        somaPrecos += produtos[i].preco;
    }
    float mediaPrecos = somaPrecos/5;

    printf("\nA média dos preços é de R$%.2f.\n",mediaPrecos);

    for (int i = 0; i < 5; i++){
        if (produtos[i].preco > mediaPrecos){
            printf("O produto %s tem preço acima da média.\n",produtos[i].nome);
        }
    }


    return 0;
}