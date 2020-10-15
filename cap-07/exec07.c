#include <stdio.h>
#include <string.h>

void main () {
  char string[100];
  int i, j, len = 0, count = 0;

  fgets(string, 100, stdin);

  len = strlen(string) - 1;

  for (i = 0; i < strlen(string) - 1; i++) {
    if (string[i] == string[len - 1]) {
      count++;
    }

    len--;
  }

  count == strlen(string) - 1 ? puts("É palindromo\n") : puts("Não é palindromo\n");
}