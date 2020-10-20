#include <stdio.h>

enum semana { dom = 1, seg, ter, qua, qui, sex, sab };

void main () {
  int valor;

  scanf("%i", &valor);

  switch (valor) {
    case 1: printf("%i\n", dom); break;
    case 2: printf("%i\n", seg); break;
    case 3: printf("%i\n", ter); break;
    case 4: printf("%i\n", qua); break;
    case 5: printf("%i\n", qui); break;
    case 6: printf("%i\n", sex); break;
    case 7: printf("%i\n", sab); break;
    default: printf("Erro.\n"); break;
  }
}