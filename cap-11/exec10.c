#include <stdio.h>
#include <stdlib.h>

int *preencherVetor (int N, int valor) {
  int i;

  if (N >= 1) {
    int *V = (int *) malloc (N * sizeof(int));

    if (V == NULL) {
      printf("Erro! Memória insuficiente.\n");
      exit(0);
    }

    for (i = 0; i < N; i++) {
      V[i] = valor;
    }

    return V;
  } else {
    return NULL;
  }

  return 0;
}


int main () {
  int N, valor, i;

  scanf("%i %i", &N, &valor);

  int *resultado = preencherVetor(N, valor);

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