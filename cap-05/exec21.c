#include <stdio.h>

void main () {
  int qtdNumeros, maior=0, menor, num=0, lidos=0, tmpNum=0;

  printf("Qtd. Números: ");
  scanf("%i", &qtdNumeros);

  while (qtdNumeros != 0) {
    printf("num[%i] ", qtdNumeros--);
    scanf("%i", &num);

    if (num > maior) {
      maior = num;
      tmpNum = maior;
    } if (num < menor) {
      menor = num;
    }

    if (tmpNum == num) {
      lidos++;
    }
  }

  printf("\n\nMaior: %i\nMenor: %i\nLidos: %i\n", maior, menor, lidos);
}