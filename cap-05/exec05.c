#include <stdio.h>

void main () {
  int i, count = 0;
  int sum;

  for (i = 0; i <= 50; i++) {
    if (i > 0 && i % 2 == 0) {
      sum += i;
    }
  }

  printf("Soma: %i\n", sum);
}