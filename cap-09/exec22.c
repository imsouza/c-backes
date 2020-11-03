#include <stdio.h>
#include <math.h>

// Estrutura para armazenar os valores para o retorno de ambos por referência
struct calculo {
  float volume;
  float area;
};


double areaVolumeEsfera (float *r, struct calculo *res) {
  res->volume = (4 * M_PI * pow(*r, 3)) / 3;
  res->area   = 4 * M_PI * pow(*r, 2);
}


int main () {
  struct calculo res;

  float raio = 44;

  areaVolumeEsfera(&raio, &res);

  printf("Volume: %lf, Área: %lf\n", res.volume, res.area);

  return 0;
}