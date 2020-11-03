#include <stdio.h>

void matrizTransposta (int array[5][5]) {
  int i, j;
  int transposta[5][5];

  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      transposta[i][j] = array[j][i];
    }
  }

  printf("[ ");
  for (i = 0; i < 5; i++) {
    putchar('\n');
    for (j = 0; j < 5; j++) {
      printf("%i, ", transposta[i][j]);
    }
  }

  printf(" ]\n");
}


int main () {
  int i, j;
  
  int matriz[5][5] = {
    {1,2,3,4,5}, 
    {4,5,6,7,8}, 
    {7,8,9,6,6}, 
    {1,2,3,0,0}, 
    {4,5,6,1,1}
  };

  matrizTransposta(matriz);

  return 0;
}