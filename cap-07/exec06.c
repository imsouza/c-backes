#include <stdio.h>
#include <string.h>

void main () {
  char string[100];
  char caractere;
  int i, j, _a = 0, _e = 0, _i = 0, _o = 0, _u = 0;

  printf("String: ");
  fgets(string, 100, stdin);

  printf("Caractere: ");
  scanf("%c", &caractere);

  for (i = 0; string[i] != '\0'; i++) {
    if (string[i] == 'A' || string[i] == 'a') {
      _a++;
      string[i] = caractere;
    } if (string[i] == 'E' || string[i] == 'e') {
      _e++;
      string[i] = caractere;
    } if (string[i] == 'I' || string[i] == 'i') {
      _i++;
      string[i] = caractere;
    } if (string[i] == 'O' || string[i] == 'o') {
      _o++;
      string[i] = caractere;
    } if (string[i] == 'U' || string[i] == 'u') {
      _u++;
      string[i] = caractere;
    }
  }

  printf("\nNova String: %s\nVogais: A -> %i | E -> %i | I -> %i | O -> %i | U -> %i\n", string, _a, _e, _i, _o, _u);
}