#include <stdio.h>
#include <stdlib.h>

int main () {
  int nLinhas, nColunas, i, j;
  int **p;

  printf("Linhas x Colunas: ");
  scanf("%i %i", &nLinhas, &nColunas);

  // Aloca linhas
  p = (int **) malloc (nLinhas * sizeof(int *));

  for (i = 0; i < nLinhas; i++) {
    // Aloca colunas
    p[i] = (int *) malloc (nColunas * sizeof(int));
    // Lê a matriz
    for (j = 0; j < nColunas; j++) {
      scanf("%i", &p[i][j]);
    }
  }

  // Exibe a matriz
  for (i = 0; i < nLinhas; i++) {
    putchar('\n');
    for (j = 0; j < nColunas; j++) {
      printf(" %i ", p[i][j]);
    }
  }

  // Libera a memória das colunas
  for (i = 0; i < nColunas; i++) {
    free(p[i]);
  }

  // Libera a memória das linhas
  free(p);
  p = NULL;

  return 0;
}