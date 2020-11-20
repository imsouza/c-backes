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

  free(p);
  p = NULL;
}


int main () {
  int N, i;

  scanf("%i", &N);
  printf("%p", alocarVetor(N));
  putchar('\n');

  return 0;
}