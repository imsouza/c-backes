#include <stdio.h>
#include <stdlib.h>

void lerNomeArquivo (char *arquivoEntrada) {
  printf("Informe o nome do arquivo de entrada: ");
  setbuf(stdin, NULL);
  scanf("%s", arquivoEntrada);
}


int *numeroLetras (char *nomeArquivo) {
  FILE *arq;

  arq = fopen(nomeArquivo, "r");

  char c;

  int *letras = (int *) calloc (26, sizeof(int));

  while ((c = fgetc(arq)) != EOF) {
    if (c == 'a' || c == 'A') { letras[0]++; } 
    else if (c == 'b' || c == 'B') { letras[1]++; }
    else if (c == 'c' || c == 'C') { letras[2]++; }
    else if (c == 'd' || c == 'D') { letras[3]++; }
    else if (c == 'e' || c == 'E') { letras[4]++; }
    else if (c == 'f' || c == 'F') { letras[5]++; }
    else if (c == 'g' || c == 'G') { letras[6]++; }
    else if (c == 'h' || c == 'H') { letras[7]++; }
    else if (c == 'i' || c == 'I') { letras[8]++; }
    else if (c == 'j' || c == 'J') { letras[9]++; }
    else if (c == 'k' || c == 'K') { letras[10]++; }
    else if (c == 'l' || c == 'L') { letras[11]++; }
    else if (c == 'm' || c == 'M') { letras[12]++; }
    else if (c == 'n' || c == 'N') { letras[13]++; }
    else if (c == 'o' || c == 'O') { letras[14]++; }
    else if (c == 'p' || c == 'P') { letras[15]++; }
    else if (c == 'q' || c == 'Q') { letras[16]++; }
    else if (c == 'r' || c == 'R') { letras[17]++; }
    else if (c == 's' || c == 'S') { letras[18]++; }
    else if (c == 't' || c == 'T') { letras[19]++; }
    else if (c == 'u' || c == 'U') { letras[20]++; }
    else if (c == 'v' || c == 'V') { letras[21]++; }
    else if (c == 'w' || c == 'W') { letras[22]++; }
    else if (c == 'x' || c == 'X') { letras[23]++; }
    else if (c == 'y' || c == 'Y') { letras[24]++; }
    else if (c == 'z' || c == 'Z') { letras[25]++; }
  }

  return letras;
}


int main () {
  char nomeArquivo[20];
  
  lerNomeArquivo(nomeArquivo);

  int *array = numeroLetras(nomeArquivo);

  int i, j;

  int aux = 97;

  putchar('\n');

  for (i = 0; i < 26; i++) {
    printf("%c : %i\n", aux++, array[i]);
  }

  putchar('\n');

  free(array);
  array = NULL;

  return 0;
}