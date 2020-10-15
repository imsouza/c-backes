#include <stdio.h>

void main () {
  int i, num, maior = 0, menor = 0;

  for (i = 0; i < 10; i++) {
    scanf("%i", &num);

    if (num > maior) {
      maior = num;
    } if (num < menor) {
      menor = num;
    }

  }

  printf("Maior: %i, Menor: %i\n", maior, menor);
}