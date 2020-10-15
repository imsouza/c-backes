#include <stdio.h>

void main () {
  unsigned int n1, n2, n3, op;
  printf(">>> (n1, n2, n3): ");
  scanf("%i %i %i", &n1, &n2, &n3);

  printf("\n\t\t\t  Médias\n\n(1) Geométrica | (2) Ponderada | (3) Harmônica | (4) Aritmética\n\n>>> Operação: ?\b");
  scanf("%i", &op);

  switch (op) {
    case 1:
      printf("\nMédia Geométrica: %i\n", n1 * n2 * n3);
      break;
    case 2:
      printf("\nMédia Ponderada: %i\n", (n1 + 2 * n2 * 3 * n3) / 6);
      break;
    case 3:
      printf("\nMédia Harmônica: %i\n", 1 / (1 / n1 + 1 / n2 + 1 / n3));
      break;
    case 4:
      printf("\nMédia Aritmética: %i\n", (n1 + n2 + n3) / 3);
      break;
    default:
      printf("\nOperação Inválida.\n");
      break;
  }
}