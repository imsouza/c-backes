#include <stdio.h>
#include <stdlib.h>

#define LIN_A 3
#define COL_A 3

#define LIN_B 3
#define COL_B 2

int **produtoMatrizes (int A[LIN_A][COL_A], int B[LIN_B][COL_B]) {
  int i, j, k;

  int **C = (int **) calloc (LIN_A, sizeof(int*));

  if (C == NULL) {
    printf("Erro! Memória insuficiente.\n");
    exit(0);
  }

  if (COL_A != LIN_B) {
    printf("Erro! Dimensões incorretas.\n");
    exit(0);
  } else {
    for (i = 0; i < LIN_A; i++) {
      C[i] = (int *) calloc (LIN_A, sizeof(int));
      for (j = 0; j < COL_B; j++) {
        for (k = 0; k < LIN_B; k++) {
          C[i][j] += A[i][k] * B[k][j];
        }
      }
    }

    return C;
  }

  return 0; 
}


int main () {
  int i, j;

  int A[LIN_A][COL_A] = {
    {0, 1, 3},
    {4, 1, 2},
    {7, 1, 9}
  };

  int B[LIN_B][COL_B] = {
    {2, 2}, 
    {2, 1},
    {3, 4},
  };

  int **matriz = produtoMatrizes(A, B);

  for (i = 0; i < LIN_A; i++) {
    putchar('\n');
    for (j = 0; j < COL_B; j++) {
      printf("%i ", matriz[i][j]);
    }
  }

  // Liberar memória das colunas
  for (i = 0; i < LIN_A; i++) {
    free(matriz[i]);
  }

  // Liberar memória das linhas
  free(matriz);
  matriz = NULL;

  putchar('\n');

  return 0;
}