#include <stdio.h>
#include <math.h>

int diasDoMes[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };

struct data {
  int dia;
  int mes;
  int ano;
};


// Verifica se o ano é bissexto
int bissexto(int ano) {
  if(ano % 400 == 0) return 1;
  if(ano % 4 == 0 && ano % 100 != 0) return 1;

  return 0;
}


// Calcula o numero de dias da data
int numeroDeDias(struct data d) {
  int resultado = 0;
  int i;

  for(i = 1; i < d.ano; i++) {
    if(bissexto(i)) resultado += 366;
    else resultado += 365;
  }

  for(i = 1; i < d.mes; i++) {
    resultado += diasDoMes[i];
    if(bissexto(d.ano) && i == 2) resultado++;
  }

  resultado += d.dia;

  return resultado;
}


int main () {
  struct data d1, d2;

  int diff = 0;

  if (scanf("%d %d %d", &d1.dia, &d1.mes, &d1.ano) != 3) {
    return -1;
  } if (scanf("%d %d %d", &d2.dia, &d2.mes, &d2.ano) != 3) {
    return -1;
  }

  diff = fabs(numeroDeDias(d1) - numeroDeDias(d2));

  printf("=> Dias: %i\n", diff);
}