#include <stdio.h>

int fatorial (int N) {
  if (N == 0 || N == 1) {
    return 1;
  } 

  else {
    return N * fatorial(N-1);
  }
}


int main () {
  printf("%i\n", fatorial(5));

  return 0;
}