#include <stdio.h>

void main () {
  int valores[6];
  int i;

  for (i = 0; i < 6; i++) {
    printf("\nValor[%i]: ", i);
    scanf("%i", &valores[i]);
  }

  putchar('\n');

  for (i = 0; i < 6; i++) {
    printf("#%i - %i\n", i+1, valores[i]);
  }
}