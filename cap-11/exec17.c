#include <stdio.h>
#include <stdlib.h>

int *somarColunas (int A[3][3], int N) {
  int i, j, k = 0;

  int *B = (int *) calloc (N, sizeof(int));

  if (B == NULL) {
    printf("Erro! Memória insuficiente.\n");
    exit(0);
  }

  for (i = 0; i < N; i++) {
    for (j = 0; j < N; j++) {
      B[k] += A[j][k];
    }

    if (k == N) { break; }
    if (j == N) { k++; j = 0; }
  }

  return B; 
}


int main () {
  int N = 3, i;

  int A[3][3] = {
    {0, 1, 3},
    {4, 1, 2},
    {7, 1, 9}
  };

  int *vetor = somarColunas(A, N);

  for (i = 0; i < N; i++) {
    printf("%i ", vetor[i]);
  }

  free(vetor);
  vetor = NULL;

  putchar('\n');

  return 0;
}