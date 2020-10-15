#include <stdio.h>
#include <string.h>

#define valorProduto 1500.00

void main () {
  char nome[100];
  float valorAvista = 0;
  float desconto    = 0;
  float troco       = 0;

  printf(">>> Nome do Produto: ");
  gets(nome);
  printf(">>> Valor à Vista: ");
  scanf("%f", &valorAvista);


  if (valorAvista >= valorProduto) {
    desconto = valorAvista - (valorAvista * 0.10);
    troco = valorAvista - desconto;
  } else {
    desconto = 0;
  }
  

  printf("\n\nNome\t\tValor Total\tDesconto\tÀ vista\t\ttroco?\n\n");
  puts("------------------------------------------------------------------------\n");
  printf("%s\t\t%0.2f\t\t%0.2f\t\t%0.2f\t\t%0.2f\n", nome, valorProduto, desconto, valorAvista, troco);
}