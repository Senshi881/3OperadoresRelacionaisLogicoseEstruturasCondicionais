//Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se  aposentar. As condições para aposentadoria são:
//• Ter pelo menos 65 anos; • Ou ter trabalhado pelo menos 30 anos;, • Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos. 
#include <stdio.h>
#include <math.h>

int main(){
    int idade, tempoDeTrabalho;

    printf("Para sabermos se voce esta liberado a aposentadoria, vou precisar de sua idade e de seu tempo de trabalho; \nMe informe sua idade em anos: ");
    scanf("%d", &idade);
    while (getchar() != '\n');

    printf("Me informe seu tempo de trabalho em anos: ");
    scanf("%d", &tempoDeTrabalho);
    while (getchar() != '\n');

    if(idade <= tempoDeTrabalho){
        printf("Nao e possivel ter menos ou a mesma quantidade de anos de trabalho com anos de idade;");
    }else if(idade >= 65){
        printf("Pode aposentar porque voce ultrapassou 65 anos;");
    } else if(tempoDeTrabalho >= 30){
        printf("Pode aposentar porque voce ultrapassou 30 anos de trabalho;");
    } else if(idade >= 60 && tempoDeTrabalho >= 25){
        printf("Pode aposentar porque ultrapassou os 60 anos de idade e os 25 anos de trabalho;");
    } else {
        printf("Nao pode aposentar porque voce nao atende os requisitos minimos de aposentadoria;");
    }

    return 0;
}