#include <stdio.h>

void main () {
  int i, n;
  float hn = 0;

  scanf("%i", &n);

  for (i = 2; i <= n; i++) {
    hn = hn + 1.0/i;
  }

  hn++;

  printf("Hn = %f\n", hn);
}