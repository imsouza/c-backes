#include <stdio.h>

#define N 7

void maiorMenor(int *vetor, int *maior, int *menor) {
  int i;

  *maior = vetor[0];
  *menor = vetor[0]; 

  for (i = 0; i < N; i++) {
    if (vetor[i] > *maior) {
      *maior = vetor[i];
    } if (vetor[i] < *menor) {
      *menor = vetor[i];
    }
  }
}


int main () {
  int vetor[N] = {1, 2, 3, 4, -345, 2, 999};
  int maior, menor;

  maiorMenor(vetor, &maior, &menor);

  printf("Maior: %i, Menor: %i\n", maior, menor);

  return 0;
}