#include <stdio.h>
#include <string.h>

int main(){
    char palavra[20];
    char letra;
    printf("Digite a palavra: ");
    fgets(palavra, sizeof(palavra), stdin);
    palavra[strcspn(palavra, "\n")] = '\0';
    
    printf("Digite a letra: ");
    scanf("%c",&letra);

    int repeticao = 0;
    for (int i = 0; i < 20; i++)
    {
        if (letra == palavra[i]){repeticao++;}
    }

    printf("A letra %c, aparece %dx na palavra %s",letra,repeticao,palavra);
    
    return 0;
}