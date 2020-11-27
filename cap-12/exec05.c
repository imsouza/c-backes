#include <stdio.h>
#include <stdlib.h>

int *converterParaBinario (int decimal) {
  int *array = (int *) malloc (8 * sizeof(int));

  int i, div;

  div = decimal;

  for (i = 7; i >= 0; i--) {
    array[i] = div % 2;
    div /= 2;
  }

  return array;
}


int main () {
  FILE *arq;

  arq = fopen("resultado.txt", "w");

  if (arq == NULL) {
    perror("Erro");
    exit(1);
  }

  int decimal = 0;
  int binario = 0;
  int *arrayAux;
  int i;

  while (decimal >= 0) {
    printf("Decimal: ");
    setbuf(stdin, NULL);
    scanf("%i", &decimal);

    if (decimal < 0) {
      break;
    }

    arrayAux = converterParaBinario(decimal);

    for (i = 0; i < 8; i++) {
      fprintf(arq, "%i", arrayAux[i]);
    }

    fputc('\n', arq);
  }

  free(arrayAux);
  arrayAux = NULL;

  fclose(arq);

  return 0;
}