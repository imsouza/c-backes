#include <stdio.h>

void main () {
  int valor1, valor2, deslE, deslD;
  printf("Valores: ");
  scanf("%i %i", &valor1, &valor2);

  deslE = valor1 << valor2;
  deslD = valor1 >> valor2;

  printf("E: %i | D: %i\n", deslE, deslD);
}
