#include <stdio.h>

void main () {
  float sal, prestacao, sal20;
  printf("Sal. | Prestação ?\b");
  scanf("%f %f", &sal, &prestacao);

  sal20 = sal*0.20;

  if (prestacao > sal20) {
    printf("Empréstimo não concedido.\n");
  } else {
    printf("Empréstimo concedido.\n");
  }
}