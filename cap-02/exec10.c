#include <stdio.h>

void main () {
  int dia, mes, ano;
  printf("DD/MM/YYYY: ");
  scanf("%d/%d/%d", &dia, &mes, &ano);
  printf("%d\\%d\\%d\n", dia, mes, ano);  
}