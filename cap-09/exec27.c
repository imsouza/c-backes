#include <stdio.h>

int somaMatriz (int array[10][10]) {
  int i, j;
  int soma = 0;

  for (i = 0; i < 10; i++) {
    for (j = 0; j < 10; j++) {
      soma += array[j][i];
    }
  }

  return soma;
}


int main () {
  int i, j;

  int matriz[10][10] = {
    {1,2,3,4,5,1,2,3,4,5}, 
    {4,5,6,7,8,4,5,6,7,8}, 
    {4,5,6,7,8,4,5,6,7,8}, 
    {4,5,6,7,8,4,5,6,7,8}, 
    {4,5,6,7,8,4,5,6,7,8},
    {4,5,6,7,8,4,5,6,7,8}, 
    {4,5,6,7,8,4,5,6,7,8}, 
    {4,5,6,7,8,4,5,6,7,8}, 
    {4,5,6,7,8,4,5,6,7,8}, 
    {4,5,6,7,8,4,5,6,7,8},
  };

  printf("Soma: %i\n", somaMatriz(matriz));

  return 0;
}