#include <stdio.h>

void main () {
  int A[6][6], soma = 0;
  int i, j;

  for (i = 0; i < 6; i++) {
    for (j = 0; j < 6; j++) {
      printf("# [%i][%i]: ", i, j);
      scanf("%i", &A[i][j]);
    }
  }

  for (i = 0; i < 6; i++) {
    for (j = 0; j < 6; j++) {
      if (i > j) {
        soma += A[i][j];
      }
    }
  }

  printf("[ ");
  for (i = 0; i < 6; i++) {
    putchar('\n');
    for (j = 0; j < 6; j++) {
      printf("%i ", A[i][j]);
    }
  }
  printf("]\n\n");

  printf("Soma: %i\n", soma);
}