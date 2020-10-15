#include <stdio.h>

void main () {
  float A[10], tmp = 0;
  int i, swap;

  for (i = 0; i < 10; i++) {
    printf("Valor [%i]: ", i);
    scanf("%f", &A[i]);
  }

  do {
    swap = 0;
    for (i = 0; i < 9; i++) {
      if (A[i] > A[i + 1]) {
        tmp = A[i];
        A[i] = A[i + 1];
        A[i + 1] = tmp;
        swap = 1;
      }
    }
  } while (swap);


  printf("[ ");
  for (i = 0; i < 10; i++) {
    printf("%f ", A[i]);
  }
  printf("]\n");

}
