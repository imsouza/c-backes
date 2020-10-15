#include <stdio.h>
#include <math.h>

void main () {
  int A, B, H;

  scanf("%i %i", &A, &B);

  H = sqrt(pow(A, 2) + pow(B, 2));

  printf("H: %i\n", H);
}