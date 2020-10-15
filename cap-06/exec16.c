#include <stdio.h>

void main () {
  int A[3][3], menor = 0, posX = 0, posY = 0;
  int i, j;

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf("Valor [%i][%i]: ", i, j);
      scanf("%i", &A[i][j]);
    }
  }


  menor = A[0][0];


  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      if (A[i][j] < menor) {
        menor = A[i][j];
        posX = i;
        posY = j;
      }
    }
  }

  printf("Menor: %i, X: %i, Y: %i\n", menor, posX, posY);
}
