#include <stdio.h>

void main () {
  int A[6] = {1, 0, 5, -2, -5, 7}, i;
  float soma = 0;

  soma = A[0] + A[1] + A[5];

  printf("Soma: %0.4f\n", soma);


  A[4] = 100;

  for (i = 0; i < 6; i++) {
    printf(":%i\n ", A[i]);
  }
}
