#include <stdio.h>
#include <stdlib.h>

// Definição de tamanho dos arquivos
#define TAM 10

void lerNomesArquivos (char *arquivoEntrada1, char *arquivoEntrada2) {
  printf("Informe o nome do arquivo de entrada 1: ");
  setbuf(stdin, NULL);
  scanf("%s", arquivoEntrada1);

  printf("Informe o nome do arquivo de entrada 2: ");
  setbuf(stdin, NULL);
  scanf("%s", arquivoEntrada2);
}


int main () {
  FILE *arq1, *arq2, *arq3;

  char arquivoEntrada1[20];
  char arquivoEntrada2[20];

  lerNomesArquivos(arquivoEntrada1, arquivoEntrada2);

  arq1 = fopen(arquivoEntrada1, "r");
  arq2 = fopen(arquivoEntrada2, "r");
  arq3 = fopen("saida.txt", "w");

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