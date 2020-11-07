#include <stdio.h>
#include <string.h>

int ehPalindromo (char *string) {
  int i, j, len = 0, count = 0;

  len = strlen(string) - 1;

  for (i = 0; i < strlen(string) - 1; i++) {
    if (string[i] == string[len - 1]) {
      count++;
    }

    len--;
  }

  if (count == strlen(string) - 1) { return 1; } else { return 0; }
}


int main () {
  char string[100];

  fgets(string, 100, stdin);

  printf("%i\n", ehPalindromo(string));

  return 0;
}