#include <stdio.h>

void main () {
  int num, sum = 0;
  int i, count = 0;

  scanf("%i", &num);

  for (i = 0; i < 10; i++) {
    scanf("%i", &num);

    if (num % 2 == 0) {
      sum += num;
      ++count;
    }
  }

  printf("Média: %0.2f\n", (float) sum / count);
}