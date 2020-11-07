#include <stdio.h>
#include <math.h>

float serieS (float N, int i, float S, float num, float den) {
  if (den-1 == N) {
    return 2 + S + (1 + pow(N+0.09, 2) / N-0.9);
  }

  else {
    return serieS(N, i+1, S+(num / den), num+5, den+1);
  }
}


int main () {
  int i = 0;
  float S = 0, num = 5.0, den = 2.0;
  printf("S = %f\n", serieS(5.0, i, S, num, den));

  return 0;
}