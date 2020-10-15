#include <stdio.h>

void main () {
  float h;
  char sexo;
  printf("Altura e Sexo (m|f): ");
  scanf("%f %c", &h, &sexo);

  if (sexo == 'M' || sexo == 'm') {
    printf("Peso ideal: %f\n", (72.7 * h) - 58);
  } else if (sexo == 'F' || sexo == 'f') {
    printf("Peso ideal: %f\n", (62.1 * h) - 44.7);
  } else {
    printf("Sexo inválido.\n");
  }
}