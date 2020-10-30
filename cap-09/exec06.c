#include <stdio.h>
#include <math.h>

float imc (float peso, float altura) {
  return peso / pow(altura, 2);
}


void main () {
  float peso, altura;

  printf("Peso (kg) | Altura (m)\n");
  scanf("%f %f", &peso, &altura);

  printf("IMC = %f\n", imc(peso, altura));
}