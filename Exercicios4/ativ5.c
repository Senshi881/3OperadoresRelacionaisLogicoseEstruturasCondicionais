//Construir um algoritmo que leia um número e imprima se ele é igual a 5, a 200, a 400, se está no intervalo entre 500 e 1000, ou se ela
//está fora dos escopos anteriores.
#include <stdio.h>
#include <math.h>

int main(){

    double num1;

    printf("Para descobrirmos o status de seu numero de acordo com as regras ditas me informe o numero: ");
    scanf("%lf", &num1);
    while (getchar() != '\n');

    if(num1 == 5){
        printf("Seu numero e igual a 5;");
    } else if(num1 == 200){
        printf("Seu numero e igual a 200;");
    } else if(num1 == 400){
        printf("Seu numero e igual a 400;");
    } else {
        printf("Seu numero e diferente de 5, 200 e 400;");
    }

    if(num1 > 500 && num1 < 1000){
        printf("\nO numero %.2lf esta entre 500 e 1000;", num1);
    } else if(num1 == 500){
        printf("\nSeu numero e exatamente 500;");
    } else if(num1 == 1000){
        printf("\nSeu numero e exatamente igual a 1000;");
    } else {
        printf("\nSeu numero nao esta entre 500 a 1000 porque ele e %.2lf;", num1);
    }


    return 0;
}