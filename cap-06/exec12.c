#include <stdio.h>

void main () {
  float A[10];
  int i, j;

  for (i = 0; i < 10; i++) {
    printf("Num #%i: ", i);
    scanf("%f", &A[i]);
  }

  printf("[\n");
  for (i = 0; i < 10; i++) {
    for (j = i + 1; j < 10; j++) {
      if (A[i] == A[j]) {
        printf("%0.0f\n", A[i]);
      }
    }
  }
  printf("]\n");
}
