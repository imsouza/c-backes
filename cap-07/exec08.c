#include <stdio.h>
#include <string.h>

int main () {
  char string1[10];
  char string2[10];

  gets(string1);
  setbuf(stdin, NULL);
  gets(string2);

  if (strstr(string1, string2) != NULL) {
    printf("Contém!\n");
  } else {
    printf("Não Contém!\n");
  }

  return 0;
}