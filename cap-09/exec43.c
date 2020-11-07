#include <stdio.h>

// x^y
float calcularPot (int x, int y) {
  if (y == 0) {
    return 1;
  } 

  else {
    return x * calcularPot(x, y-1);
  }
}


int main () {
  printf("%0.4f\n", calcularPot(3, 2));

  return 0;
}