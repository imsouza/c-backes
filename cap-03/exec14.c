#include <stdio.h>
#include <ctype.h>

void main () {
  char letra, lower;

  printf("Letra Maiúscula: ");
  scanf("%c", &letra);

  lower = tolower(letra);

  printf("%c\n", lower);
}