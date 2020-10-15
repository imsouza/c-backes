#include <stdio.h>

void main () {
  int num, i, sum = 0;

  scanf("%i", &num);

  for (i = 1; i <= num; i++) {
    if (num % i == 0) {
      if (i == num) {
        break;
      }
      
      sum += i;
    }
  }

  printf("Soma de todos divisores: %i\n", sum);
}