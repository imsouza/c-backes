#include <stdio.h>

float media (float n1, float n2, float n3, char l) {
  if (l == 'A') {
    return (n1 + n2 + n3) / 3;
  } else if (l == 'P') {
    return ((5 * n1) + (3 * n2) + (2 * n3)) / 10;
  } else {
    return -1;
  }
}


void main () {
  float n1, n2, n3;
  char l;

  scanf("%f %f %f %c", &n1, &n2, &n3, &l);

  printf("%f\n",media(n1, n2, n3, l));
}