#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char nome[50];
  char esporte[50];
  int idade;
  float altura;
} atleta;


void gravarDadosAtleta () {
  FILE *arq;

  arq = fopen("atleta.bin", "rb");

  atleta atleta_t[5];

  int i;

  for (i = 0; i < 5; i++) {
    setbuf(stdin, NULL);
    fscanf(arq, "%s %s %i %f", 
    atleta_t[i].nome, atleta_t[i].esporte, 
    &atleta_t[i].idade, &atleta_t[i].altura);
  }

  char nomeAtletaMaisAlto[50];
  char nomeAtletaMaisVelho[50];

  int maiorIdade = atleta_t[0].idade;
  float maiorAltura = atleta_t[0].altura;

  for (i = 0; i < 5; i++) {
    if (atleta_t[i].idade > maiorIdade) {
      maiorIdade = atleta_t[i].idade;
      strcpy(nomeAtletaMaisVelho, atleta_t[i].nome);
    } if (atleta_t[i].altura > maiorAltura) {
      maiorAltura = atleta_t[i].altura;
      strcpy(nomeAtletaMaisAlto, atleta_t[i].nome);
    }
  }

  printf("Atleta mais alto: %s\nAtleta mais velho: %s\n", 
  nomeAtletaMaisAlto, nomeAtletaMaisVelho);

  fclose(arq);
}


int main () {
  gravarDadosAtleta();
}