#include <stdio.h>

enum MESES {JAN=31, FEV=29, MAR=31, ABR=30, MAI=31, JUN=30, JUL=31, AGO=31, SET=30, OUT=31, NOV=30, DEZ=31};

void imprimeMes (int n) {
  switch (n) {
    case 1: printf("JAN, Qtde. Dias: %i\n", JAN); break;
    case 2: printf("FEV, Qtde. Dias: %i\n", FEV); break;
    case 3: printf("MAR, Qtde. Dias: %i\n", MAR); break;
    case 4: printf("ABR, Qtde. Dias: %i\n", ABR); break;
    case 5: printf("MAI, Qtde. Dias: %i\n", MAI); break;
    case 6: printf("JUN, Qtde. Dias: %i\n", JUN); break;
    case 7: printf("JUL, Qtde. Dias: %i\n", JUL); break;
    case 8: printf("AGO, Qtde. Dias: %i\n", AGO); break;
    case 9: printf("SET, Qtde. Dias: %i\n", SET); break;
    case 10: printf("OUT, Qtde. Dias: %i\n", OUT); break;
    case 11: printf("NOV, Qtde. Dias: %i\n", NOV); break;
    case 12: printf("DEZ, Qtde. Dias: %i\n", DEZ); break;
    default: printf("Mês inválido.\n"); break;
  }
}


void main () {
  int diaMes;

  scanf("%i", &diaMes);

  imprimeMes(diaMes);
}