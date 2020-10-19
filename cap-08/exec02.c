#include <stdio.h>
#include <math.h>

typedef struct {
  int x, y;
} coordenadas;


void main () {
  coordenadas coord;

  float d = 0.0;

  printf ("(X, Y): ");
  scanf("%i %i", &coord.x, &coord.y);


  d = sqrt(pow(0 - coord.x, 2) + pow(0 - coord.y, 2));

  printf("D = %0.1f\n", d);

}