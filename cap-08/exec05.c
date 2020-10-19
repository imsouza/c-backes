#include <stdio.h>

typedef struct {
  int X, Y;
} ponto;


typedef struct {
  int X, Y;
  ponto p;
} retangulo;


void main () {
  retangulo ret;

  float area, comprimento, perimetro;

  printf("Retangulo (X, Y): ");
  scanf("%i %i", &ret.X, &ret.Y);

  printf("Ponto (X, Y): ");
  scanf("%i %i", &ret.p.X, &ret.p.Y);

  if (ret.X == ret.p.X && ret.Y == ret.p.Y) {
    printf("Está dentro do retângulo.\n");
  } else {
    printf("Não está dentro do retângulo.\n");
  }
}