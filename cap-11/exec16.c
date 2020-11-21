#include <stdio.h>
#include <stdlib.h>

int *alocaVetor (int A[3][3], int *B, int N) {
  int i, j;

  int *C = (int *) calloc (N, sizeof(int));

  if (C == NULL) {
    printf("Erro! Memória insuficiente.\n");
    exit(0);
  }

  for (i = 0; i < N; i++) {
    for (j = 0; j < N; j++) {
      C[i] += A[i][j] * B[j];
    }
  }

  return C; 
}


int main () {
  int N = 3, i;

  int A[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
  };

  int B[] = {3, 4, 3};

  int *vetor = alocaVetor(A, B, N);

  for (i = 0; i < N; i++) {
    printf("%i ", vetor[i]);
  }

  free(vetor);
  vetor = NULL;

  putchar('\n');

  return 0;
}