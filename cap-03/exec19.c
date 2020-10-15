#include <stdio.h>

void main () {
  int valor1, valor2, XOR, OR, AND;
  printf("Valores: ");
  scanf("%i %i", &valor1, &valor2);

  XOR = valor1 ^ valor2;
  OR = valor1 | valor2;
  AND = valor1 & valor2;

  printf("XOR: %i | OR: %i | AND: %i\n", XOR, OR, AND);
}
