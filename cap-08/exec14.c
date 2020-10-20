#include <stdio.h>

enum compras { item1=2, item2=4, item3=12, item4=5 };

void main () {
  int valor;

  scanf("%i", &valor);

  switch (valor) {
    case 1: printf("Item 1: %i\n", item1); break;
    case 2: printf("Item 2: %i\n", item2); break;
    case 3: printf("Item 3: %i\n", item3); break;
    case 4: printf("Item 4: %i\n", item4); break;
    default: printf("Erro.\n"); break;
  }
}