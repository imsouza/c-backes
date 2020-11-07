#include <stdio.h>

// x*y
float calcularMul (int x, int y) {
  if (y == 0) {
    return 0;
  } 

  else {
    return x + calcularMul(x, y-1);
  }
}


int main () {
  printf("%0.4f\n", calcularMul(2, 4));

  return 0;
}