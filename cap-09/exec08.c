#include <stdio.h>
#include <math.h>

void quadradoPefeito (int num) {
  sqrt(num) == (int)sqrt(num) ? printf("É perfeito\n") : printf("Não é perfeito.\n");
}


void main () {
  int num;

  scanf("%i", &num);

  quadradoPefeito(num);
}