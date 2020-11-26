#include <stdio.h>
#include <stdlib.h>

int main () {
  FILE *arq;

  arq = fopen("file.txt", "r");

  if (arq == NULL) {
    perror("Erro");
    exit(1);
  }

  char c;

  int linhas = 0;

  while (fread(&c, sizeof(char), 1, arq)) {
    if (c == '\n') {
      linhas++;
    }
  }

  linhas++;

  printf("Linhas: %i\n", linhas);

  fclose(arq);

  return 0;
}