#include <stdio.h>

int main(){

    //le a string até o espaço
    char str[20];

    printf("Digite seu nome: ");
    scanf("%19[^\n]",&str);

    printf("olá, %s",str);



    //ler a linha 
    char nome [30];

    printf("Digite seu nome: ");
    fgets(nome,sizeof(nome),stdin);
    nome[strcspn(nome,"\n")] = '\0';

    printf("Olá, %s",nome);


    //limpesa de buffer
    while (getchar() !='\n');


    //tamanho de string
    char nome[] = "brasil";
    int tamanho = strlen(nome);

    //copiar string
    char nome[50];
    strcpy(nome,"Joaquim Silva");

    //comparação string
    char s1 = "Pao";
    char s2 = "pao";

    if (strcmp(s1,s2) == 0){
        printf("Sao iguais\n");
    }else {printf("Diferentes\n");}



    //biblioteca <ctype.h> = util na manupulação de string

    toupper(); //função atua somente no caractere, nao na string inteira de uma vez
    tolower(); // igual o upper só que pra minusculo
    isalpha(); //ignora numeros, espaços e simbolos
    isdigit(); //ver se é um digito(0-9)
    isalnum(); //testa se é numerico ou alfabeto, nao permite caracteres especiais(@,#,$)
    isspace(); //ver se tem espaço

    while (getchar() != '\n'); //limpeza de buffer

    return 0;
}