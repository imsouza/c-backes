#include <stdio.h>

void main () {
  float km_h, ms;
  printf("Km/h: ?\b");
  scanf("%f", &km_h);

  printf("m/s: %f\n", km_h/3.6);
}