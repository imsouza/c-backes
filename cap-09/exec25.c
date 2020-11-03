#include <stdio.h>
#include <math.h>

float desvioPadrao (float *array, int tam) {
  int i;
  float somatorio = 0;
  float media = 0;
  float dp = 0;

  for (i = 0; i < tam; i++) {
    somatorio += array[i];
  }

  media = somatorio / (float) tam;

  // Cálculo da variância
  for (i = 0; i < tam; i++) {
    dp += pow(array[i] - media, 2);
  }

  dp /= tam - 1;

  return sqrt(dp);
}


int main () {
  int i, tam;

  printf("Tamanho do Array: ");
  scanf("%i", &tam);

  float array[tam];

  for (i = 0; i < tam; i++) {
    printf("#[%i] ", i);
    setbuf(stdin, NULL);
    scanf("%f", &array[i]);
  }

  printf("D = %f\n", desvioPadrao(array, tam));

  return 0;
}