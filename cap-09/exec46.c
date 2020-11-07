#include <stdio.h>

int fib (int N) {
  if (N == 0 || N == 1) {
    return N;
  } 

  else {
    return fib(N-1) + fib(N-2);
  }
}


int main () {
  printf("%i\n", fib(10));

  return 0;
}