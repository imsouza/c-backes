#include <stdio.h>

// Estrutura para armazenar os valores para o retorno de ambos por referência
struct array {
  int parteInteira;
  float parteFracionaria;
};


float intEFloat (float *n, struct array *v) {
  v->parteInteira = (int) *n;
  v->parteFracionaria = *n;
}


int main () {
  struct array v;

  float n = 5.555;

  intEFloat(&n, &v);

  printf("%i, %f\n", v.parteInteira, v.parteFracionaria);

  return 0;
}