#include <stdio.h>

int main () {
  float array[3][3] = {
    {1.5, 2.6, 3.3}, 
    {4.6, 1.9, 2.8}, 
    {1.1, 2.8, 4.4}
  };

  int i, j;

  for (i = 0; i < 9; i++) {
    printf("Endenreço array[%i] -> %p\n", i, (array+i));
  }

  return 0;
}