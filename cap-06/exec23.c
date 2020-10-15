#include <stdio.h>
#include <math.h>

void main () {
  int A[10][10];
  int i, j;

  for (i = 0; i < 10; i++) {
    for (j = 0; j < 10; j++) {
      A[i][j] = 0;
    }
  }

  for (i = 0; i < 10; i++) {
    for (j = 0; j < 10; j++) {
      if (i < 3 * pow(i, 2)) {
        A[i][j] = 2 * i + 7 * j - 2;
      } else if (i > j) {
        A[i][j] = 4 * pow(i, 3) + 5 * pow(j, 2) + 1;
      }
    }
  }

  printf("[ ");
  for (i = 0; i < 10; i++) {
    putchar('\n');
    for (j = 0; j < 10; j++) {
      printf("%i ", A[i][j]);
    }
  }
  printf("]\n");
}
