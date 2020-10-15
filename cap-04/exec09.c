#include <stdio.h>

void main () {
  float altura, peso;
  printf(">>> Altura | Peso (kg): ");
  scanf("%f %f", &altura, &peso);

  if (altura < 1.20) {
    if (peso < 60)
      printf("A\n");
    else if (peso >= 60 && peso <= 90)
      printf("D\n");
    else {
      printf("G\n");
    }
  } 

  else if (altura >= 1.20 && altura <= 1.70) {
    if (peso < 60)
      printf("B\n");
    else if (peso >= 60 && peso <= 90)
      printf("E\n");
    else
      printf("H\n");
  } 

  else {
    if (peso < 60)
      printf("C\n");
    else if (peso >= 60 && peso <= 90)
      printf("F\n");
    else
      printf("I\n");
  }  
}