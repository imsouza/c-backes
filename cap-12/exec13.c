#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int matricula;
  char nome[15];
  float notas[3];
} dados;


void lerNomeArquivo (char *arquivoEntrada) {
  printf("Informe o nome do arquivo de entrada: ");
  setbuf(stdin, NULL);
  scanf("%s", arquivoEntrada);
}


int verificarQtdeLinhas (char *nomeArquivo) {
  FILE *arq;
  arq = fopen(nomeArquivo, "r");

  char c;

  int linhas = 0;

  // Lê cada caractere até chegar ao final do arquivo EOF
  while (fread(&c, sizeof(char), 1, arq)) {
    if (c == '\n') {
      linhas++;
    }
  }

  linhas++;

  fclose(arq);

  return linhas;
}


void lerArquivo (char *nomeArquivo, dados *aluno, int qtdeLinhas) {
  FILE *arq;

  arq = fopen(nomeArquivo, "r");

  int i, j;

  for (i = 0; i < qtdeLinhas; i++) {
    setbuf(stdin, NULL);
    fscanf(arq, "%i %s", &aluno[i].matricula, aluno[i].nome);
    for (j = 0; j < 3; j++) {
      setbuf(stdin, NULL);
      fscanf(arq, "%f", &aluno[i].notas[j]);
    }
  }

  fclose(arq);
}


int main () {
  char nomeArquivo[20];
  lerNomeArquivo(nomeArquivo);

  int qtde = verificarQtdeLinhas(nomeArquivo);

  dados aluno[qtde];

  lerArquivo(nomeArquivo, aluno, qtde);

  int i, j;

  for (i = 0; i < qtde; i++) {
    printf("\n============================================\n");
    printf("%i %s ", aluno[i].matricula, aluno[i].nome);
    for (j = 0; j < 3; j++) {
      printf("%0.2f ", aluno[i].notas[j]);
    }

    putchar('\n');
  }

  return 0;
}