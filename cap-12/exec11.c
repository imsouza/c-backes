#include <stdio.h>
#include <stdlib.h>

#define TAM 2

int salvarMatriz (int matriz[][TAM]) {
  FILE *arq;

  arq = fopen("matriz.txt", "w");

  int i, j;

  for (i = 0; i < TAM; i++) {
    for (j = 0; j < TAM; j++) {
      fprintf(arq, "%i ", matriz[i][j]);
    }

    fputc('\n', arq);
  }

  fclose(arq);
}


int main () {
  int matriz[TAM][TAM] = {
    {1, 2},
    {2, 3}
  };

  salvarMatriz(matriz);

  return 0;
}