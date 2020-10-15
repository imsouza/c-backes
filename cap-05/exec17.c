#include <stdio.h>

void main () {
  int i, n, j, elem=1;

  scanf("%i", &n);

  for (i = 1; i <= n; i++) {
    for (j = 1; j <= i; ++j) {
      printf("%i ", elem);
      ++elem;
      if (elem == n) {
        printf("%i ", elem);
        break;
      }
    }

    putchar('\n');

    if (elem == n) {
      break;
    }
  }
}