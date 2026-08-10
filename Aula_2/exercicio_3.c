#include <stdio.h>

int main(){

    int a,b,c;


    printf("Insira os valores dos lados do triângulo (a b c): ");
    scanf("%d%d%d",&a,&b,&c);

    if ((a+b>c) && (a+c>b) && (b+c>a)){
        printf("Este é um triângulo tipo:\n");
        if (a==b && b==c){
            printf("EQUILÁTERO");
        }else if (a==b||b==c||a==c){
            printf("ISÓSCELES");
        }else {printf("ESCALENO");}
    }else{printf("Isto NÃO é um triângulo!!");}


    return 0;
}