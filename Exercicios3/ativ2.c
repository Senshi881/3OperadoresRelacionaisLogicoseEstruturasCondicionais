//Leia o salário e imprima se a pessoa recebe mais;
#include <stdio.h>

int main(){

    float salario;
    float salarioMin = 1212.00;

    printf("Digite seu salario: ");
    scanf("%f", &salario);
    while (getchar() != '\n');

    if(salario >= salarioMin){
        printf("Voce recebe mais do que o salario minimo!");
    } else {
        printf("Voce recebe menos que o salario minimo!");
    }

    printf("\n*Comparacao conluida!*");

    return 0;
}