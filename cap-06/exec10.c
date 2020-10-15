#include <stdio.h>

void main () {
  int A[100], i = 0, count = 0;

  while (count < 100) {
    if (i % 7 != 0) {
      A[count] = i;
      count++;
    }

    i++;
  }

  printf("[\n");
  for (i = 0; i < 100; i++) {
    printf("%i\n", A[i]);
  }
  printf("]\n");
}
