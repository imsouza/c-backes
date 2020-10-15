#include <stdio.h>
#include <math.h>

void main () {
  int num;
  scanf("%i", &num);

  if (num >= 0) {
    printf("%i^2 = %0.2f\n", num, pow(num, 2));
    printf("sqrt(%i) = %f\n", num, sqrt(num));
  }
}