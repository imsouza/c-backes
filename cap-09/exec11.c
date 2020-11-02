#include <stdio.h>

float pot (float n1, float n2) {
  int i;
  float nPot = 1;

  for (i = 0; i < n2; i++) {
    nPot *= n1;
  }

  return nPot;
}


void main () {
  float n1, n2;

  scanf("%f %f", &n1, &n2);

  printf("%f\n", pot(n1, n2));
}