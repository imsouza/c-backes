#include <stdio.h>
#include <math.h>

float calcular (float n1, float n2, char op) {
  switch (op) {
    case '*' : return n1 * n2; break;
    case '/' : return n1 / n2; break;
    case '-' : return n1 - n2; break;
    case '+' : return n1 + n2; break;
    case '^' : return pow(n1, n2); break;
    default: return -1; break;
  }
}


void main () {
  float n1, n2;
  char op;

  printf(">>> x op y\n");
  scanf("%f %c %f", &n1, &op, &n2);

  printf("%f\n", calcular(n1, n2, op));
}