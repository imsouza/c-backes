#include <stdio.h>

void main () {
  int valores[5], i, j;
  float soma = 0;

  for (i = 0; i < 5; i++) {
    printf("\nValor[%i]: ", i);
    scanf("%i", &valores[i]);
    soma += valores[i];
  }

  putchar('\n');

  printf("Soma: %0.4f\n", soma / 5);
}