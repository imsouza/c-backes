#include <stdio.h>

void main () {
  int i, num, maior, menor;

  while (1) {
    scanf("%i", &num);

    if (num < 0) {
      break;
    }

    if (num > maior) {
      maior = num;
    } if (num < menor) {
      menor = num;
    }
  }

  printf("Maior: %i, Menor: %i\n", maior, menor);
}