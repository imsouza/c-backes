#include <stdio.h>
#include <math.h>

typedef struct {
  int x1, y1, x2, y2;
} coordenadas;


void main () {
  coordenadas coord;

  float d = 0.0;

  printf ("(X1, Y1) (X2, Y2): ");
  scanf("%i %i %i %i", &coord.x1, &coord.y1, &coord.x2, &coord.y2);


  d = sqrt(pow(coord.x2 - coord.x1, 2) + pow(coord.y2 - coord.y1, 2));

  printf("D = %0.1f\n", d);

}