#include <stdio.h>

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


long double euler (int N) {
  int i;
  long double S = 0;

  for (i = 0; i < N; i++) {
    S = S + (1.0 / fatorial(i));
  }

  return S;
}


void main () {
  int N;

  scanf("%i", &N);

  printf("e = %Lf\n", euler(N));
}