#include <stdio.h>
#include <stdlib.h>

int main () {
  FILE *arq;

  char nome[50];
  int telefone;

  arq = fopen("resultado.txt", "w");

  if (arq == NULL) {
    perror("[!] Erro");
    exit(1);
  }

  while (1) {
    printf("Nome: ");
    setbuf(stdin, NULL);
    scanf("%[a-z A-Z]s", nome);

    printf("Telefone: ");
    setbuf(stdin, NULL);
    scanf("%i", &telefone);

    if (telefone == 0) {
      break;
    } else {
      fprintf(arq, "%s - %i\n", nome, telefone);
    }
  }

  fclose(arq);
  
  return 0;
}