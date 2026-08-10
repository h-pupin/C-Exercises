#include <stdio.h>

int main(){

    char letra;

    printf("Qual letra quer deixar em maiuscula? ");
    scanf("%c", &letra);

    char letraMaiuscula = letra - 32;

    printf("A letra '%c' em maúsculo é '%c'.",letra, letraMaiuscula);

    
    return 0;
}