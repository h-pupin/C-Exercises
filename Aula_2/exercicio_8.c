#include <stdio.h>

int main(){
    float altChico=1.5, altZe=1.1,maisChico=0.02,maisZe=0.03;
    int ano=0;

    while(altZe <= altChico){
        printf("No ano %d: Chico tem %.2fm e Ze tem %.2fm.\n",ano,altChico,altZe);
        altChico += maisChico;
        altZe += maisZe;
        ano++;
    }
    printf("No ano %d: Chico tem %.2fm e Ze tem %.2fm.\n",ano,altChico,altZe);

    return 0;
}