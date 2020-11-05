#include <stdio.h>

#define N 7

void maiorMenor(int *vetor, int *maior, int *repetidos) {
  int i, j;

  *maior = vetor[0];
  *repetidos = 0;

  for (i = 0; i < N; i++) {
    if (vetor[i] > *maior) {
      *maior = vetor[i];
    }
  }

  for (i = 0; i < N; i++) {
    if (*maior == vetor[i]) {
      (*repetidos)++;
    }
  }
}


int main () {
  int vetor[N] = {-1, 600, 2, 44, 3, 55, 600};
  int maior, repetidos;

  maiorMenor(vetor, &maior, &repetidos);

  printf("Maior: %i, Ocorreu: %i vez(es)\n", maior, repetidos);

  return 0;
}