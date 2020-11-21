#include <stdio.h>
#include <stdlib.h>

int main () {
  int N, i;

  scanf("%i", &N);

  N -= 1; 

  int *p = (int *) calloc (N, sizeof(int));

  if (p == NULL) {
    printf("Erro! Memória insuficiente.\n");
    exit(0);
  }

  for (i = 0; i <= N; i++) {
    printf("%i ", p[i]);
  }

  putchar('\n');

  free(p);
  p = NULL;

  return 0;
}