#include <stdio.h>

int pontos (int n) {
  int i, j;
  int aux = 1;

  for (i = 0; i < n; i++) {
    putchar('\n');
    for (j = 0; j < aux; j++) {
      if (aux == n) {break; }
      putchar('*');
    }
    aux++;
  }

  for (i = 0; i <= n; i++) {
    for (j = 0; j < aux - 1; j++) {
      putchar('*');
    }
    putchar('\n');
    aux--;
  }
}


void main () {
  int n;

  scanf("%i", &n);

  pontos(n);
}