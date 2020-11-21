#include <stdio.h>
#include <stdlib.h>

int *alocaVetor (int *A, int *B, int N) {
  int i, j;

  int *C = (int *) calloc (N, sizeof(int));

  if (C == NULL) {
    printf("Erro! Memória insuficiente.\n");
    exit(0);
  }
  
  for (i = 0; i < N; i++) {
    C[i] = A[i] + B[i];
  }

  return C; 
}


int main () {
  int N = 5, i;

  int A[] = {1, 2, 3, 4, 5};
  int B[] = {2, 4, 6, 8, 10};

  int *vetor = alocaVetor(A, B, N);

  for (i = 0; i < N; i++) {
    printf("%i ", vetor[i]);
  }

  free(vetor);
  vetor = NULL;

  putchar('\n');

  return 0;
}