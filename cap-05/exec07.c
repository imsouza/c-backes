#include <stdio.h>

void main () {
  int i, num, sum = 0;

  for (i = 0; i < 10; i++) {
    scanf("%i", &num);
    sum += num;
  }

  printf("Soma: %i\n", sum);
}