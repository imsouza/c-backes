#include <stdio.h>
#include <stdlib.h>

int main () {
  printf("char: %i byte\n", (int) sizeof(char));
  printf("int: %i bytes\n", (int) sizeof(int));
  printf("flaot: %i bytes\n", (int) sizeof(float));
  printf("double: %i bytes\n", (int) sizeof(double));
  return 0;
}