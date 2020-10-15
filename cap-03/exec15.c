#include <stdio.h>

void main () {
  int valor, x, y, z;

  printf("Inteiro de 3 digitos: ");
  scanf("%i", &valor);

  x = valor / 100;
  y = (valor % 100) / 10;
  z = valor % 10;

  printf("%i%i%i\n", z, y, x);
}