#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main () {
  FILE *arq1, *arq2;

  arq1 = fopen("file.txt", "r");
  arq2 = fopen("file2.txt", "w");

  if (arq1 == NULL || arq2 == NULL) {
    perror("Erro");
    exit(1);
  }

  char c;

  // Lê cada caractere do arquivo até chegar no EOF
  while ((c = fgetc(arq1)) != EOF) {
    // Escreve o caractere em caixa alta no arq2
    fputc(toupper(c), arq2);
  }

  fclose(arq1);
  fclose(arq2);

  return 0;
}