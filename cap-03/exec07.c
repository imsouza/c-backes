#include <stdio.h>

void main () {
  float reais;
  printf("R$: ?\b");
  scanf("%f", &reais);

  printf("US$: %0.2f\n", reais*5.62);
}