#include <stdio.h>

int main(){

    char frase[30];

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    int totalCaracter = 0;

    for (int i = 0; frase[i] != '\0'; i++){

        if (frase[i] !='\n'){
            totalCaracter++;
        }
    }

    printf("Total de caracteres: %d", totalCaracter);





    return 0;
}