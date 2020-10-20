#include <stdio.h>
#include <string.h>

typedef struct {
  char nome[15];
  char esporte[15];
  int idade;
  float altura;
} dados;


// Estrutura auxiliar para organização da estrutura dados
typedef struct {
  char nome[15];
  char esporte[15];
  int idade;
  float altura;
} auxiliar;


void main () {
  dados atleta[5];
  auxiliar aux;

  int i, j = 4;
  int swap = 0;
  int tmp = 0;

  for (i = 0; i < 5; i++) {
    setbuf(stdin, NULL);

    printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("----------------- Atleta #%i -----------------\n", i+1);
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");

    printf("Nome ?\b ");
    setbuf(stdin, NULL);
    fgets(atleta[i].nome, 15, stdin);

    printf("Idade ?\b ");
    setbuf(stdin, NULL);
    scanf("%i", &atleta[i].idade);

    printf("Esporte ?\b ");
    setbuf(stdin, NULL);
    fgets(atleta[i].esporte, 15, stdin);

    printf("Altura ?\b ");
    setbuf(stdin, NULL);
    scanf("%f", &atleta[i].altura);
  }


  // Bubble sort com todos os dados
  do {
    swap = 0;
    for (i = 0; i < 5; i++) {
      if (atleta[i].idade > atleta[i + 1].idade) {
        aux.idade = atleta[i].idade;
        strcpy(aux.esporte, atleta[i].esporte);
        strcpy(aux.nome, atleta[i].nome);
        aux.altura = atleta[i].altura;

        atleta[i].idade = atleta[i + 1].idade;
        strcpy(atleta[i].esporte, atleta[i + 1].esporte);
        strcpy(atleta[i].nome, atleta[i + 1].nome);
        atleta[i].altura = atleta[i + 1].altura;

        atleta[i + 1].idade = aux.idade;
        strcpy(atleta[i + 1].esporte, aux.esporte);
        strcpy(atleta[i + 1].nome, aux.nome);
        atleta[i + 1].altura = aux.altura;

        swap = 1;
      }
    }

  } while (swap);

    
  while (j >= 0) {
    printf("----------------- Atleta #%i -----------------\n", j+1);
    printf("--> Nome: %s\n", atleta[j].nome);
    printf("--> Idade: %i\n", atleta[j].idade);
    printf("--> Esporte: %s\n", atleta[j].esporte);
    printf("--> Altura: %0.0f\n", atleta[j].altura);
    j--;
  }
}