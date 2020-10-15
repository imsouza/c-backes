#include <stdio.h>

void main () {
  char string[100];

  fgets(string, 100, stdin);

  printf("%s\n", string);
}