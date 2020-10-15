#include <stdio.h>
#include <string.h>

void main () {
  float valor;
  char estado[2];

  printf(">>> Valor: R$");
  scanf("%f", &valor);
  printf(">>> Estado: ?\b");
  scanf("%s", estado);

  if (strstr(estado,"MG")) {
    printf("[MG] Preço + Imposto: %0.4f\n", valor+(valor*0.07));
  } else if (strstr(estado,"SP")) {
    printf("[SP] Preço + Imposto: %0.4f\n", valor+(valor*0.12));
  } else if (strstr(estado,"RJ")) {
    printf("[RJ] Preço + Imposto: %0.4f\n", valor+(valor*0.15));
  } else if (strstr(estado,"MS")) {
    printf("[MS] Preço + Imposto: %0.4f\n", valor+(valor*0.08));
  } else {
    printf("Estado inválido.\n");
  }
}