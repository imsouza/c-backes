#include <stdio.h>

#define N 4

void somaParesImpares (int *vetor, int *pares, int *impares) {
  int i;

  *pares   = 0;
  *impares = 0;

  for (i = 0; i < N; i++) {
    if (vetor[i] % 2 == 0) {
      *pares += vetor[i];
    } else {
      *impares += vetor[i];
    }
  }
}


int main () {
  int vetor[N] = {1, 2, 3, 4};
  int pares, impares;

  somaParesImpares(vetor, &pares, &impares);

  printf("Pares: %i, Impares: %i\n", pares, impares);

  return 0;
}