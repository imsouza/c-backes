#include <stdio.h>

int numerosNaturaisDecrescente(int N, int count) {
  // Caso recursivo, decrementando N
  if (N >= count) {
    printf("%i ", N);
    return (numerosNaturaisDecrescente(N-1, count));
  } 

  // Caso base
  else {
    return count;
  }

}


int main () {
  int count=0;
  numerosNaturaisDecrescente(5, count);
  putchar('\n');
  return 0;
}