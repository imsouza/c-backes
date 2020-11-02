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


void main () {
  int n;

  scanf("%i", &n);

  printf("%i\n", fatorial(n));
}