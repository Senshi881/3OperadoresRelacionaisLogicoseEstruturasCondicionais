//Calcule as raízes da equação de 2º grau. Lembrando que:


//A varável a tem que ser diferente de zero. Caso seja igual, imprima a mensagem “Não e equação de segundo grau”. 

//• Se ∆ < 0, não existe real. Imprima a mensagem: Não existe raiz. 

//• Se ∆ = 0, existe uma raiz real. Imprima a raiz e a mensagem Raiz  única.

//• Se ∆ > 0, imprima as duas raízes reais. 
#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, delta, x1, x2;

    printf("Para descobrirmos o Delta de sua equacao de segundo grau me informe o A: ");
    scanf("%f", &a);
    while (getchar() != '\n');

    printf("Me informe o B: ");
    scanf("%f", &b);
    while (getchar() != '\n');

    printf("Me informe o C: ");
    scanf("%f", &c);
    while (getchar() != '\n');

    delta = pow(b,2) - 4 * (a * c);

    if(delta > 0){
        x1 = (- b + sqrt(delta)) / 2 * a;
        x2 = (- b - sqrt(delta)) / 2 * a;
        printf("\nX1 = %.2f; \nX2 = %.2f;", x1, x2);
    } else if(delta == 0){
        x1 = (- b + sqrt(delta)) / 2 * a;
        x2 = (- b - sqrt(delta)) / 2 * a;
        printf("O X1 e o X2 sao igual a %.2f;", x1, x2);
    } else {
        printf("O seu delta nao existe raiz;");
    }


    return 0;
}