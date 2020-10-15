#include <stdio.h>

void main () {
  char a;
  int b;
  float c;
  printf("Valores (%%c %%i %%f): ?\b");
  scanf("%c %i %f", &a, &b, &c);

  printf("%c %i %f\n", a, b, c);
  printf("%c\t%i\t%f\n", a, b, c);
  printf("%c\n%i\n%f\n", a, b, c);
}