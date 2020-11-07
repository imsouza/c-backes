#include <stdio.h>

// S e count como parâmetros auxiliares, simulando os parâmetros opcionais
int somatorio (int N, int S, int count) {
  if (count > N) {
    return S;
  } else {
    return (somatorio(N, S+count, count+1));
  }
}


int main () {
  int S=0, count=1;
  printf("Somatório: %i\n", somatorio(5, S, count));
  return 0;
}