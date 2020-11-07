#include <stdio.h>

struct aluno {
  int matricula;
  char nome[20];
  float notas[3];
  float media;
  int indice;
};


int maiorIndice (struct aluno *a, int tam);
void lerDados (struct aluno *a, int tam);


void lerDados (struct aluno *a, int tam) {
  int i, j;
  float soma = 0;

  for (i = 0; i < tam; i++) {
    printf("LEITURA DE DADOS DO ALUNO #%i\n", i);

    printf("MATRICULA: ");
    setbuf(stdin, NULL);
    scanf("%i", &a[i].matricula);

    printf("NOME: ");
    setbuf(stdin, NULL);
    fgets(a[i].nome, 20, stdin);

    printf("NOTAS:\n");
    setbuf(stdin, NULL);
    for (j = 0; j < tam; j++) {
      printf("N%i: ",j+1);
      setbuf(stdin, NULL);
      scanf("%f", &a[i].notas[j]);
      soma += a[i].notas[j];
    }

    a[i].media = soma / tam;
    a[i].indice = i;
    printf("----------------------------------------\n");
  }

  printf("Indice da maior média: %i", maiorIndice(a, tam));
}


int maiorIndice (struct aluno *a, int tam) {
  int i, j;
  int maiorIndice = a[0].indice;

  for (i = 0; i < tam; i++) {
    if (a[i].indice > maiorIndice) {
      maiorIndice = a[i].indice;
    }
  }

  return maiorIndice;
}


int main () {
  struct aluno a[3];

  lerDados(a, 3);

  return 0;
}