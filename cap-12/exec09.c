#include <stdio.h>
#include <stdlib.h>

int vogais (char *nomeArquivo) {
  FILE *arq;

  arq = fopen(nomeArquivo, "r");

  int vogais = 0;
  char c;

  while ((c = fgetc(arq)) != EOF) {
    switch (c) {
      case 'A': case 'a': vogais++; break;
      case 'E': case 'e': vogais++; break;
      case 'i': case 'I': vogais++; break;
      case 'O': case 'o': vogais++; break;
      case 'U': case 'u': vogais++; break;
    }
  }

  fclose(arq);

  return vogais;
}


int main () {
  char nomeArquivo[20];
  printf("Digite o nome do arquivo: ");
  scanf("%s", nomeArquivo);
  
  int qtdeVogais = vogais(nomeArquivo);

  printf("Qtde. Vogais: %i\n", qtdeVogais);
  
  return 0;
}