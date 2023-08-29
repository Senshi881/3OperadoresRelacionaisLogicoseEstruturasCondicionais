//Construa um algoritmo que, dado quatro valores, A, B, C e D, o algoritmo imprima o maior e o menor valor. 
#include <stdio.h>
#include <math.h>

int main(){

    double A, B, C, D;

    printf("Para encontrarmos o maior numero entra 4 opcoes me informe o primeiro: ");
    scanf("%lf", &A);
    while (getchar() != '\n');    
    
    printf("Me informe o segundo numero: ");
    scanf("%lf", &B);
    while (getchar() != '\n');    
    
    printf("Me informe o terceiro numero: ");
    scanf("%lf", &C);
    while (getchar() != '\n');    
    
    printf("Me informe o quarto numero: ");
    scanf("%lf", &D);
    while (getchar() != '\n');
    
    
    if(A > B && A > C && A > D){
        printf("O numero %.2lf e o maior", A);
    } else if(B > A && B > C && B > D){
        printf("O numero %.2lf e o maior", B);
    } else if(C > A && C > B && C > D){
        printf("O numero %.2lf e o maior", C);
    } else {
        printf("O numero %.2lf e o maior", D);
    }

        if(A < B && A < C && A < D){
        printf(" e o numero %.2lf e o menor;", A);
    } else if(B < A && B < C && B < D){
        printf(" e o numero %.2lf e o menor;", B);
    } else if(C < A && C < B && C < D){
        printf(" e o numero %.2lf e o menor;", C);
    } else {
        printf(" e o numero %.2lf e o menor;", D);
    }

    printf("\n*Numeros encontrados!*");


    return 0;
}