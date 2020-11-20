#include <stdio.h>
#include <stdlib.h>

int *alocarVetor (int N) {
  int *p, i;
  if (N >= 1) {
    p = (int *) malloc (N*sizeof(int));

    if (p == NULL) {
      printf("Erro! Memória insuficiente.\n");
      system("pause");
      exit(0);
    }

    return p;
  } else {
    return NULL;
  }
}


int main () {
  int N, i;

  scanf("%i", &N);

  int *resultado = alocarVetor(N);

  if (resultado != NULL) {
    for (i = 0; i < N; i++) {
      printf("%i ", resultado[i]);
    }
  } else {
    printf("%p", resultado);
  }

  free(resultado);
  resultado = NULL;

  putchar('\n');

  return 0;
}