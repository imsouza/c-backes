#include <stdio.h>

void main () {
  int A[5][5], soma = 0;
  int i, j;

  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      printf("# [%i][%i]: ", i, j);
      scanf("%i", &A[i][j]);
    }
  }

  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      if (j != 5 - 1 - i && i != j) {
        soma += A[i][j];
      }
    }
  }


  printf("[ ");
  for (i = 0; i < 5; i++) {
    putchar('\n');
    for (j = 0; j < 5; j++) {
      printf("%i ", A[i][j]);
    }
  }
  printf("]\n\n");

  printf("Soma: %i\n", soma);
}