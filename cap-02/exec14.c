#include <stdio.h>

void main () {
  char a, b, c;
  printf("Caracteres (? ? ?): ?\b");
  scanf("%c %c %c", &a, &b, &c);
  printf("%c\n%c\n%c\n", a, b, c);
}