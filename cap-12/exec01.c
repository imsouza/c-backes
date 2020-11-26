#include <stdio.h>
#include <stdlib.h>

void lerNomeArquivo (char *arquivoEntrada) {
  printf("Informe o nome do arquivo de entrada: ");
  setbuf(stdin, NULL);
  scanf("%s", arquivoEntrada);
}


int main () {
  FILE *arq;

  char arquivoEntrada[20];
  lerNomeArquivo(arquivoEntrada);

  arq = fopen(arquivoEntrada, "r");

  if (arq == NULL) {
    perror("Erro");
    exit(1);
  }

  char c;

  int linhas = 0;

  // Lê cada caractere até chegar ao final do arquivo EOF
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