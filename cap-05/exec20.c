#include <stdio.h>

unsigned long fatorial (unsigned long f) {
  if (f == 0)
    return 1;

  return f * fatorial(f - 1);
}

void main () {
  int num, i, aux=0;
  float e;

  scanf("%i", &num);

  for (i = 1; i <= num; i++) {
    aux = fatorial(i);
    e = e + (1.0 / fatorial(i));
  }

  putchar('\n');

  printf("Soma: %0.4f\n", e);
}