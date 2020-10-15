#include <stdio.h>
#include <math.h>

void main () {
  float A[20], QUAD[20];
  int i;

  for (i = 0; i < 20; i++) {
    printf("Num #%i: ", i);
    scanf("%f", &A[i]);
    QUAD[i] = pow(A[i], 2);
  }

  printf("[\n");
  for (i = 0; i < 20; i++) {
    printf("%0.0f ^ 2 = %0.0f\n", A[i], QUAD[i]);
  }
  printf("]\n");
}
