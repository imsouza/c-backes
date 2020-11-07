#include <stdio.h>
#include <math.h>

void exibeRaizes (int flag, double *x1, double *x2);

int baskara (int *a, int *b, int *c, double *x1, double *x2) {
  if (*a != 0) {
    double delta = pow(*b, 2) - 4 * (*a) * (*c);
    if (delta == 0) {
       *x1 = -*b / 2 * (*a);
       exibeRaizes(0, x1, NULL);
    }
    else if (delta > 0) {
      *x1 = (-*b + sqrt(delta)) / 2 * (*a);
      *x2 = (-*b - sqrt(delta)) / 2 * (*a);
      exibeRaizes(1, x1, x2);
    }
  } else {
    printf("Não é equação do segundo grau.\n");
    return -1;
  }
}


void exibeRaizes (int flag, double *x1, double *x2) {
  if (flag == 1) {
    printf("S = {%0.2lf;%0.2lf}\n", *x1, *x2);
  } else {
    printf("S = {%0.2lf}\n", *x1);
  }
}


int main () {
  int a = 1, b = -10, c = 25;
  double x1, x2;

  baskara(&a, &b, &c, &x1, &x2);

  return 0;
}