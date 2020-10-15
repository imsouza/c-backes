#include <stdio.h>
#include <math.h>

void main () {
  int graus;
  float radianos;
  printf("Graus: °\b");
  scanf("%i", &graus);

  radianos = graus * M_PI / 180;

  printf("R: %f\n", radianos);
}