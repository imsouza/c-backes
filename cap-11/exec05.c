#include <stdio.h>
#include <stdlib.h>

int main () {
  int N, i;

  do {
    printf("N: ");
    setbuf(stdin, NULL);
    scanf("%i", &N);
  } while (N < 1);

  int *V = (int *) malloc (N * sizeof(int));

  if (V == NULL) {
    printf("Erro! Memória insuficiente.\n");
    exit(0);
  }

  // Lê dados
  for (i = 0; i < N; i++) {
    do {
      printf("Valor (>2): ");
      setbuf(stdin, NULL);
      scanf("%i", &V[i]);
    } while (V[i] < 2);
  }

  printf("\n\nValores: \n");
  
  // Exibe dados
  for (i = 0; i < N; i++) {
    printf("p[%i]: %i\n", i, V[i]);
  }

  free(V);
  V = NULL;

  return 0;
}