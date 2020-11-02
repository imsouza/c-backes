#include <stdio.h>

int fatorPrimo (int n) {
  int i = 3, j = 0;
  int maior = 0;
  int fator = 0;
  int aux = n;

  while (j < n) {
    if (aux % 2 == 0) {
      aux -= aux / 2;
      fator = 2;
    } else if (aux % i == 0) {
      aux -= aux / i;
      fator = i;
    } else {
      i++;
    }

    if (fator > maior) { maior = fator; };
    
    j++;
  }

  return maior;
}


void main () {
  int n;

  scanf("%i", &n);

  printf("%i\n", fatorPrimo(n));
}