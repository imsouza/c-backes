#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void lerNomeArquivo (char *arquivoEntrada) {
  printf("Informe o nome do arquivo de entrada: ");
  setbuf(stdin, NULL);
  scanf("%s", arquivoEntrada);
}


int numeroPalavras (char *nomeArquivo) {
  FILE *arq;

  arq = fopen(nomeArquivo, "r");

  char string[150];

  fgets(string, 150, arq);

  int contagem = 0;
  int i, aux = 0;

  for (i = 0; string[i] != '\0'; i++) {
    if (string[i] == ' ') {
      contagem++;
    } else if (string[i] != '\0') {
      aux++;
    }
  }

  if (aux >= 1) {
    contagem++;
  }

  fclose(arq);

  return contagem;
}


int main () {
  char nomeArquivo[20];
  
  lerNomeArquivo(nomeArquivo);

  int num = numeroPalavras(nomeArquivo);

  printf("%i\n", num);

  return 0;
}