#include <stdio.h>

void main () {
  float A[10], somaPos = 0;
  int negativos = 0, i;

  for (i = 0; i < 10; i++) {
    printf("\n:%i) ", i);
    scanf("%f", &A[i]);

    if (A[i] < 0) {
      negativos++;
    } else {
      somaPos += A[i];
    }
  }

  printf("Negativos: %i\n Soma Pos.: %0.4f\n", negativos, somaPos);
}
