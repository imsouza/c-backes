#include <stdio.h>
#include <string.h>

typedef struct {
  char nome[15];
  int dataNasc;
  int idade;
} dados;


void main () {
  dados pessoa[6];

  int i, j;

  int maiorIdade = 0, menorIdade;
  char nomePessoaMaisVelha[15] = " ";
  char nomePessoaMaisNova[15]  = " ";

  for (i = 0; i < 6; i++) {
    setbuf(stdin, NULL);

    printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("----------------- Pessoa #%i -----------------\n", i+1);
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");

    printf("Nome ?\b ");
    setbuf(stdin, NULL);
    fgets(pessoa[i].nome, 15, stdin);

    printf("Data Nasc. ?\b ");
    setbuf(stdin, NULL);
    scanf("%i", &pessoa[i].dataNasc);

    pessoa[i].idade = 2020 - pessoa[i].dataNasc;
  }


  maiorIdade = pessoa[0].idade;
  menorIdade = pessoa[0].idade;

  for (i = 0; i < 6; i++) {
    if (pessoa[i].idade > maiorIdade) {
      maiorIdade = pessoa[i].idade;
      strcpy(nomePessoaMaisVelha, pessoa[i].nome);
    } else if (pessoa[i].idade < menorIdade) {
      menorIdade = pessoa[i].idade;
      strcpy(nomePessoaMaisNova, pessoa[i].nome);
    }
  }


  printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
  printf("---> Pessoa mais velha: %s", nomePessoaMaisVelha);
  printf("---> Pessoa mais nova: %s\n", nomePessoaMaisNova);
  printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");
}