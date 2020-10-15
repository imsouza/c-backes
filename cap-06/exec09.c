#include <stdio.h>

void main () {
  int A[10] = { 1, 2 , 3, 4, 5, 6, 7, 8, 9, 10 };
  int B[10] = { 5, 6 , 1, 2, 4, 6, 3, 8, 0, 11 };
  int C[10], i, j;

  for (i = 0; i < 10; i++) {
    C[i] = A[i] - B[i];
  }

  printf("[\n");
  for (i = 0; i < 10; i++) {
    printf("%i - %i = %i\n", A[i], B[i], C[i]);
  }
  printf("]\n");
}
