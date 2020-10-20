#include <stdio.h>
#include <string.h>

typedef struct {
  char nome[15];
  char esporte[15];
  int idade;
  float altura;
} dados;


// Esta estrutura armazena o nome do atleta mais alto e do mais velho
typedef struct {
  char atletaMaisVelho[15];
  char atletaMaisAlto[15];
} atletaNome;


void main () {
  dados atleta[5];
  atletaNome nome;

  int i, j;

  int maiorIdade    = 0;
  float maiorAltura = 0.0;

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


  maiorIdade  = atleta[0].idade;
  maiorAltura = atleta[0].altura;

  for (i = 0; i < 5; i++) {
    if (atleta[i].idade > maiorIdade) {
      maiorIdade = atleta[i].idade;
      strcpy(nome.atletaMaisVelho, atleta[i].nome);
    } if (atleta[i].altura > maiorAltura) {
      maiorAltura = atleta[i].altura;
      strcpy(nome.atletaMaisAlto, atleta[i].nome);
    }
  }


  printf("---> Atleta mais alto: %s", nome.atletaMaisAlto);
  printf("---> Atleta mais velho: %s\n", nome.atletaMaisVelho);
}