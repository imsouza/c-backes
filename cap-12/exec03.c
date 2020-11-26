#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void lerNomesArquivos (char *arquivoEntrada, char *arquivoSaida) {
  printf("Informe o nome do arquivo de entrada: ");
  setbuf(stdin, NULL);
  scanf("%s", arquivoEntrada);

  printf("Informe o nome do arquivo de saída: ");
  setbuf(stdin, NULL);
  scanf("%s", arquivoSaida);
}


int main () {
  FILE *arq1, *arq2;

  char arquivoEntrada[20];
  char arquivoSaida[20];

  lerNomesArquivos(arquivoEntrada, arquivoSaida);

  arq1 = fopen(arquivoEntrada, "r");
  arq2 = fopen(arquivoSaida, "w");

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