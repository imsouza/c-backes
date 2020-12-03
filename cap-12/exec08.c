#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
  char nome[30];
  int DD;
  int MM;
  int YY;
} datas;


int verificarQtdeLinhas () {
  FILE *arq;

  arq = fopen("datas.txt", "r");

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


// Pega o ano atual
int retornarAno () {
  struct tm *data;
  time_t segundos;
  time(&segundos);
  data = localtime(&segundos);
  
  int ano = data->tm_year+1900;

  return ano;
}


int main () {
  FILE *arq, *arq2;

  arq = fopen("datas.txt", "r");
  arq2 = fopen("idade.txt", "w");

  int qtde = verificarQtdeLinhas();

  datas pessoas[qtde];

  if (arq == NULL || arq2 == NULL) {
    perror("[!] Erro");
    exit(1);
  }

  int i;

  for (i = 0; i < qtde; i++) {
    setbuf(stdin, NULL);

    fscanf(arq, "%s %i/%i/%i",
    pessoas[i].nome,
    &pessoas[i].DD,
    &pessoas[i].MM,
    &pessoas[i].YY);
  }
    
  for (i = 0; i < qtde; i++) {
    fprintf(arq2, "Nome: %s, Idade: %i\n", 
    pessoas[i].nome, retornarAno() - pessoas[i].YY);
  }

  fclose(arq);
  fclose(arq2);
  
  return 0;
}