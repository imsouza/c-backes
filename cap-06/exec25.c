#include <stdio.h>

void main () {
  int A[10][3], p1 = 0, p2 = 0, p3 = 0;
  int i, j;

  for (i = 0; i < 10; i++) {
    for (j = 0; j < 3; j++) {
      printf("# [%i][%i]: ", i, j);
      scanf("%i", &A[i][j]);
    }
  }

  for (i = 0; i < 10; i++) {
    if (A[i][0] < 5) {
      p1++;
    } else if (A[i][1] < 5) {
      p2++;
    } else if (A[i][2] < 5) {
      p3++;
    }
  }

  printf("\n\n\t Qtde. Piores Notas\n\n\tP1: %i\tP2: %i\tP3: %i\n", p1, p2, p3);
}