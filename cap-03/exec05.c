#include <stdio.h>
#include <time.h>

void main () {
  int idade, anoAtual;
  printf("Idade: ?\b");
  scanf("%i", &idade);

  time_t _ano;
  time(&_ano);

  struct tm *ano = localtime(&_ano);
  anoAtual = (ano -> tm_year+1900);

  printf("Ano Nasc.: %04i\n", anoAtual-idade);
}