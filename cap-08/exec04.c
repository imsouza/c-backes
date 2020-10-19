#include <stdio.h>
#include <math.h>

typedef struct {
  int X, Y;
} ponto;


typedef struct {
  ponto pontoSuperiorEsquerdo;
  // O ponto inferior direito não é necessário devido poder 
  // realizar as operações somente com o ponto superior direito.
  // ponto pontoinferiorDireito;
} retangulo;


void main () {
  retangulo ret;

  float area, comprimento, perimetro;

  printf("Ponto Superior Esquerdo (X, Y): ");
  scanf("%i %i", &ret.pontoSuperiorEsquerdo.X, &ret.pontoSuperiorEsquerdo.Y);

  // ret.pontoinferiorDireito.X = ret.pontoSuperiorEsquerdo.X;
  // ret.pontoinferiorDireito.Y = ret.pontoSuperiorEsquerdo.Y;

  area = ret.pontoSuperiorEsquerdo.X * ret.pontoSuperiorEsquerdo.Y;
  comprimento = sqrt(pow(ret.pontoSuperiorEsquerdo.X, 2) + pow(ret.pontoSuperiorEsquerdo.Y, 2));
  perimetro = 2 * (ret.pontoSuperiorEsquerdo.X + ret.pontoSuperiorEsquerdo.Y);

  printf("Área: %0.2f | Diagonal: %.02f | Perimetro: %0.2f\n", area, comprimento, perimetro);
}