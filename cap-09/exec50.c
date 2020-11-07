#include <stdio.h>

#define TAM 8

int menorValor (int *vetor, int tam, int count, int menor) {
  // Caso base
  if (count >= tam) {
    return menor;
  } 

  // Caso recursivo
  else {
    if (vetor[count] < menor) {
      return menorValor(vetor, tam, count, vetor[count]);
    } else {
      return menorValor(vetor, tam, count+1, menor);
    }
  }
}


int main () {
  int count = 0;
  int vetor[TAM] = {1,2,-33,4,0,1,2,-66};
  int menor = vetor[0];

  printf("%i\n", menorValor(vetor, TAM, count, menor));

  return 0;
}