//Dados três valores A, B e C, construa um algoritmo, que imprima os valores de forma ascendente (do menor para o maior).
#include <stdio.h>
#include <math.h>

int main(){

    double A, B, C, menor, meio, maior;

    printf("Para realizarmos uma ordem ascendente precisamos das 3 opcoes; \nMe informe o primeiro numero: ");
    scanf("%lf", &A);
    while (getchar() != '\n');    
    
    printf("Me informe o segundo numero: ");
    scanf("%lf", &B);
    while (getchar() != '\n');    
    
    printf("Me informe o terceiro numero: ");
    scanf("%lf", &C);
    while (getchar() != '\n');    
    
    
    if(A > B && A > C){
        maior = A;
    } else if(B > A && B > C){
        maior = B;
    } else if(C > A && C > B){
        maior = C;
    }

    if(A < B && A < C){
        menor = A;
    } else if(B < A && B < C){
        menor = B;
    } else {
        menor = C;
    }

    if(A != maior && A != menor){
        meio = A;
    } else if(B != maior && B != menor){
        meio = B;
    } else {
        meio = C;
    }

    printf("\nOs numeros em ordem ascendente fica: %.1lf %.1lf %.1lf;", menor, meio, maior);


    return 0;
}