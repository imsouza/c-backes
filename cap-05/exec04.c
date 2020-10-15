#include <stdio.h>

void main () {
  int i, count = 0;

  for (i = 0; i <= 15; i++) {
    if (i > 0 && i % 3 == 0 && count < 5) {
      printf("%i\n", i);
      count++;
    }
  }
}