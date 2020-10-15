#include <stdio.h>

void main () {
  int A[4][4], maiorQ10 = 0;
  int i, j;

  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      printf("Valor [%i][%i]: ", i, j);
      scanf("%i", &A[i][j]);
    }
  }

  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      if (A[i][j] > 10) {
        maiorQ10++;
      }
    }
  }

  printf("Qtde. de valores maiores que 10: %i\n", maiorQ10);
}
