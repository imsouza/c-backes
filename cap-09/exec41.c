#include <stdio.h>

#define TAM 8

int somaVetor (int *vetor, int tam, int count) {
  int S;

  // Caso base
  if (count > tam) {
    S = 0;
  } 

  // Caso recursivo
  else {
    S = vetor[count-1] + somaVetor(vetor, tam, count+1);
  }

  return S;
}


int main () {
  int count = 0;
  int vetor[TAM] = {1,2,3,4,5,1,2,3};

  printf("%i\n", somaVetor(vetor, TAM, count));

  return 0;
}