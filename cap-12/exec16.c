#include <stdio.h>
#include <stdlib.h>

int gravarNumeros (int *array) {
  FILE *arq;

  arq = fopen("arq.bin", "wb");

  int i;

  for (i = 0; i < 100; i++) {
    fwrite(&array[i], sizeof(int), 1, arq);
  }

  fclose(arq);
}


int main () {
  int array[100];

  int i;

  for (i = 0; i < 100; i++) {
    setbuf(stdin, NULL);
    scanf("%i", &array[i]);
  }

  gravarNumeros(array);
}