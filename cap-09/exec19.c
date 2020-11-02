#include <stdio.h>
#include <math.h>


int fatorial (int n) {
  int i, f = 1;

  if (n == 0 || n == 1) {
    return 1;
  }

  for (i = 2; i <= n; i++) {
    f = f * i;
  }

  return f;
}


double serieDeTaylor (double ang) {
  int n;
  double cos = 0.0;

  for (n = 0.0; n < 5.0; n++) {
    cos += pow(-1.0, n) * pow(ang, 2.0 * n) / fatorial(2.0 * n);
  }

  return cos;
}


void main () {
  double ang;

  scanf("%lf", &ang);

  printf("cos = %lf\n", serieDeTaylor(ang));
}