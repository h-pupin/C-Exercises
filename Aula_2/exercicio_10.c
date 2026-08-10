#include <stdio.h>

int main(){

    int numero,totalWhile=1,totalFor=1;

    printf("Digie um número para ver o fatorial: ");
    scanf("%d",&numero);

/*
    while(numero != 0){
        totalWhile *= numero;
        numero--;
    }
    printf("(While) O fatorial é %d.\n",totalWhile);
*/

    for (int i = 1; i < numero+1; i++){
        totalFor *= i;
    }
    printf("(For) O fatorial é %d.",totalFor);

    return 0;
}

