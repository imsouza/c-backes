#include <stdio.h>
#include <string.h>

char maiuscula (char *string) {
  int i;

  for (i = 0; string[i] != '\0'; i++) {
    if (string[i] >= 97 && string[i] <= 122) {
      string[i] -= 32;
    }
  }

  return *string;
}


int main () {
  char string[100];

  fgets(string, 100, stdin);

  maiuscula(string);

  printf("%s", string);

  return 0;
}