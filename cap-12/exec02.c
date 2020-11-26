#include <stdio.h>
#include <stdlib.h>

// Definição de tamanho dos arquivos
#define TAM 10

int main () {
  FILE *arq1, *arq2, *arq3;

  arq1 = fopen("file.txt", "r");
  arq2 = fopen("file2.txt", "r");
  arq3 = fopen("file3.txt", "w");

  if (arq1 == NULL || arq2 == NULL || arq3 == NULL) {
    perror("Erro");
    exit(1);
  }

  char dadosArq1[TAM]; char dadosArq2[TAM];

  // Lê os dados do arq1 e armazena na variável dadosArq1
  fscanf(arq1, "%s", dadosArq1);
  fscanf(arq2, "%s", dadosArq2);

  // Escreve os dados formatados das variáveis
  // dadosArq1 e dadosArq2 no arquivo 3
  fprintf(arq3, "%s %s", dadosArq1, dadosArq2);

  fclose(arq1);
  fclose(arq2);
  fclose(arq3);

  return 0;
}