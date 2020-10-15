#include <stdio.h>
#include <math.h>

void main () {
  float desvioPadrao, valores[10];
  float soma = 0, media = 0, desvioMedioQuadrado = 0;
  int i, j;

  for (i = 0; i < 10; i++) {
    printf("#%i: ", i);
    scanf("%f", &valores[i]);
    soma += valores[i];
  }

  media = soma / 10;

  for (i = 0; i < 10; i++) {
    desvioMedioQuadrado += pow(valores[i] - media, 2);
  }

  desvioPadrao = sqrt(desvioMedioQuadrado / 10.0);

  printf("D = %f\n", desvioPadrao);
}
