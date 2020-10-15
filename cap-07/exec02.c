#include <stdio.h>

void main () {
  char string[100];
  int i;

  fgets(string, 100, stdin);

  for (i = 0; i < 4; i++) {
    printf("(%c) ", string[i]);
  }
  putchar('\n');
}