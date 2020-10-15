#include <stdio.h>
#include <string.h>

void main () {
  char string[100];
  char string2[100];
  int i, j;

  fgets(string, 100, stdin);

  for (i = strlen(string) - 1, j = 0; i >= 0; i--, j++) {
    string2[j] = string[i];
  }

  strcpy(string, string2);

  printf("%s\n", string);
}