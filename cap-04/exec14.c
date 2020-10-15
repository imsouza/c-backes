#include <stdio.h>

void main () {
  int num;

  scanf("%i", &num);

  if (num % 3 == 0 && num % 5 == 0) {
    printf("Inválido.\n");
  } else if (num % 3 == 0) {
    printf("%i é divisível por 3\n", num);
  } else if (num % 5 == 0) {
    printf("%i é divisível por 5\n", num);
  } else {
    printf("%i não é divisível por 5 nem por 3\n", num);
  }
}