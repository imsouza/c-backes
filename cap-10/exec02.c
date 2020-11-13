#include <stdio.h>

int main () {
  int a, b;

  scanf("%i %i", &a, &b);

  int *pA = &a; int *pB = &b;

  (*pA > *pB) ? printf("%i\n", *pA) : printf("%i\n", *pB);

  return 0;
}