#include <stdio.h>
#include <stdlib.h>

int salvarVetor (int *vetor, int tam) {
  FILE *arq;

  arq = fopen("vetor.txt", "w");

  int i, j;

  for (i = 0; i < tam; i++) {
    fprintf(arq, "%i\n", vetor[i]);
  }

  fclose(arq);
}


int main () {
  int tam = 5;

  int vetor[] = {1, 2, 3, 4, 5};

  salvarVetor(vetor, tam);

  return 0;
}