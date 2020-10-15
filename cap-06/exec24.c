#include <stdio.h>

void main () {
  int A[3][3], V[3], sum1 = 0, sum2 = 0, sum3 = 0;
  int i, j;

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf("# [%i][%i]: ", i, j);
      scanf("%i", &A[i][j]);
    }
  }

  for (i = 0; i < 3; i++) {
    sum1 += A[i][0];
    sum2 += A[i][1];
    sum3 += A[i][2];
  }

  V[0] = sum1, V[1] = sum2, V[2] = sum3;

  printf("[ ");
  for (i = 0; i < 3; i++) {
    printf("%i ", V[i]);
  }
  printf("]\n");
}