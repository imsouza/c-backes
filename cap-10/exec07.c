#include <stdio.h>
#include <string.h>

int verificaString (char *str1, char *str2) {
  int i, j, contagem = 0;

  for (i = 0; i < strlen(str1) - 1; i++) {
    if (*(str2+0) == *(str1+i)) {
      for (j = 0; j < strlen(str2) - 1; j++) { 
        if (*(str2+j) == *(str1+(i++))) {
          contagem++;
        }
      }
    }

    if (contagem == strlen(str2) - 1) {
      break;
    }
  }

  if (contagem == strlen(str2) - 1) {
    return 1;
  } else {
    return -1;
  }
}


int main () {
  char str1[100], str2[100];

  printf("String 1: ");
  setbuf(stdin, NULL);
  fgets(str1, 100, stdin);

  printf("String 2: ");
  setbuf(stdin, NULL);
  fgets(str2, 100, stdin);

  int retorno = verificaString(str1, str2);

  retorno == 1 ? printf("Segunda string ocorre dentro da primeira.\n") : 
                 printf("Não ocorre! %i\n", retorno);

  return 0;
}