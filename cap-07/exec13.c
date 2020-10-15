#include <stdio.h>
#include <string.h>

void main () {
  char S[100];

  unsigned int val1, val2, i;
  
  gets(S);

  printf("Valores: ");
  scanf("%i %i", &val1, &val2);

  for (val1; val1 <= val2; val1++) {
    printf("%c", S[val1]);
  }

  putchar('\n');
}