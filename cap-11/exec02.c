#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int matricula;
  char nome[20];
  float provas[3];
} aluno;


int main () {
  printf("struct aluno: %i bytes\n", (int) sizeof(aluno));
  return 0;
}