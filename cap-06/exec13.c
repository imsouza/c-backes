#include <stdio.h>

void main () {
  int A[10], aux1 = 0, aux2 = 0;
  int i;

  for (i = 0; i < 10; i++) {
    printf("Num #%i: ", i);
    scanf("%i", &A[i]);

    if (A[i-1] == A[i]) {
      printf("Número já digitado, digite outro: ");
      scanf("%i", &A[i]);
    }
  }

  printf("[\n");
  for (i = 0; i < 10; i++) {
    printf("%i\n", A[i]);
  }
  printf("]\n");
}
