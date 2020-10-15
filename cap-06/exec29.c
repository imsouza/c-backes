#include <stdio.h>

void main () {
  int A[5][5], somaNotPrincipalSecundaria = 0, somaPrincipalOuSecundaria = 0;
  int i, j;

  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      printf("# [%i][%i]: ", i, j);
      scanf("%i", &A[i][j]);
    }
  }

  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      if (j != 5 - 1 - i && i != j) {
        // Soma dos elementos que não pertencem a nenhuma das duas diagonais.
        somaNotPrincipalSecundaria += A[i][j];
      } if (j == 5 - 1 - i || i == j) {
        // Soma dos elementos que pertencem a diagonal principal ou secundária.
        somaPrincipalOuSecundaria += A[i][j];
      }
    }
  }

  printf("[ ");
  for (i = 0; i < 5; i++) {
    putchar('\n');
    for (j = 0; j < 5; j++) {
      printf("%i ", A[i][j]);
    }
  }
  printf("]\n\n");

  printf("(P OU S): %i\n(!P E !S): %i\n", somaPrincipalOuSecundaria, somaNotPrincipalSecundaria);
}