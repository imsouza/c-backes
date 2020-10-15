#include <stdio.h>

void main () {
  char op;
  int val1, val2;

  printf("\n[+, -, *, /] ?\b");
  scanf("%c", &op);

  printf("Valores: ");
  scanf("%i %i", &val1, &val2);

  switch (op) {
    case '+': printf("\n%i + %i = %i\n", val1, val2, val1+val2); break;
    case '-': printf("\n%i - %i = %i\n", val1, val2, val1-val2); break;
    case '*': printf("\n%i * %i = %i\n", val1, val2, val1*val2); break;
    case '/': printf("\n%i / %i = %i\n", val1, val2, val1/val2); break;
    default: printf("Operação Inválida.\n"); break;
  }
}