#include <stdio.h>

typedef struct {
  char estado[3];
  char cidade[15];
  char rua[15];
} endereco;


typedef struct {
  char nome[20];
  int idade;
  endereco ender;
} cadastro;


void main () {
  cadastro info;

  printf("\n\n\t\t[ -- Cadastro -- ]\n");
  printf("-------------------------------------------------------\n\n");

  printf("> Nome: ");
  setbuf(stdin, NULL);
  fgets(info.nome, 20, stdin);

  printf("> Idade: ");
  setbuf(stdin, NULL);
  scanf("%i", &info.idade);

  printf("> Estado: ");
  setbuf(stdin, NULL);
  scanf("%s", info.ender.estado);

  printf("> Cidade: ");
  setbuf(stdin, NULL);
  fgets(info.ender.cidade, 15, stdin);

  printf("> Rua: ");
  setbuf(stdin, NULL);
  fgets(info.ender.rua, 15, stdin);


  printf("\n\n\t\t[ -- Dados -- ]\n");
  printf("-------------------------------------------------------\n\n");
  printf("-> Nome: %s\n-> Idade: %i\n\n-> Estado: %s\n\n-> Cidade: %s\n-> Rua: %s\n", 
  info.nome, info.idade, info.ender.estado, info.ender.cidade, info.ender.rua);
}