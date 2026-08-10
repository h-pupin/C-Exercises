#include <stdio.h>
#include <math.h>

int main(){

    const float PI = 3.14159;
    int raio;

    printf("Digite o raio da esfera: ");
    scanf("%d", &raio);

    float area = 4 * PI * pow(raio,2);
    float volume = (4/3) * PI * pow(raio ,3);

    printf("A esfera tem:2 \n");
    printf("Volume %.2f\n",volume);
    printf("Area %.2f",area);
    return 0;
}