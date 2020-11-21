#include <stdio.h>
#include <stdlib.h>

int **alocaMatriz (int N) {
  int i, j;

  int **p = (int **) calloc (N, sizeof(int *));
  
  if (p == NULL) {
    printf("Erro! Memória insuficiente.\n");
    exit(0);
  }

  for (i = 0; i < N; i++) {
    p[i] = (int *) calloc (N, sizeof(int));
    for (j = 0; j < N; j++) {
      if (i == j) {
        p[i][j] = 1;
      }
    }
  }

  return p; 
}


int main () {
  int N, i, j;

  scanf("%i", &N);

  int **matriz = alocaMatriz(N);

  for (i = 0; i < N; i++) {
    putchar('\n');
    for (j = 0; j < N; j++) {
      printf("%i ", matriz[i][j]);
    }
  }

  // Liberar memória das colunas
  for (i = 0; i < N; i++) {
    free(matriz[i]);
  }

  // Liberar memória das linhas
  free(matriz);
  matriz = NULL;

  putchar('\n');

  return 0;
}