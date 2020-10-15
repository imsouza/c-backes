#include <stdio.h>

void main () {
  float celsius, fahrenheit;
  printf("Celcius: °\b");
  scanf("%f", &celsius);

  fahrenheit = celsius * (9.0/5.0) + 32;

  printf("Fahrenheit: °%0.0f\n", fahrenheit);
}