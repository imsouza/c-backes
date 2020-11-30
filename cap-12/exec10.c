#include <stdio.h>
#include <stdlib.h>

// Estrutura para armazenar a ordem da matriz
struct matriz {
  int ordem[2];
};


int **lerElementosMatriz (char *nomeArquivo, int lin, int col) {
  FILE *arq, *arq2;

  arq2 = fopen("matrizGravada.txt", "w");
  arq = fopen(nomeArquivo, "r");

  int i, j;

  // Aloca as linhas
  int **p = (int **) calloc (lin, sizeof(int *));

  for (i = 0; i < lin; i++) {
    // Aloca as colunas
    p[i] = (int *) calloc (col, sizeof(int));
    for (j = 0; j < col; j++) {
      // Leitura de dados de cada elemento da matriz
      fscanf(arq, "%i", &p[i][j]);
    }
  }

  fclose(arq);
  fclose(arq2);

  return p;
}


// Função que retorna indiretamente um array do tipo estrutura
// contendo as respectivas ordens da matriz
struct matriz lerTamanhoMatriz (char *nomeArquivo) {
  FILE *arq;

  arq = fopen(nomeArquivo, "r");

  struct matriz vet;

  fscanf(arq, "%i %i", &vet.ordem[0], &vet.ordem[1]);

  fclose(arq);

  return vet;
}


void exibirMatriz (int **resultado, int lin, int col) {
  int i, j;

  for (i = 0; i < lin; i++) {
    for (j = 0; j < col; j++) {
      printf("%i ", resultado[i][j]);
    }

    putchar('\n');
  }
}


int main () {
  char nomeArquivo[20];
  printf("Digite o nome do arquivo: ");
  scanf("%s", nomeArquivo);

  // Copiando os valores da estrutura para a nova estrutura
  struct matriz vet = lerTamanhoMatriz(nomeArquivo); 

  int lin = vet.ordem[0];
  int col = vet.ordem[1];

  int **resultado = lerElementosMatriz (nomeArquivo, lin, col);

  exibirMatriz(resultado, lin, col);

  int i;

  // Liberando as colunas da matriz
  for (i = 0; i < lin; i++) {
    free(resultado[i]);
  }

  // Liberando as linhas
  free(resultado);
  resultado = NULL;

  return 0;
}