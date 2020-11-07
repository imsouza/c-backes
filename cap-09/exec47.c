#include <stdio.h>

void exibeInverso (int N);

int inverso (int N) {
  if (N == 0) {
    return N;
  } 

  else {
    exibeInverso(N);
    N = N/10;
    return inverso(N);
  }
}


void exibeInverso (int N) {
  printf("%i", N % 10);
}


int main () {
  inverso(32154);
  putchar('\n');

  return 0;
}