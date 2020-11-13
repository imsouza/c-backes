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
    if (*(pArray+i) % 2 == 0) {
      printf("%i -> %p\n", *(pArray+i), (pArray+i));
    }
  }

  return 0;
}