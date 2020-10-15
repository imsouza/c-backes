#include <stdio.h>

void main () {
  int i, sum = 0;

  for (i = 1; i < 1000; i++) {
    if (i % 3 == 0 || i % 5 == 0) {
      sum += i;
    }
  }

  printf("Soma de multiplos de 3 ou 5 abaixo de 1000: %i\n", sum);
}