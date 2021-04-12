#include <stdio.h>

int main () {
  int a, *b, **c, ***d;

  scanf("%i", &a);

  // Dobro
  // **b -> &a = x
  b = &a;
  (*b) *= 2;
  printf("%i * 2 = %i\n", a/2, *b);

  // Triplo
  // **c -> &b => **b -> &a = x
  c = &b;
  (**c) /= 2;
  (**c) *= 3;
  printf("%i * 3 = %i\n", a/3, **c);

  // Quádruplo
  // ***d -> &c => **c -> &b => **b -> &a = x
  d = &c;
  (***d) /= 3;
  (***d) *= 4;
  printf("%i * 4 = %i\n", a/4, ***d);

  return 0;
}
