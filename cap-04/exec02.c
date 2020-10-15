#include <stdio.h>

void main () {
  int num1, num2;
  scanf("%i %i", &num1, &num2);

  if (num1 == num2) {
    printf("Números Iguais\n");
  } else if (num1 < num2) {
    printf("Maior: %i\n", num2);
  } else {
    printf("Maior: %i\n", num1);
  }
}