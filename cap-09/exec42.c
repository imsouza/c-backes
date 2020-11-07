#include <stdio.h>

#define TAM 8

int calcularSoma (int *vetor, int tam, int count) {
  int S;

  // Caso base
  if (count > tam) {
    S = 0;
  } 

  // Caso recursivo
  else {
    S = vetor[count-1] + calcularSoma(vetor, tam, count+1);
  }

  return S;
}


float calcularMedia (int *vetor, int tam, int count) {
  return calcularSoma(vetor, TAM, count) / (float) TAM;
}


int main () {
  int count = 0;
  int vetor[TAM] = {1,2,3,4,5,1,2,3};

  printf("%0.4f\n", calcularMedia(vetor, TAM, count));

  return 0;
}