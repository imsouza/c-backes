#include <stdio.h>

float mediaDasNotas (float *array, int tam) {
  int i;
  float soma = 0;

  for (i = 0; i < tam; i++) {
    soma += array[i];
  }

  return soma / 10.0;
}


int main () {
  float array[10] = {1.5, 2.33, 7.5, 4.20, 5.72, 6, 7, 8.4, 9.2, 10};

  printf("Média: %0.2f\n", mediaDasNotas(array, 10));

  return 0;
}