#include <stdio.h>
#include <math.h>

float nCubos (int N) {
  if (N == 0) {
    return 0;
  } else {
    return (nCubos(N-1) + pow(N, 3));
  }
}


int main () {
  printf("N Cubos: %f\n", nCubos(5));
  return 0;
}