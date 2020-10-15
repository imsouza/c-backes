#include <stdio.h>
#include <string.h>

void main () {
  char string[100];
  int i;

  fgets(string, 100, stdin);

  for (i = 0; string[i] != '\0'; i++) {
    if (string[i] >= 65 && string[i] <= 90) {
      string[i] = string[i] + 32;
    }
  }

  printf("%s\n", string);
}