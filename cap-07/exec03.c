#include <stdio.h>

void main () {
  char string[100];
  int i;

  fgets(string, 100, stdin);

  for (i = 0; string[i] != '\0'; i++) {
    
  }
  
  printf("Len: %i\n", i-1);
}