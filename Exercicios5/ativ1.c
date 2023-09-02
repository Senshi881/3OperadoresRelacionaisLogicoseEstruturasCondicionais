//6. Codifique um programa que lê um número inteiro. A seguir o programa deve imprimir uma mensagem para o usuário dizendo se o número
//digitado é par. Se o número não for par, o programa não deve fazer nada.
#include <stdio.h>
#include <math.h>

int main(){
    int numInt;

    printf("Me informe o numero para verificarmos se ele e par ou nao: ");
    scanf("%d", &numInt);
    while (getchar() != '\n');


    if(numInt % 2 == 0){
        printf("Seu numero e par;");
    } else {
        printf("Nao e impar;");
    }


    return 0;
}