#include <stdio.h>

int main(){

    int valorSaque;
    int quantidade100=0,quantidade50=0,quantidade20=0,quantidade10=0,quantidade5=0,quantidade2=0;

    printf("Digite o valor a ser sacado: ");
    if (scanf("%d",&valorSaque) != 1 || valorSaque <= 0){
        printf("Valor Inválido, digite somente inteiros e positivos!!\n");
        return 1;
    }
    if(valorSaque == 1 || valorSaque == 3){
        printf("Saque indisponivel nesse valor!!\n");
        return 0;
    }


    if (valorSaque / 100 != 0){
        quantidade100 = valorSaque / 100;
        valorSaque -= quantidade100*100;
    }
    if (valorSaque / 50 != 0){
        quantidade50 = valorSaque / 50;
        valorSaque -= quantidade50*50;
    }
    if (valorSaque / 20 != 0){
        quantidade20 = valorSaque / 20;
        valorSaque -= quantidade20*20;
    }
    if (valorSaque / 10 != 0){
        quantidade10 = valorSaque / 10;
        valorSaque -= quantidade10*10;
    }
    if (valorSaque%2 != 0){
        quantidade5 = 1;
        valorSaque -= 5;
    }
    if (valorSaque / 2 != 0){
        quantidade2 = valorSaque / 2;
        valorSaque -= quantidade2*2;
    }

    if (valorSaque != 0){
        printf("Saque indisponível, saque outro valor!!");
        
    }
    else{
        printf("Serão sacadas: \n");

        if(quantidade100 > 0){
            printf("%d notas de R$100,00\n",quantidade100);
        }
        if(quantidade50 > 0){
            printf("%d notas de R$50,00\n",quantidade50);
        }
        if(quantidade20 > 0){
            printf("%d notas de R$20,00\n",quantidade20);
        }
        if(quantidade10 > 0){
            printf("%d notas de R$10,00\n",quantidade10);
        }
        if(quantidade5 > 0){
            printf("%d notas de R$5,00\n",quantidade5);
        }
        if(quantidade2 > 0){
            printf("%d notas de R$2,00\n",quantidade2);
        }
    }


    return 0;
}