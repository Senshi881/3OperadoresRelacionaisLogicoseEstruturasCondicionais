// Leia a idade e imprima se a pessoa é maior;
#include <stdio.h>

int main() {

  int idade;

  printf("Digite sua idade: ", idade);
  scanf("%d", &idade);
  while (getchar() != '\n')
    ;

  if (idade >= 18) {
    printf("Voce e maior de idade!");
  } else {
    printf("Voce e menor de idade!");
  }

  printf("\n*Comparacao conluida!*");

  return 0;
}