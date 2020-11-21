#include <stdio.h>
#include <stdlib.h>

int main () {
  int tam, i;

  printf("Tamanho do vetor: ");
  scanf("%i", &tam);

  int *p = (int *) malloc (tam * sizeof(int));

  if (p == NULL) {
    printf("Erro! Memória insuficiente.\n");
    exit(0);
  }

  // Lê dados
  for (i = 0; i < tam; i++) {
    printf("p[%i]: ", i);
    setbuf(stdin, NULL);
    scanf("%i", &p[i]);
  }

  printf("\n\nValores: \n");

  // Exibe dados
  for (i = 0; i < tam; i++) {
    printf("p[%i]: %i\n", i, p[i]);
  }

  free(p);
  p = NULL;

  return 0;
}