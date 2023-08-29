//Escreva um algoritmo que leia um número e imprima a raiz quadrada do número caso ele seja positivo ou igual a zero e o
//quadrado do número caso ele seja negativo.
#include <stdio.h>
#include <math.h>

int main(){

    double num1;

    printf("Digite o numero em positivo para descobrir a raiz ou negativo para descobrir a potencia: ");
    scanf("%lf", &num1);
    while (getchar() != '\n');

    if(num1 >= 0){
        double raiz = sqrt(num1);
        printf("A raiz de seu numero e %lf;", raiz);
    } else {
        double pot = pow(num1,2);
        printf("Seu numero como potencia fica como: %lf;", pot);
    }

    printf("\n*Calculo solucionado!*");

    return 0;
}