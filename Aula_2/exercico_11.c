#include <stdio.h>

int main(){

    int menorTemp, maiorTemp, temp, total=0;

    for (int i = 0; i < 7; i++)
    {
        printf("Digite a temperatura do dia %d: ",i+1);
        scanf("%d",&temp);

        if (i==0)
        {
            menorTemp = temp;
            maiorTemp = temp;
        }else{
            if (menorTemp > temp)
            {
                menorTemp = temp;
            }
            if (maiorTemp < temp)
            {
                maiorTemp = temp;
            }
        }
        total += temp;
    }

    float tempMedia = (float)total/7;

    
    printf("A média das temperaturas da semana é %.2f°C\n", tempMedia);
    printf("A temperatura mais alta é %d°C\n", maiorTemp);
    printf("A temperatura mais baixa é %d°C", menorTemp);



    return 0;
}
