#include <stdio.h>

void main () {
  int valor, comp;
  printf("Valor: ");
  scanf("%i", &valor);

  comp = ~valor;

  printf("x: %i\n", comp);
}
