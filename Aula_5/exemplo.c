#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
    float media;
    float notas [3]; //array dentro de struct
}Aluno;  //vc cria a struct e ja coloca o apelido no final

int main(){

    Aluno a1 = {"joaquim", 20, 8.5}; //chama o aluno e cria o A1
    //se não colocar a especificação(.nome, .(nome do campo)),
    //precisa estar na ordem

    Aluno a2;//chama o aluno e cria o A2

    //leitura do teclado e atribuição aos dados de a2
    printf("Digite o nome: ");
    fgets(a2.nome, sizeof(a1.nome), stdin);
    a1.nome[strcspn(a1.nome, "\n")] = "\0";

    printf("Digite a idade: ");
    scanf("%d", &a2.idade);


    printf("Nome: %s", a1.nome); //printa o nome do a1


    Aluno a3 = a1; // cria uma copia independente

    a1.notas[1] = 8.5; //define a nota do indice

    //colocar as notas no array pelo indice delas
    for (int i = 0; i < 3; i++) {
        printf("Digite a nota %d: ", i+1);
        scanf("%f", &a1.notas[i]);
    }

    //Array de struct (um array com 10 structs Aluno)
    Aluno alunos[10];

    //Pra acessar as notas nesse array
    alunos[0].notas[1] = 10;

//posso ter uma structure dentro de outra, pra acessar as coisas dentro
//usa o "." (a1.curso.nome)


    return 0;
}

