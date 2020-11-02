#include <stdio.h>
#include <math.h>

float serieS (int n) {
  int i;
  float S = 0;
  int num = 2, den = 4;

  for (i = 0; i < n; i++) {
    // S = 2 / 4
    S += num / den;

    // S = 5 / 5 + 10 / 6 + ...+ 15 / 7
    if (num % 5 == 0) {
      S += num / den;
    }

    num++; den++;
  }

  // n ^ 2 + 1 /  + 3
  S += pow(n, 2) + 1 / n + 3;

  return S;
}


void main () {
  int n;

  scanf("%i", &n);

  printf("S = %f\n", serieS(n));
}