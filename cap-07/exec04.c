#include <stdio.h>
#include <string.h>

void main () {
  char string[100];
  int i;

  fgets(string, 100, stdin);

  for (i = strlen(string) - 1; i >= 0; i--) {
    printf("%c", string[i]);
  }
  
  putchar('\n');
}