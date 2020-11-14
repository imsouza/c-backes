#include <stdio.h>

void exibeVetor (int *vetor, int tam) {
  int i;

  printf("[ ");
  for (i = 0; i < tam; i++) {
    printf("%i ", *(vetor++));
  }
  printf("]\n");
}


int main () {
  int vetor[5] = {1, 2, 3, 4, 5};

  exibeVetor(vetor, 5);

  return 0;
}