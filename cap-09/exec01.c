#include <stdio.h>

int maiorNum (int n1, int n2) {
  return n1 > n2 ? n1 : n2;
}


void main () {
  int n1, n2;

  scanf("%i %i", &n1, &n2);

  printf("Maior: %i\n", maiorNum(n1 ,n2));
}