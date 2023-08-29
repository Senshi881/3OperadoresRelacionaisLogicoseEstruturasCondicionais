//Leia a a altura e indique se é maior que 1.80;
#include <stdio.h>

int main(){

    float altura, alturaI = 1.80;

    printf("Digite sua altura: ");
    scanf("%f", &altura);
    while (getchar() != '\n');

    if(altura > alturaI){
        printf("Voce e maior que 1.80m!");
    } else if(altura < alturaI){
        printf("Voce e menor que 1.80m!");
    } else {
    printf("Tem a mesma altura que 1.80m!");
    }

    printf("\n*Comparacao conluida!*");

    return 0;
}