#include <stdio.h>
#include <math.h>

float volumeCilindro (float altura, float raio) {
  return M_PI * pow(raio, 2) * altura;
}


void main () {
  float altura, raio;

  printf("Altura | Raio\n");
  scanf("%f %f", &altura, &raio);

  printf("V = %f m^3\n", volumeCilindro(altura, raio));
}