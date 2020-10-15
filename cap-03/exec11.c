#include <stdio.h>
#include <math.h>

void main () {
  float raio;
  float area;

  printf("Raio: ?\b");
  scanf("%f", &raio);

  area = M_PI * pow(raio, 2);

  printf("Área: %f\n", area);
}