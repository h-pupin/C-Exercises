#include <stdio.h>

int main(){

    int dia1;
    int dia2;
    int mes1;
    int mes2;
    int ano1;
    int ano2;

    printf("Digite a Primeira Data (dd mm aaaaa): ");
    scanf("%d%d%d",&dia1,&mes1,&ano1);

    printf("Digite a Segunda Data (dd mm aaaaa): ");
    scanf("%d%d%d",&dia2,&mes2,&ano2);

    if (ano2 < ano1){
        printf("%d/%d/%d é a data cronologicamente maior",dia1,mes1,ano1);
    }else if(ano1 == ano2){
        if (mes2 < mes1){
            printf("%d/%d/%d é a data cronologicamente maior",dia1,mes1,ano1);
        }else if(mes1 == mes2){
            if(dia2 < dia1){
                printf("%d/%d/%d é a data cronologicamente maior",dia1,mes1,ano1);
            }else{printf("%d/%d/%d é a data cronologicamente maior",dia2,mes2,ano2);}
        }else{printf("%d/%d/%d é a data cronologicamente maior",dia2,mes2,ano2);}
    }else{printf("%d/%d/%d é a data cronologicamente maior",dia2,mes2,ano2);}

    return 0;
}