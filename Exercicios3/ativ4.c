//Leia o peso e verifique se equivale a 60kg;
#include <stdio.h>

int main(){

    float peso, pesoI = 60;

    printf("Digite seu peso: ");
    scanf("%f", &peso);
    while (getchar() != '\n');

    if(peso > pesoI){
        printf("Voce pesa mais que 60kg!");
    } else if(peso < pesoI){
        printf("Voce pesa menos que 60kg!");
    } else {
    printf("Voce pesa exatamente 60kg!");
    }

    printf("\n*Comparacao conluida!*");

    return 0;
}