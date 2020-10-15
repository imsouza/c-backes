#include <stdio.h>

void main () {
  int A[3][3], soma = 0;
  int i, j;

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf("Valor [%i][%i]: ", i, j);
      scanf("%i", &A[i][j]);
    }
  }

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      if (j == 3 - 1 - i) {
        soma += A[i][j];
      }
    }
  }

  printf("[ ");
  for (i = 0; i < 3; i++) {
    putchar('\n');
    for (j = 0; j < 3; j++) {
      printf("%i ", A[i][j]);
    }
  }
  printf("]\n");

  printf("Soma da diagonal secundária: %i\n", soma);
}
