#include <stdio.h>

void main () {
  int valor, mul, div;
  printf("Valor: ");
  scanf("%i", &valor);

  mul = valor << 1;
  div = valor >> 1;

  printf("x: %i , /: %i\n", mul, div);
}
