#include <stdio.h>

void main () {
  int X[10] = { 1, 2, -215, 4, 5, 6, 7, -20, 9, 4 }, i;
  int maior = X[0], menor = X[0];

  for (i = 0; i < 10; i++) {
    if (X[i] > maior) {
      maior = X[i];
    } if (X[i] < menor) {
      menor = X[i];
    }
  }

  printf("Maior: %i\n Menor: %i\n", maior, menor);
}
