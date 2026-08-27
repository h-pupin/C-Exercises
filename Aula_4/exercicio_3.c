#include <stdio.h>
#include <string.h>

int main(){

    char palavra[15];
    printf("Digite a palavra para verificação: ");
    fgets(palavra,sizeof(palavra),stdin);
    palavra[strcspn(palavra,"\n")] = '\0';

    int primeira = 0;
    int ultima = strlen(palavra) - 1;
    int palindromo = 1;

    while(primeira<ultima){
        if (palavra[primeira] != palavra[ultima]){
            palindromo = 0;
            break;
        }
        primeira++;
        ultima--;
    }

if(palindromo){
    printf("\n A palavra '%s' é um palindromo!\n",palavra);
}else {
    printf("\n A palavra '%s' não é um palindromo!\n",palavra);
}


    return 0;
}