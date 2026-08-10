#include <stdio.h>

int main(){
    float fahrenheit, celcius;

    printf("Digite a temperatura em fahrenheit: ");
    scanf("%f", &fahrenheit);

    celcius = ((fahrenheit-32)*5)/9;

    printf("Temperatura em Celcius: %.2f \n", celcius);

    return 0;
}
