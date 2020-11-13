#include <stdio.h>

int main () {
  float array[10] = {
    2.2, 3.3, 4.9, 6.0, 5.4,
    1.2, 7.3, 1.5, 2.9, 3.3,
  };

  int i;

  for (i = 0; i < 10; i++) {
    printf("Endenreço array[%i] -> %p\n", i, (array+i));
  }

  return 0;
}