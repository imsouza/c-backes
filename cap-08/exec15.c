#include <stdio.h>

typedef union {
  short int x;
  float y;
} tipo;

void main () {
  tipo t;

  t.y = 42.22;

  printf("%i\n", t.x);
}