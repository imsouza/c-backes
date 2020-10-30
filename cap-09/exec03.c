#include <stdio.h>

float celsius (float f) {
  return (f - 32.0) * (5.0 / 9.0);
}


void main () {
  float fahrenheit;

  scanf("%f", &fahrenheit);

  printf("F -> C: %f\n", celsius(fahrenheit));
}