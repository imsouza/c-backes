#include <stdio.h>

void main () {
  int i, j;
  float sum = 0;

  for (i = 1, j = 1; i <= 99; i+=2, ++j) {
    sum += i/j;
  }

  putchar('\n');

  printf("Soma: %0.4f\n", sum);
}