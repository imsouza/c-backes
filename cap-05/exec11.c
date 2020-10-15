#include <stdio.h>

void main () {
  int num, i;

  scanf("%i", &num);

  for (i = 1; i <= num; i++) {
    if (num % i == 0) {
      if (i == num) {
        printf("%i.\n", i);
        break;
      }
      printf("%i, ", i);
    }
  }
}