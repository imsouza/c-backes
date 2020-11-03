#include <stdio.h>

int somaArray (int *array, int tam) {
  int i, soma = 0;

  for (i = 0; i < tam; i++) {
    soma += array[i];
  }

  return soma;
}


int main () {
  int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  printf("Soma: %i\n", somaArray(array, 10));

  return 0;
}