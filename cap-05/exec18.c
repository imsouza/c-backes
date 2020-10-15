#include <stdio.h>

void main () {
  int num, i, ePrimo = 1;
  scanf("%i", &num);

  if (num > 1) {
    for (i = 2; i <= num / 2; i++) {
      if (num % i == 0) {
        ePrimo = 0;
      } 
    }

    printf("%d %s primo!\n", num, (ePrimo ? "é" : "não é" ));
  } else {
    printf("Digite um valor > 1.\n");
  }
}