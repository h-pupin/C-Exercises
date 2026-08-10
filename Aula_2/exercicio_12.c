#include <stdio.h>

int main (){

    int idade=0, quantidadeIdade=0, maiores21=0, acima65=0;

    while (idade >= 0){
        printf("Digite a idade: ");
        scanf("%d", &idade);

        if (idade >= 0){quantidadeIdade++;}

        if (idade >= 21){
            maiores21++;
        }
        if (idade > 65){
            acima65++;
        }
    }

    
    if(quantidadeIdade > 0){    
        float procentagem65 = ((float)acima65*100)/quantidadeIdade;

        printf("A quantidade de pessoas acima de 21 anos é de %d\n", maiores21);
        printf("A porcentagem de pessoas idosas (i>65) é de %.2f%%", procentagem65);
    }else{
        printf("\nNenhuma idade valida foi informada.");
    }


    return 0;
}