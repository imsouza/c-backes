#include <stdio.h>
#include <stdlib.h>

int lerNumeros () {
  FILE *arq;

  arq = fopen("nums.bin", "rb");

  int qtde, i;

  fscanf(arq,"%i", &qtde);

  int nums[qtde];

  for (i = 0; i < qtde; i++) {
    fscanf(arq,"%i", &nums[i]);
  }

  int maior = nums[0], menor = nums[0];

  for (i = 0; i < qtde; i++) {
    if (nums[i] > maior) {
      maior = nums[i];
    } if (nums[i] < menor) {
      menor = nums[i];
    }
  }

  printf("Maior: %i | Menor: %i\n", maior, menor);

  fclose(arq);
}


int main () {
  lerNumeros();
}