#include <stdio.h>
#include <stdlib.h>

void lerNomes (char *arquivoEntrada, char *palavra) {
  printf("Informe o nome do arquivo de entrada: ");
  setbuf(stdin, NULL);
  scanf("%s", arquivoEntrada);

  printf("Informe uma palavra: ");
  setbuf(stdin, NULL);
  scanf("%s", palavra);
}


int main () {
  FILE *arq;

  char arquivoEntrada[20];
  char palavra[20];

  lerNomes(arquivoEntrada, palavra);

  arq = fopen(arquivoEntrada, "r");

  if (arq == NULL) {
    perror("Erro");
    exit(1);
  }

  int contagem = 0, i = 0, j = 0;
  char c;
  char string[100];

  // Lê a string e armazena na variável string
  fread(string, sizeof(char), 100, arq);

  // Looping em cada caractere das strings
  while (string[i] != '\0') {
    if (string[i] == palavra[j]) {
      j++;
      if (palavra[j] == '\0') {
        contagem++;
        j = 0;
      }
    } else {
      j = 0;
      if (string[i] == palavra[j]) {
        j++;
        if (palavra[j] == '\0') {
          contagem++;
          j = 0;
        }
      }
    }

    i++;
  }

  printf("Contagem: %i\n", contagem);

  fclose(arq);

  return 0;
}