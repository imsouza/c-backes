#include <stdio.h>

void main () {
  int A[4][4], maior = 0, posX = 0, posY = 0;
  int i, j;

  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      printf("Valor [%i][%i]: ", i, j);
      scanf("%i", &A[i][j]);
    }
  }


  maior = A[0][0];


  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      if (A[i][j] > maior) {
        maior = A[i][j];
        posX = i;
        posY = j;
      }
    }
  }

  printf("Maior: %i, X: %i, Y: %i\n", maior, posX, posY);
}
