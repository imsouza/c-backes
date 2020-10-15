#include <stdio.h>

void main () {
  int A[8], i, X, Y, soma = 0;

  for (i = 0; i < 8; i++) {
    printf("\nValor[%i]: ", i);
    scanf("%i", &A[i]);
  }

  printf("X : Y ");
  scanf("%i %i", &X, &Y);

  soma = A[X] + A[Y];

  printf("Soma: %i\n", soma);
}
