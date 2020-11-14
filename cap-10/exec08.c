#include <stdio.h>

void exibeVetor (int *vetor, int tam);

int preencheVetor (int *vetor, int num, int tam) {
  int i, j;

  for (i = 0; i < tam; i++) {
    *(vetor+i) = num;
  }

  exibeVetor (vetor, tam);
}


void exibeVetor (int *vetor, int tam) {
  int i;

  printf("[ ");
  for (i = 0; i < tam; i++) {
    printf("%i ", *(vetor+i));
  }
  printf("]\n");
}


int main () {
  int vetor[3] = {1, 2, 3};

  int num = 5;

  preencheVetor(vetor, 5, 3);

  return 0;
}