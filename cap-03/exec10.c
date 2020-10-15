#include <stdio.h>

void main () {
  float montante = 78000000;
  float jogador1, jogador2, jogador3;

  jogador1 = montante - (montante * 0.46);
  montante -= jogador1;

  jogador2 = montante - (montante * 0.32);
  montante -= jogador2;
  
  jogador3 = montante;

  printf("Jogador1: R$%0.2f\nJogador2: R$%0.2f\nJogador3: R$%0.2f\n", jogador1, jogador2, jogador3);
}