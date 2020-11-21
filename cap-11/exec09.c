#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *inverteString (char *string) {
  int i, j;
  char *novaString = (char *) malloc ((strlen(string) - 1) * sizeof(char));

  if (novaString == NULL) {
    printf("Erro! Memória insuficiente.\n");
    exit(0);
  }

  for (i = strlen(string) - 1, j = 0; i >= 0; i--, j++) {
    novaString[j] = string[i];
  }

  return novaString;
}


int main () {
  char string[100];

  fgets(string, 100, stdin);

  char *stringInversa = inverteString(string);
  printf("%s\n", stringInversa);

  free(stringInversa);
  stringInversa = NULL;

  return 0;
}