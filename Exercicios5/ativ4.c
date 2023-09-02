//Uma empresa decide dar um aumento aos seus funcionários de acordo com uma tabela que considera o salario atual e o tempo de serviço
// de cada funcionário. Os funcionários com menor salario terão um aumento proporcionalmente maior do que os funcionários com um 
//salario maior, e conforme o tempo de serviço na empresa, cada funcionário irá receber um bônus adicional de salário. Faça um 
//programa que leia:

//• o valor do salario atual do funcionário; 

//• o tempo de serviço desse funcionário na empresa (número de anos de trabalho na empresa).

//Use as tabelas abaixo para calcular o salario reajustado deste funcionário e imprima o valor do salario final reajustado, 
//ou uma mensagem caso o funcionário não tenha direito a nenhum aumento. 
#include <stdio.h>
#include <math.h>

int main(){
    int tempoDeServico;
    float salarioA, salarioN, bonus;

    printf("Para descobrirmos se o seu salario havera reajuste, me informe seu salario: ");
    scanf("%f", &salarioA);
    while (getchar() != '\n');

    printf("Me informe seu tempo de servico em anos: ");
    scanf("%d", &tempoDeServico);
    while (getchar() != '\n');

    if(salarioA <= 500){
        salarioN = salarioA + (salarioA * 25) / 100;
        printf("\nSeu salario ficou %.2f porque obteve um reajuste de 25%%;", salarioN);
    }else if(salarioA <= 1000 && salarioA > 500){
        salarioN = salarioA + (salarioA * 20) / 100;
        printf("\nSeu salario ficou %.2f porque obteve um reajuste de 20%%;", salarioN);
    }else if(salarioA <= 1500 && salarioA > 1000){
        salarioN = salarioA + (salarioA * 15) / 100;
        printf("\nSeu salario ficou %.2f porque obteve um reajuste de 15%%;", salarioN);
    }else if(salarioA <= 2000 && salarioA > 1500){
        salarioN = salarioA + (salarioA * 10) / 100;
        printf("\nSeu salario ficou %.2f porque obteve um reajuste de 10%%;", salarioN);
    }else {
        salarioN = salarioA;
        printf("\nSeu salario ficou %.2f porque obteve um reajuste de 0%%;", salarioN);
    }

    if(tempoDeServico <= 1){
        bonus = salarioN + 0;
        printf("\nE nao obteve nenhum bonus por conta de seu tempo de trabalho; \nTotal do novo salario: %.2f;", bonus);
    }else if(tempoDeServico <= 3){
        bonus = salarioN + 100;
        printf("\nE voce obtece um bonus de R$100,00 por conta de seu tempo de trabalho; \nTotal do novo salario: %.2f;", bonus);
    }else if(tempoDeServico <= 6){
        bonus = salarioN + 200;
        printf("\nE voce obteve um bonus de R$200,00 por conta de seu tempo de trabalho; \nTotal do novo salario: %.2f;", bonus);
    }else if(tempoDeServico < 10){
        bonus = salarioN + 300;
        printf("\nE voce obteve um bonus de R$300,00 por conta de seu tempo de trabalho; \nTotal do novo salario: %.2f;", bonus);
    }else if(tempoDeServico >= 10){
        bonus = salarioN + 500;
        printf("\nE voce obteve um bonus de R$500,00 por conta de seu tempo de trabalho; \nTotal do novo salario: %.2f;", bonus);
    }


    return 0;
}