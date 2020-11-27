#include <stdio.h>
#include <string.h>

int main () {
  char string1[100];
  char string2[100];
  int count = 0, x = 0;

  gets(string1);
  setbuf(stdin, NULL);
  gets(string2);

  do {
    if (strcmp(string2+x, string1)) {
      count++;
      x += strlen(string1);
    } else {
      x++;
    }
  } while (x < strlen(string2));
  
  printf("%i\n", count);

  return 0;
}