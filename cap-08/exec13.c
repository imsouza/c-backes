#include <stdio.h>

enum semana { jan=31, fev=29, mar=31, abr=30, mai=31, jun=30, jul=31, ago=31, set=30, out=31, nov=30, dez=31 };

void main () {
  int valor;

  scanf("%i", &valor);

  switch (valor) {
    case 1: printf("Mês: Jan, Dias: %i\n", jan); break;
    case 2: printf("Mês: Fev, Dias: %i\n", fev); break;
    case 3: printf("Mês: Mar, Dias: %i\n", mar); break;
    case 4: printf("Mês: Abr, Dias: %i\n", abr); break;
    case 5: printf("Mês: Mai, Dias: %i\n", mai); break;
    case 6: printf("Mês: Jun, Dias: %i\n", jun); break;
    case 7: printf("Mês: Jul, Dias: %i\n", jul); break;
    case 8: printf("Mês: Ago, Dias: %i\n", ago); break;
    case 9: printf("Mês: Set, Dias: %i\n", set); break;
    case 10: printf("Mês: Out, Dias: %i\n", out); break;
    case 11: printf("Mês: Nov, Dias: %i\n", nov); break;
    case 12: printf("Mês: Dez, Dias: %i\n", dez); break;
    default: printf("Erro.\n"); break;
  }
}