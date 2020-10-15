#include <stdio.h>

void main () {
  int A[10], i;
  int pares = 0;

  for (i = 0; i < 10; i++) {
    printf("\n:%i) ", i);
    scanf("%i", &A[i]);
    if (A[i] % 2 == 0) {
      pares++;
    }
  }

  printf("\nPares: %i\n", pares);
}