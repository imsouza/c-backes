#include <stdio.h>

int numerosNaturais (int N, int count) {
  // Caso base
  if (count > N) {
    return count;
  } 

  // Caso recursivo, incrementando count
  else {
    printf("%i ", count);
    return (numerosNaturais(N, count+1));
  }
}


int main () {
  int count=0;
  numerosNaturais(5, count);
  putchar('\n');
  return 0;
}