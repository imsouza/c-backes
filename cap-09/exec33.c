#include <stdio.h>

#define N 4

void exibeVetorOrdenado(int *vetor);

void ordenarVetor(int *vetor) {
  int tmp = 0;
  int i, swap;

  // Bubble sort
  do {
    swap = 0;
    for (i = 0; i < N-1; i++) {
      if (vetor[i] > vetor[i + 1]) {
        tmp = vetor[i];
        vetor[i] = vetor[i + 1];
        vetor[i + 1] = tmp;
        swap = 1;
      }
    }
  } while (swap);


  exibeVetorOrdenado(vetor);
}


void exibeVetorOrdenado(int *vetor) {
  int i;

  printf("[ ");
  for (i = 0; i < N; i++) {
    printf("%i ", vetor[i]);
  }
  printf("]\n");
}


int main () {
  int vetor[N] = {2, 3, 6, -1};

  ordenarVetor(vetor);

  return 0;
}