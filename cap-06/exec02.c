#include <stdio.h>

void main () {
  int valores[6];
  int i, j;

  for (i = 0; i < 6; i++) {
    printf("\nValor[%i]: ", i);
    scanf("%i", &valores[i]);
  }

  putchar('\n');

  for (j = 6; j > 0; --j) {
    printf("#%i - %i\n", j, valores[j-1]);
  }
}