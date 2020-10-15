#include <stdio.h>

void main () {
  unsigned int num;
  int i;

  scanf("%i", &num);

  for (i = 0; i <=num; i++) {
    printf("%i\n", i);
  }
}