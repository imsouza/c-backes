#include <stdio.h>

void main () {
  unsigned int op;

  printf("\n>>> Semana: ?\b");
  scanf("%i", &op);

  switch (op) {
    case 1: printf("\nDom\n"); break;
    case 2: printf("\nSeg\n"); break;
    case 3: printf("\nTer\n"); break;
    case 4: printf("\nQua\n"); break;
    case 5: printf("\nQui\n"); break;
    case 6: printf("\nSex\n"); break;
    case 7: printf("\nSab\n"); break;
    default: printf("\nSemana Inválida.\n"); break;
  }
}