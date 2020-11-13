#include <stdio.h>

int main () {
  int a = 5, b = 8;

  int *pA = &a; int *pB = &b;

  (pA > pB) ? printf("%p\n", pA) : printf("%p\n", pB);

  return 0;
}