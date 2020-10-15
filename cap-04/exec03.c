#include <stdio.h>

void main () {
  int num;
  scanf("%i", &num);

  if (num % 2 == 0) {
    printf("É par.\n");
  } else {
    printf("É impar\n");
  }
}