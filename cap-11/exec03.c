#include <stdio.h>
#include <stdlib.h>

typedef struct {
  char nome[20];
  int idade;
  char endereco[100];
} cadastro;


void mostrarDados (cadastro *pessoa, int N) {
  int i;

  printf("\n\n\t========================================\n");
  printf("\n\n\t\t Listar pessoas:\n\n");

  for (i = 0; i < N; i++) {
    printf("\t ------------ pessoa[%i] ------------\n\n", i);

    printf("- Nome pessoa: %s", pessoa[i].nome);
    printf("- Idade pessoa: %i\n", pessoa[i].idade);
    printf("- Endereço pessoa: %s\n", pessoa[i].endereco);
  }

  free(pessoa);
  pessoa = NULL;
}


int lerDados (cadastro *pessoa, int N) {
  int i;

  printf("\n\n\t\t Cadastrar pessoas:\n\n");

  for (i = 0; i < N; i++) {
    printf("\t ------------ pessoa[%i] ------------\n\n", i);

    printf("+ Nome pessoa: ");
    setbuf(stdin, NULL);
    fgets(pessoa[i].nome, 100, stdin);

    printf("+ Idade pessoa: ");
    setbuf(stdin, NULL);
    scanf("%i", &pessoa[i].idade);

    printf("+ Endereço pessoa: ");
    setbuf(stdin, NULL);
    fgets(pessoa[i].endereco, 100, stdin);
  }

  mostrarDados(pessoa, N);

  return 0;
}


int alocarDados (unsigned int N) {
  cadastro *pessoa;

  pessoa = (void *) malloc (N*sizeof(pessoa));

  if (pessoa == NULL) {
    printf("Erro! Memória insuficiente.\n");
    exit(0);
  }

  lerDados(pessoa, N);

  return 0;
}


int main () {
  alocarDados(5);

  return 0;
}