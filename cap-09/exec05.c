#include <stdio.h>
#include <math.h>

float volumeEsfera (float raio) {
  return (4 * M_PI * pow(raio, 3)) / 3;
}


void main () {
  float raio;

  printf("Raio:\n");
  scanf("%f", &raio);

  printf("V = %f m^3\n", volumeEsfera(raio));
}