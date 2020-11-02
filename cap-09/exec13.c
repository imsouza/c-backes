#include <stdio.h>

int somatorio (int n) {
  int i;
  int somatorio = 0;

  for (i = 1; i <= n; i++) {
    somatorio += i;
  }

  return somatorio;
}


void main () {
  int n;

  scanf("%i", &n);

  printf("%i\n", somatorio(n));
}