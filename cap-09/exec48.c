#include <stdio.h>

int decParaBin (int N) {
  if (N / 2 != 0) {
    decParaBin(N / 2);
  }

  printf("%i", N % 2);
}


int main () {
  decParaBin(11);
  putchar('\n');

  return 0;
}