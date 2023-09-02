//7. Faça um algoritmo que calcule a media ponderada das notas de 3 provas. A primeira e  a segunda prova tem peso 1 e a terceira
// tem peso 2. Ao final, mostrar a média do aluno e indicar se o aluno foi aprovado ou reprovado. A nota para aprovação deve ser
// igual ou superior a 7.0 pontos.

int main(){
    float prova1, prova2, prova3, peso1 = 1, peso2 = 2, resultado;

    printf("Para descobrirmos se voce esta aprovado ou reprovado preciso de suas notas. Levando em consideracao que a primeira e a segunda prova tem peso 1 e a terceira tem peso 2 e que a media e 7 para ser aprovado. \nMe informe a nota da prova 1: ");
    scanf("%f", &prova1);
    while (getchar() != '\n');

    printf("Me informe a nota da prova 2: ");
    scanf("%f", &prova2);
    while (getchar() != '\n');

    printf("Me informe a nota da prova 3: ");
    scanf("%f", &prova3);
    while (getchar() != '\n');


    resultado = (prova1 + prova2 + prova3 + prova3) / (peso1 + peso1 + peso2);

    if(resultado >= 7){
        printf("Voce foi aprovado com %.1f na media final;", resultado);
    } else {
        printf("Voce foi reprovado com %.1f na media final;", resultado);
    }


    return 0;
}