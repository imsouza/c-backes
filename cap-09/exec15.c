#include <stdio.h>

int pontos (int n) {
  int i, j;
  int aux = 1;

  for (i = 0; i < n; i++) {
    putchar('\n');
    for (j = 0; j < aux; j++) {
      putchar('!');
    }
    aux++;
  }

  putchar('\n');
}


void main () {
  int n;

  scanf("%i", &n);

  pontos(n);
}