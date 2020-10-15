#include <stdio.h>
#include <math.h>

void main () {
  int A[5][5], B[5][5];
  int i, j;

  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      printf("# [%i][%i]: ", i, j);
      scanf("%i", &A[i][j]);
    }
  }

  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      B[i][j] = pow(A[i][j], 2);
    }
  }

  putchar('\n');

  printf("[ ");
  for (i = 0; i < 5; i++) {
    putchar('\n');
    for (j = 0; j < 5; j++) {
      printf("%i ", A[i][j]);
    }
  }
  printf("]\n\n");

  putchar('\n');

  printf("[ ");
  for (i = 0; i < 5; i++) {
    putchar('\n');
    for (j = 0; j < 5; j++) {
      printf("%i ", B[i][j]);
    }
  }
  printf("]\n");
}