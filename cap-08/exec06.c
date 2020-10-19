#include <stdio.h>
#include <string.h>

typedef struct {
  int matricula;
  char nome[20];
  float notas[3];
  float media;
} aluno;


void main () {
  aluno a[5];

  int i, j;

  // Nome do aluno com a maior média dentre os 5
  char alunoDestaque[20];
  // Notas do aluno com a maior média dentre os 5
  float alunoNotas[3];
  // Variável auxiliar para pegar calcular a maior média 
  // dentre todos os 5 alunos
  float maiorMedia = 0;

  for (i = 0; i < 5; i++) {
    setbuf(stdin, NULL);

    printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("----------------- Aluno #%i -----------------\n", i+1);
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");

    printf("N. de Matricula: ");
    setbuf(stdin, NULL);
    scanf("%i", &a[i].matricula);

    printf("Nome: ");
    setbuf(stdin, NULL);
    fgets(a[i].nome, 20, stdin);

    for (j = 0; j < 3; j++) {
      printf("Nota (%i): ", j+1);
      setbuf(stdin, NULL);
      scanf("%f", &a[i].notas[j]);

      // Calcula o somatório das notas do aluno em questão
      a[i].media += a[i].notas[j];
    }

    // Finaliza o cálculo da média aritmética das notas do aluno em questão
    a[i].media /= 3;
  }


  // Este laço verifica a maior média dentre todas as médias calculadas previamente
  // de todos os 5 alunos
  for (i = 0; i < 5; i++) {
    if (a[i].media > maiorMedia) {
      // A variável recebe a maior média verificada até o momento
      maiorMedia = a[i].media;

      // Copia o nome do aluno de maior média para a variável de destino
      strcpy(alunoDestaque, a[i].nome);

      // Este laço atribui todas as 3 notas da maior média verificada até o momento
      // na variável em questão
      for (j = 0; j < 3; j++) {
        alunoNotas[j] = a[i].notas[j];
      }
    }
  }


  // Exibe os dados do aluno com a maior média dentre os 5
  printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
  printf("---> Aluno Destaque - %s", alunoDestaque);
  for (j = 0; j < 3; j++) {
    printf("---> Nota (1) - %0.2f\n", alunoNotas[j]);
  }
  printf("---> Média: %0.2f\n", maiorMedia);
  printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");
}