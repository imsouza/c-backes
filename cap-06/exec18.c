#include <stdio.h>

void main () {
  int A[5][5];
  int i, j;

  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      A[i][j] = 0;
    }
  }

  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      if (i == j) {
        A[i][j] = 1;
      } else {
        A[i][j] = 0;
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
  printf("]\n");
}
