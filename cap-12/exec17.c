#include <stdio.h>
#include <stdlib.h>

int lerNumeros () {
  FILE *arq;

  arq = fopen("nums.bin", "rb");

  int nums[100], i;

  for (i = 0; i < 100; i++) {
    fread(&nums[i], sizeof(int), 1, arq);
  }

  for (i = 0; i < 100; i++) {
    printf("%i\n", nums[i]);
  }

  fclose(arq);
}


int main () {
  lerNumeros();
}