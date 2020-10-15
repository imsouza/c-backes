#include <stdio.h>

void main () {
  unsigned int num;

  scanf("%i", &num);

  while (num != 0) {
    printf("%i\n", num);
    num--;
  }

  printf("0\n");
}