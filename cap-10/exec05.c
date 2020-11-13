#include <stdio.h>

int main () {
  int array[5];
  int *pArray = array;

  int i, j;

  for (i = 0; i < 5; i++) {
    printf("array[%i]: ", i);
    setbuf(stdin, NULL);
    scanf("%i", (pArray+i));
  }

  for (i = 0; i < 5; i++) {
    printf("array[%i] = %i => %i * 2 = %i\n", i, *(pArray+i), *(pArray+i), *(pArray+i) * 2);
  }

  return 0;
}