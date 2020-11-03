#include <stdio.h>

struct somaDaDiagonal {
  int primaria;
  int secundaria;
};


int somaDiagonais (int array[6][6], struct somaDaDiagonal *diagonal) {
  int i, j;
  int somaPrimaria = 0;
  int somaSecundaria = 0;

  for (i = 0; i < 6; i++) {
    for (j = 0; j < 6; j++) {
      if (i == j) {
        somaPrimaria += array[i][j];
      } if (j == 6 - 1 - i) {
        somaSecundaria += array[i][j];
      }
    }
  }

  diagonal->primaria   = somaPrimaria;
  diagonal->secundaria = somaSecundaria;
}


int main () {
  struct somaDaDiagonal diagonal;

  int matriz[6][6] = {
    {1,2,3,4,5,1}, 
    {4,5,6,7,8,4}, 
    {4,5,6,2,8,4}, 
    {4,5,0,7,8,4}, 
    {4,5,6,7,8,4},
    {4,5,6,7,8,4}, 
  };

  somaDiagonais(matriz, &diagonal);

  printf("Somas:\nDiagonal Principal: %i\nDiagonal Secundária: %i\n", diagonal.primaria, diagonal.secundaria);

  return 0;
}