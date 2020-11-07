#include <stdio.h>

float numeroHn (int N) {
  if (N == 1) {
    return 1;
  }

  else {
    return 1.0 / (float) N + numeroHn(N - 1);
  }
}


int main () {
  printf("Hn = %f\n", numeroHn(5));

  return 0;
}