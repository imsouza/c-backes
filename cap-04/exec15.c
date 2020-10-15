#include <stdio.h>
#include <math.h>

void main () {
  int a, b, c;
  float delta, raizX1, raizX2;

  printf("\n\n\t\t\tax^2 + bx + c = 0\n\n");
  printf("\n>>> A, B e C: ");
  scanf("%i %i %i", &a, &b, &c);

  if (a != 0) {
    delta = pow(b, 2) - 4 * a * c;

    if (delta < 0) {
      printf("Não exite raiz.\n");
    } else if (delta == 0) {
      printf("Raiz única.\n");
    } else {
      raizX1 = (-b + sqrt(delta)) / 2 * a;
      raizX2 = (-b - sqrt(delta)) / 2 * a;

      printf("X1 = %f\n", raizX1);
      printf("X2 = %f\n", raizX2);
    }
  } else {
    printf("Não é equação de segundo grau.\n");
  }
}