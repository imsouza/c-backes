#include <stdio.h>

void main () {
  unsigned int op;

  printf("\n>>> Mês: ?\b");
  scanf("%i", &op);

  switch (op) {
    case 1: printf("\nJan\n"); break;
    case 2: printf("\nFev\n"); break;
    case 3: printf("\nMar\n"); break;
    case 4: printf("\nAbr\n"); break;
    case 5: printf("\nMai\n"); break;
    case 6: printf("\nJun\n"); break;
    case 7: printf("\nJul\n"); break;
    case 8: printf("\nAgo\n"); break;
    case 9: printf("\nSet\n"); break;
    case 10: printf("\nOut\n"); break;
    case 11: printf("\nNov\n"); break;
    case 12: printf("\nDez\n"); break;
    default: printf("\nMês Inválido.\n"); break;
  }
}