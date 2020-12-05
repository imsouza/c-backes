#include <stdio.h>
#include <stdlib.h>

typedef struct {
  char nome[50];
  char esporte[50];
  int idade;
  float altura;
} atleta;


void gravarDadosAtleta () {
  FILE *arq;

  arq = fopen("atleta.bin", "wb");

  atleta atleta_t[5];

  int i;

  for (i = 0; i < 5; i++) {
    printf("==> Atleta : %i\n", i);
    printf("Nome: ");
    setbuf(stdin, NULL);
    fgets(atleta_t[i].nome, 50, stdin);

    printf("Esporte: ");
    setbuf(stdin, NULL);
    fgets(atleta_t[i].esporte, 50, stdin);

    printf("Idade: ");
    setbuf(stdin, NULL);
    scanf("%i", &atleta_t[i].idade);

    printf("Altura: ");
    setbuf(stdin, NULL);
    scanf("%f", &atleta_t[i].altura);
  }

  for (i = 0; i < 5; i++) {
    fprintf(arq, "%s %s %i %f\n", 
    atleta_t[i].nome, atleta_t[i].esporte, 
    atleta_t[i].idade, atleta_t[i].altura);
  }

  fclose(arq);
}


int main () {
  gravarDadosAtleta();
}